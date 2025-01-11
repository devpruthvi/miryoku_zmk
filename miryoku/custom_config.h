// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This fixes adv360pro miryoku mapping, TODO: submit a patch to upstream to fix?

#define XXX &none

// Use unused adv360 keys
// swap some thumb cluster keys
#define MIRYOKU_LAYOUTMAPPING_ADV360PRO( \
     K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
) \
&kp EQUAL    &kp N1     &kp N2    &kp N3    &kp N4     &kp N5  XXX                                                              XXX  &kp N6     &kp N7   &kp N8    &kp N9    &kp N0     &kp MINUS \
&kp TAB      K00        K01       K02       K03        K04     XXX                                                              XXX  K05        K06      K07       K08       K09        &kp BSLH \
&kp ESC      K10        K11       K12       K13        K14     XXX       &kp LCTRL  &kp LALT            &kp LGUI  &kp RCTRL     XXX  K15        K16      K17       K18       K19        &kp SQT \
&kp LSHFT    K20        K21       K22       K23        K24                          XXX                 XXX                          K25        K26      K27       K28       K29        &kp RSHFT \
XXX          &kp GRAVE  &kp CAPS  &kp LEFT  &kp RIGHT                     K32  K33  K34                 K35  K36  K37                           &kp UP   &kp DOWN  &kp LBKT  &kp RBKT   XXX

// override MIRYOKU_ALTERNATIVES_BASE_QWERTY qwerty base to have semicolon instead of quote
#define CUSTOM_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_NAV, ESC),U_LT(U_MEDIA, BSPC),U_LT(U_MOUSE, TAB),U_LT(U_FUN, DEL),  U_LT(U_NUM, RET), U_LT(U_SYM, SPACE),  U_NP,              U_NP

#define MIRYOKU_LAYER_BASE CUSTOM_ALTERNATIVES_BASE_QWERTY
