// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

// Map outer columns to media and volume control keys
#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_MEDIA_PLAY_PAUSE,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_AUDIO_VOL_UP, \
KC_MEDIA_NEXT_TRACK,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_AUDIO_VOL_DOWN, \
KC_MEDIA_PREV_TRACK,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_AUDIO_MUTE , \
                                  K32,  K33,  K34,         K35,  K36,  K37 \
)

// Redefine mouse layer to allow switching to game layer
#define MIRYOKU_LAYER_MOUSE \
TD(U_TD_BOOT),     TD(U_TD_U_GAME),   TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,              U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP


// Define game layer
#define MIRYOKU_LAYER_GAME \
KC_TAB,           KC_Q,             KC_W,             KC_E,             KC_R,             KC_Y,             KC_U,             KC_I,             KC_O,             KC_P,             \
KC_LSFT,          KC_A,             KC_S,             KC_D,             KC_F,             KC_H,             KC_J,             KC_K,             KC_L,             KC_QUOT,          \
KC_LCTL,          KC_Z,             KC_X,             KC_C,             KC_V,             KC_N,             KC_M,             KC_COMMA,         KC_DOT,           KC_SLASH,         \
U_NP,             U_NP,             KC_LALT,          KC_ENT,           KC_SPC,           KC_ESC,           KC_BSPC,          KC_DEL,           U_NP,             U_NP

#define MIRYOKU_LAYERMAPPING_GAME( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
LT(U_FUN,KC_ESC),       K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_AUDIO_VOL_UP, \
LT(U_GAME_NUM,KC_M),    K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_AUDIO_VOL_DOWN, \
LT(U_GAME_NAV,KC_J),    K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_AUDIO_MUTE , \
                                    K32,  K33,  K34,         K35,  K36,  K37 \
)

// Define inverted numpad layer to be used by game layer
#define MIRYOKU_LAYER_GAME_NUM \
KC_LBRC,           KC_4,              KC_5,              KC_6,              KC_RBRC,           U_NA,              TD(U_TD_U_BASE),      TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_SCLN,           KC_1,              KC_2,              KC_3,              KC_EQL,            U_NA,              KC_LSFT,              KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_GRV,            KC_7,              KC_8,              KC_9,              KC_BSLS,           U_NA,              TD(U_TD_U_GAME_NUM),  TD(U_TD_U_NAV),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,                 U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_GAME_NUM MIRYOKU_MAPPING


// Define flipped navigation layer to be used by game layer
#define MIRYOKU_LAYER_GAME_NAV \
KC_PGUP,           KC_HOME,           KC_UP,             KC_END,            KC_INS,            U_NA,              TD(U_TD_U_BASE),      TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_PGDN,           KC_LEFT,           KC_DOWN,           KC_RGHT,           CW_TOGG,           U_NA,              KC_LSFT,              KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_GAME_NAV),  TD(U_TD_U_NUM),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            U_NA,              U_NA,                 U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_GAME_NAV MIRYOKU_MAPPING



#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(GAME_NAV, "Game Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(GAME_NUM, "Game Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    /* #define RGBLIGHT_EFFECT_RAINBOW_MOOD */
    /* #define RGBLIGHT_EFFECT_RAINBOW_SWIRL */
    /* #define RGBLIGHT_EFFECT_SNAKE */
    /* #define RGBLIGHT_EFFECT_KNIGHT */
    /* #define RGBLIGHT_EFFECT_CHRISTMAS */
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    /* #define RGBLIGHT_EFFECT_ALTERNATING */
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
#   define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

/* Enable the animations you want/need.  You may need to enable only a small number of these because       *
 * they take up a lot of space.  Enable and confirm that you can still successfully compile your firmware. */
// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
/* #    define ENABLE_RGB_MATRIX_ALPHAS_MODS */
/* #    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN */
/* #    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT */
#    define ENABLE_RGB_MATRIX_BREATHING
/* #    define ENABLE_RGB_MATRIX_BAND_SAT */
/* #    define ENABLE_RGB_MATRIX_BAND_VAL */
/* #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT */
/* #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL */
/* #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT */
/* #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL */
/* #    define ENABLE_RGB_MATRIX_CYCLE_ALL */
/* #    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT */
/* #    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN */
/* #    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON */
/* #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN */
/* #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL */
/* #    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL */
/* #    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL */
/* #    define ENABLE_RGB_MATRIX_DUAL_BEACON */
/* #    define ENABLE_RGB_MATRIX_RAINBOW_BEACON */
/* #    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS */
/* #    define ENABLE_RGB_MATRIX_RAINDROPS */
/* #    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS */
/* #    define ENABLE_RGB_MATRIX_HUE_BREATHING */
/* #    define ENABLE_RGB_MATRIX_HUE_PENDULUM */
/* #    define ENABLE_RGB_MATRIX_HUE_WAVE */
/* #    define ENABLE_RGB_MATRIX_PIXEL_RAIN */
/* #    define ENABLE_RGB_MATRIX_PIXEL_FLOW */
/* #    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL */
/* // enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined */
/* #    define ENABLE_RGB_MATRIX_TYPING_HEATMAP */
/* #    define ENABLE_RGB_MATRIX_DIGITAL_RAIN */
/* // enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined */
/* #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE */
/* #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE */
/* #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE */
/* #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE */
/* #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS */
/* #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS */
/* #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS */
/* #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS */
#    define ENABLE_RGB_MATRIX_SPLASH
/* #    define ENABLE_RGB_MATRIX_MULTISPLASH */
/* #    define ENABLE_RGB_MATRIX_SOLID_SPLASH */
/* #    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH */
#endif
