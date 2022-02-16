#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAAAA // Can be whatever you want in DIY projects
#define PRODUCT_ID      0xBBBB // Can be whatever you want in DIY projects
#define DEVICE_VER      0x0001
#define MANUFACTURER    Kura
#define PRODUCT         KuraBoard

/* Key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/* Pinout used with QMK Proton C*/
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4 }
#define MATRIX_COL_PINS { A0, A1, A2, A4, A5, A6, A7, A8, B8, B13, B14, B15, B9, B10, B11, B12 }
