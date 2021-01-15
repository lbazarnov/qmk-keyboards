/* Copyright %YEAR% %YOUR_NAME%
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

// Defines the keycodes used by our macros in process_record_user
/* enum custom_keycodes {
    
}; */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_7,    KC_8,    KC_9,    KC_F3,
        KC_4,    KC_5,    KC_6,    KC_F5,
        KC_1,    KC_2,    KC_3,    KC_F6,
        KC_F1,   KC_F2,   MO(_FN),  KC_F7
    ),

    [_FN] = LAYOUT(
        _______,    _______,  _______,   _______,
        _______,    _______,   _______,   _______,
        _______,   LCTL(LSFT(KC_F12)),    _______,   _______,
        _______,   KC_RCTRL,  _______,  _______
    )
};

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
