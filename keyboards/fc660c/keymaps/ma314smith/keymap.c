/*
Copyright 2017 Balz Guenat

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Custom keycodes for OS-aware behavior.
enum custom_keycodes {
    OS_CMD = SAFE_RANGE, // Caps Lock: Cmd (Left GUI) on macOS, Left Ctrl on Windows/Linux
    GLOBE_FN,            // bottom-right: Globe/fn on macOS, momentary FN layer on Windows/Linux
    OS_HOME,             // line start: Home on Win/Linux, Cmd+Left on macOS
    OS_END,              // line end:   End  on Win/Linux, Cmd+Right on macOS
};

// Updated by OS detection (see process_detected_host_os_user below).
static os_variant_t current_os = OS_UNSURE;

static inline bool is_mac(void) {
    return current_os == OS_MACOS || current_os == OS_IOS;
}

enum layers {
    BASE = 0, // default layer
    FN,       // F-keys + navigation (Home/End, arrows, PgUp/PgDn) -- held via Space (or bottom-right on Windows)
    MEDIA,    // media controls + numpad digits -- held via Tab
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT( //  default layer
        KC_ESC,        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,     KC_BSPC,
        LT(MEDIA,KC_TAB),KC_Q, KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,     KC_DEL,
        OS_CMD,        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,     KC_ENT,
        KC_LSFT,       KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,
        KC_LCTL,    KC_LGUI,KC_LALT,         LT(FN,KC_SPC),                    KC_RALT,KC_RCTL,GLOBE_FN,   KC_LEFT,KC_DOWN,KC_RGHT
    ),
    [FN] = LAYOUT( //  F-keys + navigation layer
        KC_GRV, KC_F1,         KC_F2,              KC_F3,              KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,     KC_INS,
        _______,_______,       LGUI(LSFT(KC_LEFT)),LGUI(LSFT(KC_RGHT)),_______,_______,_______,KC_PGUP,KC_UP,  KC_PGDN,KC_PSCR,KC_SCRL,KC_PAUS,_______,    KC_CAPS,
        _______,LCTL(KC_LSFT), _______,            _______,            _______,_______,OS_HOME,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,     _______,
        _______,_______,       _______,            _______,            _______,KC_SPC, OS_END, _______,OS_END, _______,_______,_______,     KC_PGUP,
        _______,_______,       _______,                _______,                _______,_______,_______,     OS_HOME,KC_PGDN,OS_END
    ),
    [MEDIA] = LAYOUT( //  media + numpad layer
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,
        _______,KC_MUTE,KC_VOLD,KC_VOLU,_______,_______,_______,KC_7,   KC_8,   KC_9,   _______,_______,_______,LCTL(LALT(KC_DEL)),     _______,
        _______,KC_MPRV,KC_MPLY,KC_MNXT,_______,_______,_______,KC_4,   KC_5,   KC_6,   _______,_______,     _______,
        _______,_______,_______,_______,_______,_______,_______,KC_1,   KC_2,   KC_3,   _______,_______,     _______,
        _______,_______,_______,                KC_0,                KC_DOT,_______,_______,     _______,_______,_______
    )
};

// OS detection: store the detected OS and put GUI/Alt into standard macOS
// (Option/Command) positions automatically when on a Mac. Turn OFF the macOS
// "swap Option/Command" keyboard setting so the two don't cancel out.
bool process_detected_host_os_user(os_variant_t os) {
    current_os = os;
    bool mac = (os == OS_MACOS || os == OS_IOS);
    keymap_config.swap_lalt_lgui = mac;
    keymap_config.swap_ralt_rgui = mac;
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OS_CMD: {
            // Caps Lock: Cmd on macOS, Left Ctrl on Windows/Linux.
            uint16_t mod = is_mac() ? KC_LGUI : KC_LCTL;
            if (record->event.pressed) {
                register_code(mod);
            } else {
                unregister_code(mod);
            }
            return false;
        }
        case GLOBE_FN:
            if (is_mac()) {
                // Apple Globe/fn key (consumer usage 0x29D). Globe combos
                // (Globe+E, Globe+arrows) need KEYBOARD_SHARED_EP=yes & NKRO off.
                host_consumer_send(record->event.pressed ? AC_NEXT_KEYBOARD_LAYOUT_SELECT : 0);
            } else {
                // No Windows Globe equivalent; act as a momentary FN layer
                // (firmware-local, like a laptop Fn key).
                if (record->event.pressed) {
                    layer_on(FN);
                } else {
                    layer_off(FN);
                }
            }
            return false;
        case OS_HOME:
            if (record->event.pressed) {
                if (is_mac()) {
                    register_code(KC_LGUI);
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (is_mac()) {
                    unregister_code(KC_LEFT);
                    unregister_code(KC_LGUI);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            return false;
        case OS_END:
            if (record->event.pressed) {
                if (is_mac()) {
                    register_code(KC_LGUI);
                    register_code(KC_RGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (is_mac()) {
                    unregister_code(KC_RGHT);
                    unregister_code(KC_LGUI);
                } else {
                    unregister_code(KC_END);
                }
            }
            return false;
    }
    return true;
}
