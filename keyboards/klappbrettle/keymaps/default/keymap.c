// Copyright 2026 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    M_ARROW = SAFE_RANGE,
    M_THIS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │Bck│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│ A │ S │ D │ F │ G │ H │ J │ K │ L │;: │'" │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │,< │.> │/? │Ent│
     * └───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┘
     *         │Alt│Gui│   │   │[1]│[1]│[2]│AlG│
     *         └───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x12(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                          KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  MO(1),   MO(1),   MO(2),   KC_RALT
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │$th│ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │ ` │ ( │ [ │ { │ - │ = │ } │ ] │ ) │ \ │   │
     * └───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┘
     *         │   │   │-> │-> │   │   │   │   │
     *         └───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [1] = LAYOUT_ortho_4x12(
        M_THIS,  S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
        _______, KC_GRV,  KC_LPRN, KC_LBRC, KC_LCBR, KC_MINS, KC_EQL,  KC_RCBR, KC_RBRC, KC_RPRN, KC_BSLS, _______,
                          _______, M_ARROW, M_ARROW, _______, _______, _______, _______, _______
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│F9 │F10│F11│F12│   │Esc│pgu│up │pgd│prt│QBT│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │F5 │F6 │F7 │F8 │   │hom│lef│dow│rig│end│   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │F1 │F2 │F3 │F4 │   │vlu│pre│pau│nex│vld│   │
     * └───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┘
     *         │   │   │   │   │   │   │   │   │
     *         └───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [2] = LAYOUT_ortho_4x12(
        KC_ESC,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_WFWD, KC_ESC,  KC_PGUP, KC_UP,   KC_PGDN, KC_PSCR, QK_BOOT,
        _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_WSTP, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_WBAK, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, _______,
                          _______, _______, _______, _______, _______, _______, _______, _______
    )
    // [3] = LAYOUT_ortho_4x12(
    //     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //                       _______, _______, _______, _______, _______, _______, _______, _______
    // )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case M_ARROW:
                SEND_STRING("->");
                break;
            case M_THIS:
                SEND_STRING("$this->");
                break;
            default:
                break;
        }
    }
    return true;
}
