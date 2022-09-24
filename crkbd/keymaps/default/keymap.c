#include QMK_KEYBOARD_H

enum {
  TD_F13,
  TD_F14,
};
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_F13] = ACTION_TAP_DANCE_DOUBLE(KC_V, KC_F13),
  [TD_F14] = ACTION_TAP_DANCE_DOUBLE(KC_M, KC_F14)
};

enum layer_number {
  _BASE,
  _NUM,
  _SYMB,
  _NAV,
  _FUNC,
  _MUS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] =  LAYOUT(
KC_1, KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                 KC_Y, KC_U,         KC_I,           KC_O,         KC_P, KC_0,
KC_1, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,                 KC_H, RCTL_T(KC_J), RSFT_T(KC_K),   LALT_T(KC_L), RGUI_T(KC_SCLN), KC_0,
KC_1, LSFT_T(KC_Z), KC_X,         MEH_T(KC_C),  TD(TD_F13),   KC_B,                 KC_N, TD(TD_F14),   MEH_T(KC_COMM), KC_DOT,       RSFT_T(KC_SLSH),KC_0,
               LT(_NUM,KC_ESC), LT(_SYMB,KC_SPC), LT(_NAV,KC_TAB),  LT(_FUNC,KC_ENT), LT(_SYMB,KC_BSPC), LT(_MUS,KC_DEL)
    ),
    [_NUM] = LAYOUT(
        KC_1, _______,    _______,    _______,    _______,    _______,                        _______,    KC_7,   KC_8,   KC_9,   KC_EQL,KC_0,
        KC_1, _______,    _______,    _______,    _______,    _______,                        KC_MINS,    KC_4,   KC_5,   KC_6,   KC_COLN,KC_0,
        KC_1, _______,    _______,    _______,    _______,    _______,                        _______,    KC_1,   KC_2,   KC_3,   KC_PDOT,KC_0,
                                               _______, CG_SWAP, CG_NORM,      _______, _______,  KC_0
    ),
    [_SYMB] = LAYOUT(
        KC_1, KC_GRV,    KC_AT,     KC_HASH,    KC_DLR,  KC_PERC,                        KC_CIRC,    KC_ASTR,         KC_LBRC,   KC_RBRC,   KC_EQL,KC_0,
        KC_1, S(KC_GRV), KC_CIRC,   S(KC_BSLS), KC_EXLM, _______,                        KC_UNDS,    RCTL_T(KC_MINS), KC_LPRN,   KC_RPRN,   KC_QUOT, KC_0,
        KC_1, _______,   _______,   _______,    KC_PLUS, _______,                        KC_AMPR,    KC_DQUO,         KC_LCBR,   KC_RCBR,   KC_BSLS, KC_0,
                                   _______, _______, _______,      _______, _______, _______
    ),
    [_NAV] = LAYOUT(
        KC_1, QK_BOOT, EEP_RST,  _______,   _______,   _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PAUS,KC_0,
        KC_1, G(KC_A), KC_LALT,  KC_LSHIFT, KC_LCTL,   KC_CAPS,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PSCR,KC_0,
        KC_1, G(KC_Z), G(KC_X),  G(KC_C),   G(KC_V),   RGB_TOG,                   KC_APP,  KC_WH_D, KC_WH_U, KC_TRNS, KC_TRNS,KC_0,
                                   _______, _______, _______,      _______, _______, _______ 
    ),
    [_FUNC] = LAYOUT(
        KC_1, KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,                        _______, _______, _______, _______, C(A(KC_HOME)),KC_0,
        KC_1, KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,                         KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,KC_0,
        KC_1, _______, _______, RGB_MOD, KC_F6,  KC_F7,                         _______, KC_MPLY, _______, _______, _______,KC_0,
                                   RGB_HUI, RGB_VAI, RGB_SAI,    _______, _______, KC_SLEP
    ),
    [_MUS] = LAYOUT(
        KC_1, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX,                      XXXXXXX, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,KC_0,
        KC_1, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,                      XXXXXXX, KC_BTN1, KC_BTN2, XXXXXXX, XXXXXXX,KC_0,
        KC_1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_WH_D, KC_WH_U, XXXXXXX, XXXXXXX, KC_0,
                                   _______, _______, _______,    _______, _______, _______
    )
};