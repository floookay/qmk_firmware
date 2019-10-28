/*
Copyright 2019 floookay

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

/* usb device descriptor parameter */
#define VENDOR_ID       0x0000
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0000
#define MANUFACTURER    floookay
#define PRODUCT         104key
#define DESCRIPTION     a fullsize 104 key ansi keyboard

/* key matrix size */
#define MATRIX_ROWS     7
#define MATRIX_COLS     23

/* wiring: pinout and diodes */
#define MATRIX_ROW_PINS { E6, D6, E7, B0, D5, B1, D4 }
#define MATRIX_COL_PINS { B6, B7, B5, D0, B4, D1, B3, D2, B2, D3, D7, E0, C0, F1, C1, F2, C2, F3, E1, F4, F5, F6, F7 }
#define UNUSED_PINS     { F0 } // D6 and E1 are the pins for the empty row/collumn
// INDICATOR_PINS { C6, C5, C4 }
#define DIODE_DIRECTION COL2ROW // black mark on diode is facing towards the row

/* features */
#define RETRO_TAPPING

/* unicode input modes */
#define UNICODE_SELECTED_MODES UC_LNX, UC_OSX, UC_WINC
