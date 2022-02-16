// Copyright 2022 greenananas (@greenananas)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_A,    KC_1,    MO(_FN),
            KC_TAB,   KC_SPC,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A
    ),
    [_FN] = LAYOUT(
        KC_A, KC_A, KC_A,
            RESET,    KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A,
        KC_A, KC_A, KC_A
    )
};
