#include "dz60.h"

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

//Tap Dance Declarations
enum {
  X_TAP_DANC_LSFT = 0,
  X_TAP_DANC_RSFT = 1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,--------------------------------------------------------------------------------------------.
 * | GESC   |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
 * |--------------------------------------------------------------------------------------------+
 * | LT(3,Tab) |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
 * |--------------------------------------------------------------------------------------------+
 * |    MO(2)    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter   |
 * |--------------------------------------------------------------------------------------------+
 * | LSPO        |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSPC             |
 * |--------------------------------------------------------------------------------------------+
 * | LCtrl | LGui | LAlt  | LT(2,Sp) | LT(2,Sp) | LT(2,Sp) | RAlt |  MO(2)  |  MO(4)  |  RCtrl  |
 * `--------------------------------------------------------------------------------------------'
 */

	KEYMAP(
		F(0), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC, 
		LT(3,KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
		MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
		TD(X_TAP_DANC_LSFT), KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, TD(X_TAP_DANC_RSFT), KC_NO, 
		KC_LCTL, KC_LGUI, KC_LALT, LT(2,KC_SPC), LT(2,KC_SPC), LT(2,KC_SPC), KC_RALT, MO(2), KC_NO, MO(4), KC_RCTL),

/* Game
 * ,--------------------------------------------------------------------------------------------.
 * |        |     |     |     |     |     |     |     |     |     |     |     |     |           |
 * |--------------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     |     |     |     |     |        |
 * |--------------------------------------------------------------------------------------------+
 * |             |     |     |     |     |     |     |     |     |     |     |     |            |
 * |--------------------------------------------------------------------------------------------+
 * |             |     |     |     |     |     |     |     |     |     |     |                  |
 * |--------------------------------------------------------------------------------------------+
 * |       |      |       | Space     | Space | Space      |      |         |         |         |
 * `--------------------------------------------------------------------------------------------'
 */

  KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_SPC, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS),

/* Navigation
 * ,--------------------------------------------------------------------------------------------.
 * |   `    | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |    DEL    |
 * |--------------------------------------------------------------------------------------------+
 * |       |     |Gui+Sft+<-|Gui+Sft+->|     |     |     |PGUP| UP |PGDN |PSCR|SLCK|Pause|      |
 * |--------------------------------------------------------------------------------------------+
 * |           |Ctl+Sft|     |     |     |     |HOME |LEFT |DOWN |RIGHT| INS | DEL |            |
 * |--------------------------------------------------------------------------------------------+
 * |            |     |     |CpsLck|     |Space| END |     |     |     |     |                  |
 * |--------------------------------------------------------------------------------------------+
 * |       |      |       |           |       |            |      |         |         |         |
 * `--------------------------------------------------------------------------------------------'
 */

	KEYMAP(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL, 
		KC_TRNS, KC_TRNS, LGUI(LSFT(KC_LEFT)), LGUI(LSFT(KC_RGHT)), KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS,
		KC_TRNS, LCTL(KC_LSFT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS, KC_DEL, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_CAPS, KC_TRNS, KC_SPC, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS),

/* Numpad
 * ,--------------------------------------------------------------------------------------------.
 * |   `    |     |     |     |     |     |     |     |     |     |     |     |     |           |
 * |--------------------------------------------------------------------------------------------+
 * |           | MUTE |VOLD |VOLU|     |     |     |  7  |  8  |  9  |     |     |    |CtlAltDel|
 * |--------------------------------------------------------------------------------------------+
 * |            |PREV |PLAY |NEXT |     |     |     |  4  |  5  |  6  |     |     |             |
 * |--------------------------------------------------------------------------------------------+
 * |             |     |     |     |     |     |     |  3  |  2  |  1  |     |                  |
 * |--------------------------------------------------------------------------------------------+
 * |       |      |       |           |       |      0      |  .  |         |         |         |
 * `--------------------------------------------------------------------------------------------'
 */

  KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_7,    KC_8,    KC_9,    KC_TRNS, KC_TRNS, KC_TRNS, LCTL(LALT(KC_DEL)), 
		KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_4,    KC_5,    KC_6,    KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0,    KC_DOT,  KC_TRNS, KC_TRNS, MO(4), KC_TRNS),

/* LED Settings
 * ,--------------------------------------------------------------------------------------------.
 * |        |TO(1)|TO(2)|TO(3)|     |     |     |     |     |     |TO(0)|     |     |           |
 * |--------------------------------------------------------------------------------------------+
 * |     |RGB_TOG|RGB_MOD|RGB_HUI|RGB_HUD|      |      |      |      |    |    |    |     |     |
 * |--------------------------------------------------------------------------------------------+
 * |        |RGB_SAI|RGB_SAD|RGB_VAI|RGB_VAD|    |    |    |     |     |     |     |            |
 * |--------------------------------------------------------------------------------------------+
 * |             |BL_DEC|BL_TOGG|BL_INC|BL_STEP|     |     |     |     |     |     |            |
 * |--------------------------------------------------------------------------------------------+
 * |       |      |       |           |       |            |      |         |         |         |
 * `--------------------------------------------------------------------------------------------'
 */

  KEYMAP(
		KC_TRNS, TO(1), TO(2), TO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, BL_DEC, BL_TOGG, BL_INC, BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS),
};

enum function_id {
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
  [0]  = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  static uint8_t shift_esc_shift_mask;
  switch (id) {
    case SHIFT_ESC:
      shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
      if (record->event.pressed) {
        if (shift_esc_shift_mask) {
          add_key(KC_GRV);
          send_keyboard_report();
        } else {
          add_key(KC_ESC);
          send_keyboard_report();
        }
      } else {
        if (shift_esc_shift_mask) {
          del_key(KC_GRV);
          send_keyboard_report();
        } else {
          del_key(KC_ESC);
          send_keyboard_report();
        }
      }
      break;
  }
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