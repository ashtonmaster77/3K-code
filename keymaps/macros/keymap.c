// Copyright 2022 Ashton (ashtonmaster77)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
enum custom_keycodes {
    AMOGUS = SAFE_RANGE,
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case AMOGUS:
        if (record->event.pressed) {
            // when keycode AMOGUS is pressed
            SEND_STRING("Hello!"SS_tap(X_ENTER);
        } else {
            // when keycode AMOGUS is released
        }
        break;
    }
    return true;
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_Z,    KC_X,    KC_C     
    ),

};
