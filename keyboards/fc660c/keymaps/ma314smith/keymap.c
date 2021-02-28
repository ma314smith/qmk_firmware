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
#include "fc660c.h"

//Tap Dance Declarations
enum {
  X_TAP_DANC_LSFT = 0,
  X_TAP_DANC_RSFT = 1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( //  default layer
        KC_ESC,                     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,     KC_BSPC,
        LT(3,KC_TAB),               KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,     KC_DEL,
        KC_LCTL,                    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,     KC_ENT,
        TD(X_TAP_DANC_LSFT),        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,TD(X_TAP_DANC_RSFT),     KC_UP,
        KC_LCTL,        KC_LGUI,KC_LALT,          LT(2,KC_SPC),                       KC_RALT,KC_RCTL,MO(6),      KC_LEFT,KC_DOWN,KC_RGHT
    ),
  [1] = LAYOUT( //  game layer
        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,                KC_SPC,                KC_TRNS,KC_TRNS,MO(6),       KC_TRNS,KC_TRNS,KC_TRNS
    ),
  [2] = LAYOUT( //  numpad layer
        KC_GRV, KC_F1,          KC_F2,              KC_F3,              KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,     KC_INS,
        KC_TRNS,KC_TRNS,        LGUI(LSFT(KC_LEFT)),LGUI(LSFT(KC_RGHT)),KC_TRNS,KC_TRNS,KC_TRNS,KC_PGUP,KC_UP,KC_PGDN,KC_PSCR,KC_SLCK,KC_PAUS,KC_TRNS,     KC_CAPS,
        KC_TRNS,LCTL(KC_LSFT),  KC_TRNS,            KC_TRNS,            KC_TRNS,KC_TRNS,KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,KC_SPC,KC_END,KC_TRNS,KC_END, KC_TRNS,KC_TRNS,KC_TRNS,     KC_PGUP,
        KC_TRNS,KC_TRNS,        KC_TRNS,                KC_TRNS,                KC_TRNS,KC_TRNS,MO(6),       KC_HOME,KC_PGDN,KC_END
    ),
  [3] = LAYOUT( //  navigation layer
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                KC_TRNS,
        KC_TRNS,KC_MUTE,KC_VOLD,KC_VOLU,KC_TRNS,KC_TRNS,KC_TRNS,KC_7,   KC_8,   KC_9,   KC_TRNS,KC_TRNS,KC_TRNS,LCTL(LALT(KC_DEL)),     KC_TRNS,
        KC_TRNS,KC_MPRV,KC_MPLY,KC_MNXT,KC_TRNS,KC_TRNS,KC_TRNS,KC_4,   KC_5,   KC_6,   KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_1,   KC_2,   KC_3,   KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,                KC_0,                KC_DOT,KC_TRNS,MO(6),      KC_TRNS,KC_TRNS,KC_TRNS
    ),
  [4] = LAYOUT(//  fc660c default layer
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,     KC_INS,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,     KC_DEL,
        KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,     KC_ENT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,
        KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                       KC_RALT,KC_RCTL,MO(6),      KC_LEFT,KC_DOWN,KC_RGHT
    ),
  [5] = LAYOUT(//  fc660c default FUNCTION layer
        KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_SLCK,KC_PAUS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_HOME,KC_PGUP,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_END, KC_PGDN,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,                KC_TRNS,                KC_TRNS,KC_TRNS,MO(6),       KC_TRNS,KC_TRNS,KC_TRNS
    ),
  [6] = LAYOUT( //  layer switch
        KC_TRNS, TO(1),  TO(2),  TO(3),  TO(4),  TO(5),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TO(0), KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,                KC_SPC,                KC_TRNS,KC_TRNS,MO(6),       KC_TRNS,KC_TRNS,KC_TRNS
    )
};

const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};

enum {
  HOLD = 0,
  SINGLE_TAP = 1,
  DOUBLE_TAP = 2,
  TRIPLE_TAP = 3
};

typedef struct {
  bool is_press_action;
  int state;
} tap;

int cur_dance (qk_tap_dance_state_t *state) {
  if (state->pressed==0) {
    switch (state->count) {
      case 1: return SINGLE_TAP;
      case 2: return DOUBLE_TAP;
      case 3: return TRIPLE_TAP;
    }
  }

  return HOLD;
}

//**************** Definitions needed for quad function to work *********************//

//instanalize an instance of 'tap' for the 'x' tap dance.
static tap xtap_state = {
  .is_press_action = true,
  .state = 0
};

void x_lsft_finished (qk_tap_dance_state_t *state, void *user_data) {
  xtap_state.state = cur_dance(state);
  switch (xtap_state.state) {
    case SINGLE_TAP: register_mods(MOD_BIT(KC_LSFT)); register_code(KC_9); break;
    case DOUBLE_TAP: register_mods(MOD_BIT(KC_LSFT)); register_code(KC_LBRC); break;
    case TRIPLE_TAP: register_code(KC_LBRC); break;
    case HOLD: register_mods(MOD_BIT(KC_LSFT)); break;
  }
}

void x_lsft_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (xtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_9); unregister_mods(MOD_BIT(KC_LSFT)); break;
    case DOUBLE_TAP: unregister_code(KC_LBRC); unregister_mods(MOD_BIT(KC_LSFT)); break;
    case TRIPLE_TAP: unregister_code(KC_LBRC); break;
    case HOLD: unregister_mods(MOD_BIT(KC_LSFT)); break;
  }
  xtap_state.state = 0;
};

void x_rsft_finished (qk_tap_dance_state_t *state, void *user_data) {
  xtap_state.state = cur_dance(state);
  switch (xtap_state.state) {
    case SINGLE_TAP: register_mods(MOD_BIT(KC_RSFT)); register_code(KC_0); break;
    case DOUBLE_TAP: register_mods(MOD_BIT(KC_RSFT)); register_code(KC_RBRC); break;
    case TRIPLE_TAP: register_code(KC_RBRC); break;
    case HOLD: register_mods(MOD_BIT(KC_RSFT)); break;
  }
}

void x_rsft_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (xtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_0); unregister_mods(MOD_BIT(KC_RSFT)); break;
    case DOUBLE_TAP: unregister_code(KC_RBRC); unregister_mods(MOD_BIT(KC_RSFT)); break;
    case TRIPLE_TAP: unregister_code(KC_RBRC); break;
    case HOLD: unregister_mods(MOD_BIT(KC_RSFT)); break;
  }
  xtap_state.state = 0;
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [X_TAP_DANC_LSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_lsft_finished, x_lsft_reset),
  [X_TAP_DANC_RSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_rsft_finished, x_rsft_reset)
};