// Copyright 2022 QMK / James Young (@noroadsleft)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* base layer
     * ┌───┬───┬───┬───┐┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐┌───┬───┬───┬───┐
     * │Esc│pre│pau│nex││Tab│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │BS ││ 7 │ 8 │ 9 │ - │
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │F9 │F10│F11│F12││Ctl│ A │ S │ D │ F │ G │ H │ J │ K │ L │;: │'" ││ 4 │ 5 │ 6 │ + │
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │F5 │F6 │F7 │F8 ││Sft│ Z │ X │ C │ V │ B │ N │ M │,< │.> │/? │Sft││ 1 │ 2 │ 3 │Ent│
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │F1 │F2 │F3 │F4 ││   │Alt│Gui│   │   │Del│Ent│[1]│[1]│[2]│AlG│   ││ 0 │ 0 │ . │Ent│
     * └───┴───┴───┴───┘└───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘└───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x20(
        KC_ESC,  _______, _______, _______,     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,     KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        _______, _______, _______, _______,     KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,     KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        _______, _______, _______, _______,     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,      KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
        _______, _______, _______, _______,     KC_GRV,  KC_LCTL, KC_LGUI, KC_LALT, MO(1),   KC_SPC,  KC_SPC,  MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,     KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    ),

    /* numbers and symbols
     * ┌───┬───┬───┬───┐┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / ││   │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │   ││ 7 │ 8 │ 9 │ - │
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * ││   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │   ││ 4 │ 5 │ 6 │ + │
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - ││   │ ` │ ( │ [ │ { │ - │ = │ } │ ] │ ) │ \ │   ││ 1 │ 2 │ 3 │Ent│
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + ││   │   │   │   │   │   │   │   │   │   │   │   ││ 0 │ 0 │ . │Ent│
     * └───┴───┴───┴───┘└───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘└───┴───┴───┴───┘
     */
    [1] = LAYOUT_ortho_4x20(
        _______, _______, _______, _______,     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,     KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        _______, _______, _______, _______,     KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,     KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        _______, _______, _______, _______,     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,      KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
        _______, _______, _______, _______,     KC_GRV,  KC_LCTL, KC_LGUI, KC_LALT, MO(1),   KC_SPC,  KC_SPC,  MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,     KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    ),

    /* navigation & function
     * ┌───┬───┬───┬───┐┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / ││   │F9 │F10│F11│F12│   │Esc│pgu│up │pgd│prt│   ││ 7 │ 8 │ 9 │ - │
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * ││   │F5 │F6 │F7 │F8 │   │hom│lef│dow│rig│end│   ││ 4 │ 5 │ 6 │ + │
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - ││   │F1 │F2 │F3 │F4 │   │   │pre│pau│nex│   │   ││ 1 │ 2 │ 3 │Ent│
     * ├───┼───┼───┼───┤├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + ││   │   │   │   │   │   │   │   │   │   │   │   ││ 0 │ 0 │ . │Ent│
     * └───┴───┴───┴───┘└───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘└───┴───┴───┴───┘
     */
    [2] = LAYOUT_ortho_4x20(
        _______, _______, _______, _______,     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,     KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        _______, _______, _______, _______,     KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,     KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        _______, _______, _______, _______,     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,      KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
        _______, _______, _______, _______,     KC_GRV,  KC_LCTL, KC_LGUI, KC_LALT, MO(1),   KC_SPC,  KC_SPC,  MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,     KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    ),

};
