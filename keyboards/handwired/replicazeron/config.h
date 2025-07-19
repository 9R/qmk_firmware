/* Copyright 2023 9R
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

#pragma once

#define THUMBSTICK_DEBUG

/* rgb indicadors*/
#ifdef RGB_INDICATORS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_LIMIT_VAL 128

// set custom rgb indicator colors as hue, saturation, value or use a
// hsv-macro from quantum/colors.h, i.e. HSV_RED
#define INDICATOR_COLOR_ON HSV_CHARTREUSE
#define INDICATOR_COLOR_OFF 64, 255, 64
#endif

/* joystick configuration */
#define JOYSTICK_BUTTON_COUNT 0
#define JOYSTICK_AXIS_COUNT 2
#define JOYSTICK_AXIS_RESOLUTION 10

#define _DEADZONE  100  // 0 to _SHIFTZONE-1
#define _SHIFTZONE 350  // _DEADZONE+1 to 600
#define _THUMBSTICK_ROTATION 100 //degrees, adjusts forward direction

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
