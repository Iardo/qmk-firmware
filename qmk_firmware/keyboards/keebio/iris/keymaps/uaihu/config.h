/*
Copyright Ivan Ramos

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

/*
Configuration for Split Keyboards
*/
#define USE_I2C
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

/*
Configuration for RGB Backlights
*/
#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

/*
Configuration for Layers
The behavior of the functions:
MO, TG, TO, TT, DF and OSL.
*/
//#define RETRO_TAPPING
#undef TAPPING_FORCE_HOLD
#define TAPPING_TOGGLE 2
#define PERMISSIVE_HOLD

/*
Configuration for High Polling Rate ~1000hz
This is useful for games that need such a high rate of
key presses such as playing OSU at competitive levels.
*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 4
