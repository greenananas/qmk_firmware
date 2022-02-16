/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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
// TODO: Define unused pins
//#define UNUSED_PINS { PinX, PinY, PinZ, ... }

/* COL2ROW or ROW2COL - how your matrix is configured. COL2ROW means the black mark on your diode is facing to the rows, and between the switch and the rows. */
#define DIODE_DIRECTION COL2ROW

/* The delay when reading the value of the pin (5 is default) */
#define DEBOUNCE 5

/* Disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
