#include QMK_KEYBOARD_H

#define _AZERTY 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_AZERTY] = LAYOUT(
        KC_A, KC_Z
    )
};
