// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This fixes adv360pro miryoku mapping, TODO: submit a patch to upstream to fix?

#define XXX &none
#define U_TAPPING_TERM 200

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
&kp ESC      K10        K11       K12       K13        K14     XXX       &kp LCTRL  &kp RCTRL           &kp LGUI  &kp LALT      XXX  K15        K16      K17       K18       K19        &kp SQT \
&kp LSHFT    K20        K21       K22       K23        K24                          &kp LALT            &kp RCTRL                       K25        K26      K27       K28       K29        &kp RSHFT \
XXX          &kp GRAVE  &kp CAPS  &kp LEFT  &kp RIGHT                     K32  K33  K34                 K35  K36  K37                           &kp UP   &kp DOWN  &kp LBKT  &kp RBKT   XXX

// override MIRYOKU_ALTERNATIVES_BASE_QWERTY qwerty base to have semicolon instead of quote and thumb cluster changes
#define CUSTOM_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MTL(LGUI, A),     U_MTL(LALT, S),     U_MTL(LCTRL, D),    U_MTL(LSHFT, F),    &kp G,             &kp H,             U_MTR(LSHFT, J),    U_MTR(LCTRL, K),    U_MTR(LALT, L),     U_MTR(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MTL(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MTR(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_NAV, ESC),U_LT(U_MEDIA, BSPC),U_LT(U_MOUSE, TAB),U_LT(U_FUN, DEL),  U_LT(U_NUM, RET), U_LT(U_SYM, SPACE),  U_NP,              U_NP

#define MIRYOKU_LAYER_BASE CUSTOM_ALTERNATIVES_BASE_QWERTY

// override MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH qwerty base to have semicolon instead of quote
#define CUSTOM_ALTERNATIVES_BASE_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MTL(LGUI, A),     U_MTL(LALT, R),     U_MTL(LCTRL, S),    U_MTL(LSHFT, T),    &kp G,             &kp M,             U_MTR(LSHFT, N),    U_MTR(LCTRL, E),    U_MTR(LALT, I),     U_MTR(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_NAV, ESC),U_LT(U_MEDIA, BSPC),U_LT(U_MOUSE, TAB),U_LT(U_FUN, DEL),  U_LT(U_NUM, RET), U_LT(U_SYM, SPACE),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA CUSTOM_ALTERNATIVES_BASE_COLEMAKDH

// remove U_BOOT from nav layer as i'm frequently entering bootloader
#define CUSTOM_MIRYOKU_ALTERNATIVES_NAV \
U_NP,              &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV CUSTOM_MIRYOKU_ALTERNATIVES_NAV

// remove U_BOOT from sym layer as i'm frequently entering bootloader
#define CUSTOM_MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_NP,              \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define CUSTOM_MIRYOKU_ALTERNATIVES_SYM MIRYOKU_ALTERNATIVES_SYM 
