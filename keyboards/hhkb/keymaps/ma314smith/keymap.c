/*  -*-  eval: (turn-on-orgtbl); -*-
 * default HHKB Layout
 */
#include "hhkb.h"

//Tap Dance Declarations
enum {
  X_TAP_DANC_LSFT = 0,
  X_TAP_DANC_RSFT = 1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Esc   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | -     | =   | Backs |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     |L3/Tab | Q | W | E | R | T | Y | U | I | O | P | [     | ]   | \     |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | MO(2) | A | S | D | F | G | H | J | K | L | ; | '     | Ent |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | LSPO  | Z | X | C | V | B | N | M | , | . | / | RSPC  |MO(2)|       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|

            |------+------+-----------------------+------+------|
            | LCtl | LAlt | ***** L2/Space ****** | RGUI |MO(6) |
            |------+------+-----------------------+------+------|
    */

  KEYMAP(  //  default layer
    KC_ESC,                     KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,     KC_9,    KC_0,     KC_MINS,              KC_EQL,    KC_BSPC,  KC_BSPC, \
    LT(3,KC_TAB),               KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,     KC_LBRC,              KC_RBRC,   KC_BSLS,          \
    KC_LCTL,                    KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_QUOT,              KC_ENT,                      \
    TD(X_TAP_DANC_LSFT),        KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  TD(X_TAP_DANC_RSFT),  MO(2),                       \
                      KC_LCTL,  KC_LALT,  /*      */ LT(2,KC_SPC),        KC_RGUI,  MO(6)),

    /* Layer Game
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ****** Space ******* | **** | MO(6)|
                 |------+------+----------------------+------+------+

     */

  KEYMAP(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS, \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                    \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PPLS,  KC_PMNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                    \
                      KC_TRNS, KC_TRNS,           KC_SPC,                KC_TRNS, MO(6)),


    /* Navigation
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |  `   | F1  | F2  | F3  | F4 | F5 | F6 | F7 | F8  | F9  | F10 | F11 | F12   |       | Del |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |GuSt<|GuSt>|    |    |    |PgU | Up  | PgD | Psc | Slk | Pau   |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |CtSft|     |     |    |    |Hom |Lef | Dwn | Rig | Ins | Del |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |Caps |    |Spc |End |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ******************** | **** | MO(6)|
                 |------+------+----------------------+------+------+

     */

  KEYMAP(
    KC_GRV,  KC_F1,         KC_F2,               KC_F3,               KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_DEL,   KC_DEL, \
    KC_TRNS, KC_TRNS,       LGUI(LSFT(KC_LEFT)), LGUI(LSFT(KC_RGHT)), KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP,   KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS,            \
		KC_TRNS, LCTL(KC_LSFT), KC_TRNS,             KC_TRNS,             KC_TRNS, KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS,  KC_DEL,  KC_TRNS,                     \
		KC_TRNS, KC_TRNS,       KC_TRNS,             KC_CAPS,             KC_TRNS, KC_SPC,  KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     \
                            KC_TRNS,  KC_TRNS,           KC_TRNS,                KC_TRNS, MO(6)),

    /* Numpad
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | Mut | VoD | VoU |    |    |    | 7  |  8  |  9  |     |     |       |CtAlDel|     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | Prv | Ply | Nxt |    |    |    | 4  |  5  |  6  |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    | 1  |  2  |  3  |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ********       0     |  .   | MO(6)|
                 |------+------+----------------------+------+------+

     */

  KEYMAP(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS, \
    KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_7,    KC_8,    KC_9,    KC_TRNS, KC_TRNS, KC_TRNS, LCTL(LALT(KC_DEL)),              \
		KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_4,    KC_5,    KC_6,    KC_TRNS, KC_TRNS, KC_TRNS,                                  \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS, KC_TRNS,                                  \
                            KC_TRNS,  KC_TRNS,           KC_0,                KC_DOT, MO(6)),


    /* BASE Level: Default Layer
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Esc   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | -     | =   | \     | ` |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Tab   | Q | W | E | R | T | Y | U | I | O | P | [     | ]   | Backs |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Cont  | A | S | D | F | G | H | J | K | L | ; | '     | Ent |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Shift | Z | X | C | V | B | N | M | , | . | / | Shift | Fn0 |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|

            |------+------+-----------------------+------+------|
            | LAlt | LGUI | ******* Space ******* | RGUI | MO(6)|
            |------+------+-----------------------+------+------|
    */

  KEYMAP(  //  default layer
    KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,    KC_BSLS,  KC_GRV, \
    KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,   KC_BSPC,          \
    KC_LCTL,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,                      \
    KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,  MO(5),                    \
                      KC_LALT,  KC_LGUI,  /*        */ KC_SPC,      KC_RGUI,  MO(6)),



    /* Layer HHKB: HHKB mode (HHKB Fn)
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Pwr  | F1  | F2  | F3  | F4 | F5 | F6 | F7 | F8  | F9  | F10 | F11 | F12   | Ins   | Del |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Caps |     |     |     |    |    |    |    | Psc | Slk | Pus | Up  |       | Backs |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | VoD | VoU | Mut |    |    | *  | /  | Hom | PgU | Lef | Rig | Enter |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    | +  | -  | End | PgD | Dow |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ******************** | **** | MO(6)|
                 |------+------+----------------------+------+------+

     */

  KEYMAP(
    KC_PWR,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,   KC_DEL, \
    KC_CAPS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_UP,    KC_TRNS,  KC_BSPC,          \
    KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_TRNS,  KC_TRNS,  KC_PAST,  KC_PSLS,  KC_HOME,  KC_PGUP,  KC_LEFT,  KC_RGHT,  KC_PENT,                    \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PPLS,  KC_PMNS,  KC_END,   KC_PGDN,  KC_DOWN,  KC_TRNS,  KC_TRNS,                    \
                      KC_TRNS, KC_TRNS,           KC_TRNS,                KC_TRNS, MO(6)),


/* Layer Switch
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |TO 1 |TO 2 |TO 3 |TO 4|TO 5|    |    |     |     |TO 0 |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ******************** | **** | MO(6)|
                 |------+------+----------------------+------+------+

     */

  KEYMAP(
    KC_TRNS,  TO(1),    TO(2),    TO(3),    TO(4),    TO(5),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TO(0),    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                    \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PPLS,  KC_PMNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                    \
                      KC_TRNS, KC_TRNS,           KC_SPC,                KC_TRNS, MO(6)),
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