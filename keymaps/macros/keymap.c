// Copyright 2022 Ashton (ashtonmaster77)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
enum custom_keycodes {
    AMOGUS = SAFE_RANGE,
    SCR,
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ALTTAB:
        if (record->event.pressed) {
            // when keycode AMOGUS is pressed
            tap_code(KC_LALT,KC_TAB);
        } else {
            // when keycode AMOGUS is released
        }
        break;
    }
    case SCR:
        if (record->event.pressed) {
            // when keycode SCR is pressed
            tap_code(KC_LWIN, KC_PSCR);
        } else {
            // when keycode SCR is released
        }
        break;
    }
    return true;
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        AMOGUS,    SCR,    KC_C     
    ),

};
