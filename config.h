// Copyright 2022 ashtonmaster77 (@ashtonmaster77)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_ROW_PINS { B6 }
#define MATRIX_COL_PINS { D7, D6, D4 }

#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN B0
#define RGBLED_NUM 4
#define RGBLIGHT_HUE_STEP 55
#define RGBLIGHT_SAT_STEP 55
#define RGBLIGHT_VAL_STEP 100
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
#define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif
