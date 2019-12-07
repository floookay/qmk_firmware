/* Copyright 2019 Fate
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

enum arisu_layers {
  _QWERTY,
  _GAMING,
  _FUNCTION
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  GAMING,
  FUNCTION
};

// Tap Dance Declarations
enum {
    TD_LALT_LGUI = 0,
    TD_RALT_RGUI
};

#define MO_FN MO(_FUNCTION)
#define TG_GAME TG(_GAMING)
#define LALT_LG TD(TD_LALT_LGUI)
#define RALT_RG TD(TD_RALT_RGUI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( /* Base */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_BSLS, KC_DEL, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          KC_HOME, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_END,  \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,                     \
    KC_LCTL,          LALT_LG,          MO_FN,   MO_FN,            KC_SPC,           KC_RALT,                   KC_LEFT, KC_DOWN, KC_RGHT           \
  ),

  // to be toggled on or off
  [_GAMING] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
    KC_RALT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                   \
    _______,          KC_LALT,          KC_SPC,  MO_FN,            _______,          _______,                   _______, _______, _______           \
  ),

  // a momentary layer
  [_FUNCTION] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_INS,  \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,           KC_PGUP, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TG_GAME,                   KC_PGDN, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_VOLU,                   \
    _______,          _______,          _______, _______,          KC_MPLY,          _______,                   KC_MPRV, KC_VOLD, KC_MNXT           \
  )  
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for L-Alt, twice for L-GUI
    [TD_LALT_LGUI] = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_LGUI)
};
