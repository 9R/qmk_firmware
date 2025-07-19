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

#include "status_rgb.h"
#include <stdbool.h>
#include "gpio.h"

//////////// rgblight-layers Status LEDs //////////////
const rgblight_segment_t* const* init_rgb_status(void) {
    // Define layers
    static const rgblight_segment_t PROGMEM layer0[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 2, INDICATOR_COLOR_OFF}
    );
    static const rgblight_segment_t PROGMEM layer1[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 1, INDICATOR_COLOR_ON}
    );
    static const rgblight_segment_t PROGMEM layer2[] = RGBLIGHT_LAYER_SEGMENTS(
        {1, 1, INDICATOR_COLOR_ON}
    );

    // Now define the array of layers. Later layers take precedence
    static const rgblight_segment_t* const PROGMEM rgb_status_layers[] = RGBLIGHT_LAYERS_LIST(
        layer0,
        layer1,
        layer2
    );

    return rgb_status_layers;
};

void set_rgb_status(uint8_t highest_active_layer) {
    if (highest_active_layer > 3) {
        rgblight_set_layer_state(1, false);
        rgblight_set_layer_state(2, false);
        return;
    }

    // use bitwise operations to display active layer in binary
    bool bit1 = (highest_active_layer & 1);
    bool bit2 = (highest_active_layer & 2);
    rgblight_set_layer_state(1, bit1);
    rgblight_set_layer_state(2, bit2);
};
