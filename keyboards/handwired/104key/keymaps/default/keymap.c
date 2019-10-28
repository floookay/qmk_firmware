/* Copyright 2019 floookay
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

enum unicode_names {
  UMLAUT_UC_A,
  UMLAUT_UC_O,
  UMLAUT_UC_U,
  UMLAUT_LC_A,
  UMLAUT_LC_O,
  UMLAUT_LC_U,
  ESZETT,
  EURO_SIGN
};

const uint32_t PROGMEM unicode_map[] = {
  [UMLAUT_UC_A] = 0x00C4,  // Ä
  [UMLAUT_UC_O] = 0x00D6,  // Ö
  [UMLAUT_UC_U] = 0x00DC,  // Ü
  [UMLAUT_LC_A] = 0x00E4,  // ä
  [UMLAUT_LC_O] = 0x00F6,  // ö
  [UMLAUT_LC_U] = 0x00FC,  // ü
  [ESZETT]      = 0x00DF,  // ß
  [EURO_SIGN]   = 0x20AC,  // €
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(\
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,       KC_PSCR, KC_SLCK, KC_PAUS,

    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_INS,  KC_HOME, KC_PGUP,      KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_DEL,  KC_END,  KC_PGDN,      KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                                       KC_P4,   KC_P5,   KC_P6,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,               KC_UP,                 KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1), KC_APP,  KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT,        LT(1,KC_P0),      KC_PDOT
  ),
  [1] = LAYOUT(\
    KC_TRNS,          KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,                                                      UC_RMOD, UC_MOD,  RESET,
    
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                     KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, X(EURO_SIGN), KC_TRNS, KC_TRNS, KC_TRNS, XP(UMLAUT_LC_U,UMLAUT_UC_U), KC_TRNS, XP(UMLAUT_LC_O,UMLAUT_UC_O), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,       KC_NO,   KC_VOLU, KC_NO,   KC_MSEL,
    KC_TRNS, XP(UMLAUT_LC_A,UMLAUT_UC_A), X(ESZETT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                                         KC_MPRV, KC_MPLY, KC_MNXT,
    KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                                                              KC_TRNS,                KC_MUTE, KC_VOLD, KC_NO,   KC_MYCM,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS,                                                     KC_TRNS, KC_TRNS, KC_TRNS,       KC_NO,            KC_MSTP
  )
};

// Control indicator LEDs
void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
    writePinLow(C6);
  } else {
    writePinHigh(C6);
  }
  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinHigh(C5);
  } else {
    writePinLow(C5);
  }
  if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
    writePinLow(C4);
  } else {
    writePinHigh(C4);
  }
  if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {
  } else {
  }
  if (IS_LED_ON(usb_led, USB_LED_KANA)) {
  } else {
  }
}

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  }
}
