// Copyright 2022 greenananas (@greenananas)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_french.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────────┬─────┐
 * │ ESC │  &  │  é  │  "  │  '  │  (  │  -  │  è  │  _  │  ç  │  à  │  )  │  =  │ BKSPACE │     │
 * ├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┼─────┤
 * │ TAB   │  A  │  Z  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  ^  │  $  │   *   │     │
 * ├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴───────┼─────┤
 * │ CAPSLCK │  Q  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  M  │  ù  │   ENTER   │     │
 * ├──────┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴───────────┼─────┤
 * │LSHIFT│  <  │  W  │  X  │  C  │  V  │  B  │  N  │  ,  │  ;  │  :  │  !  │    RSHIFT    │     │
 * ├──────┼─────┴┬────┴─┬───┴─────┴─────┴─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬─────┬─────┼─────┤
 * │ LCTRL│ LWIN │ LALT │                                    │ALTGR│ RWIN│  FN │RCTRL│     │     │
 * └──────┴──────┴──────┴────────────────────────────────────┴─────┴─────┴─────┴─────┴─────┴─────┘
 */
    [_BASE] = LAYOUT(
        KC_ESC, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN, FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, FR_RPRN, FR_EQL, KC_BSPC, KC_NO,
        KC_TAB, FR_A, FR_Z, FR_E, FR_R, FR_T, FR_T, FR_Y, FR_U, FR_I, FR_O, FR_P, FR_CIRC, FR_DLR, FR_ASTR, KC_NO,
        KC_CAPS, FR_Q, FR_S, FR_D, FR_F, FR_G, FR_H, FR_J, FR_K, FR_L, FR_M, FR_UGRV, KC_ENT, KC_NO,
        KC_LSHIFT, FR_LABK, FR_W, FR_X, FR_C, FR_V, FR_B, FR_N, FR_COMM, FR_SCLN, FR_COLN, FR_EXLM, KC_RSHIFT, KC_NO
        KC_LCTRL, KC_LWIN, KC_LALT, KC_SPACE, KC_RALT, KC_RWIN, MO(_FN), KC_RCTRL, KC_NO, KC_NO, KC_NO
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
