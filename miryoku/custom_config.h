// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LCTRL, A),     U_MT(LALT, S),     U_MT(LSHIFT, D),    U_MT(LGUI, F),    &kp G,             &kp H,             U_MT(LGUI, J),    U_MT(LSHIFT, K),    U_MT(LALT, L),     U_MT(LCTRL, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPACE), U_LT(U_SYM, TAB),  U_LT(U_MOUSE, ENTER),U_LT(U_NAV, BSPC),U_LT(U_MEDIA, DEL),U_NP,              U_NP

 #pragma once

#define RGBLIGHT_ANIMATIONS
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON

CONFIG_ZMK_POINTING=y
#define ZMK_POINTING_DEFAULT_MOVE_VAL 1500  // default: 600
#define ZMK_POINTING_DEFAULT_SCRL_VAL 20    // default: 10

#include <dt-bindings/zmk/pointing.h>  
