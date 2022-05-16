/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

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
KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                 KC_Y,    KC_U,         KC_I,         KC_O,         KC_P,
LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,                 KC_H,    RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), 
LSFT_T(KC_Z), KC_X,         KC_C,         LGUI_T(KC_V), KC_B,                 KC_N,    LGUI_T(KC_M), KC_COMM,      KC_DOT,       RSFT_T(KC_SLSH),
               LT(_NUM,KC_ESC), LT(_SYMB,KC_SPC), LT(_NAV,KC_TAB),  LT(_FUNC,KC_ENT), LT(_SYMB,KC_BSPC), LT(_MUS,KC_DEL)
    ),
    [_NUM] = LAYOUT(
        _______,    _______,    _______,    _______,    _______,                        _______,    KC_7,       KC_8,    KC_9,  KC_EQL,
        _______,    _______,    _______,    _______,    _______,                        KC_PDOT,    KC_4,       KC_5,    KC_6,  KC_P0,
        _______,    _______,    _______,    _______,    _______,                        KC_P0,      KC_1,       KC_2,    KC_3,  KC_PMNS,
                                                _______, _______, _______,      _______, _______,  _______
    ),
    [_SYMB] = LAYOUT(
        KC_GRV,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                        KC_CIRC,    KC_ASTR,         KC_LCBR,   KC_RCBR,    KC_EQL,
        _______, _______, _______, KC_EXLM, _______,                        KC_UNDS,    RCTL_T(KC_MINS), KC_LPRN,   KC_RPRN,    KC_QUOT, 
        _______, _______, _______, KC_PLUS, _______,                        KC_AMPR,    KC_DQUO,         KC_LBRC,   KC_RBRC,    KC_BSLS, 
                                   _______, _______, _______,      _______, _______, _______
    ),
    [_NAV] = LAYOUT(
        RESET,   EEP_RST,  _______,   _______,   _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PAUS,
        C(KC_A), KC_LALT,  KC_LSHIFT, KC_LCTL,   KC_CAPS,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PSCR,
        C(KC_Z), C(KC_X),  C(KC_C),   C(KC_V),   RGB_TOG,                   KC_APP,  KC_WH_D, KC_WH_U, KC_TRNS, KC_TRNS,
                                   _______, _______, _______,      _______, _______, _______ 
    ),
    [_FUNC] = LAYOUT(
        KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,                        _______, _______, _______, _______, C(A(KC_HOME)),
        KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,                         KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
        _______, _______, RGB_MOD, KC_F6,  KC_F7,                         _______, KC_MPLY, _______, _______, _______,
                                   RGB_HUI, RGB_VAI, RGB_SAI,    _______, _______, KC_SLEP
    ),
    [_MUS] = LAYOUT(
        XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX,                      XXXXXXX, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,                      XXXXXXX, KC_BTN1, KC_BTN2, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_WH_D, KC_WH_U, XXXXXXX, XXXXXXX, 
                                   _______, _______, _______,    _______, _______, _______
    )
};