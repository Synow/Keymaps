#include QMK_KEYBOARD_H
extern keymap_config_t keymap_config;

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
KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                 KC_Y, KC_U,         KC_I,           KC_O,         KC_P,
LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,                 KC_H, RCTL_T(KC_J), RSFT_T(KC_K),   LALT_T(KC_L), RGUI_T(KC_SCLN), 
LSFT_T(KC_Z), KC_X,         MEH_T(KC_C),  TD(TD_F13),   KC_B,                 KC_N, TD(TD_F14),   MEH_T(KC_COMM), KC_DOT,       RSFT_T(KC_SLSH),
               LT(_NUM,KC_ESC), LT(_SYMB,KC_SPC), LT(_NAV,KC_TAB),  LT(_FUNC,KC_ENT), LT(_SYMB,KC_BSPC), LT(_MUS,KC_DEL)
    ),
    [_NUM] = LAYOUT(
        _______,    _______,    _______,    _______,    _______,                        _______,    KC_7,   KC_8,   KC_9,   KC_EQL,
        _______,    _______,    _______,    _______,    _______,                        KC_MINS,    KC_4,   KC_5,   KC_6,   KC_COLN,
        _______,    _______,    _______,    _______,    _______,                        _______,    KC_1,   KC_2,   KC_3,   KC_PDOT,
                                               _______, CG_SWAP, CG_NORM,      _______, _______,  KC_0
    ),
    [_SYMB] = LAYOUT(
        KC_GRV,    KC_AT,     KC_HASH,    KC_DLR,  KC_PERC,                        KC_CIRC,    KC_ASTR,         KC_LBRC,   KC_RBRC,   KC_EQL,
        S(KC_GRV), KC_CIRC,   S(KC_BSLS), KC_EXLM, _______,                        KC_UNDS,    RCTL_T(KC_MINS), KC_LPRN,   KC_RPRN,   KC_QUOT, 
        _______,   _______,   _______,    KC_PLUS, _______,                        KC_AMPR,    KC_DQUO,         KC_LCBR,   KC_RCBR,   KC_BSLS, 
                                   _______, _______, _______,      _______, _______, _______
    ),
    [_NAV] = LAYOUT(
        QK_BOOT, EEP_RST,  _______,   _______,   _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PAUS,
        G(KC_A), KC_LALT,  KC_LSHIFT, KC_LCTL,   KC_CAPS,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PSCR,
        G(KC_Z), G(KC_X),  G(KC_C),   G(KC_V),   RGB_TOG,                   KC_APP,  KC_WH_D, KC_WH_U, KC_TRNS, KC_TRNS,
                                   _______, _______, _______,      _______, _______, _______ 
    ),
    [_FUNC] = LAYOUT(
        KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,                        _______, _______, _______, _______, C(A(KC_HOME)),
        KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,                         KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
        _______, _______, _______, KC_F6,  KC_F7,                         _______, KC_MPLY, _______, _______, _______,
                                   _______, _______, _______,    _______, _______, KC_SLEP
    ),
    [_MUS] = LAYOUT(
        XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX,                      XXXXXXX, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,                      XXXXXXX, KC_BTN1, KC_BTN2, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_WH_D, KC_WH_U, XXXXXXX, XXXXXXX, 
                                   _______, _______, _______,    _______, _______, _______
    )
};