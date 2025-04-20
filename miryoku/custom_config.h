// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
//                                                                                      LEFT | RIGHT

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_HML(LGUI, A),    U_HML(LALT, R),    U_HML(LCTRL, S),   U_HML(LSHFT, T),   &kp G,             &kp M,             U_HMR(LSHFT, N),   U_HMR(LCTRL, E),   U_HMR(LALT, I),    U_HMR(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, BSPC), U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, DEL),U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp EXCL,          &kp AT,            &kp HASH,          &kp DLLR,          &kp PRCNT,         &kp PLUS,          &kp N7,            &kp N8,            &kp N9,            &kp GRAVE,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQUAL,         &kp N4,            &kp N5,            &kp N6,            &kp SEMI,          \
&kp CARET,         &kp AMPS,          &kp ASTRK,         &kp MINUS,         &kp EQUAL,         &kp ASTRK,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp EQUAL,         &kp N0,            &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp EXCL,          &kp AT,            &kp HASH,          &kp DLLR,          &kp PRCNT,         &kp LBKT,          &kp LT,            &kp EQUAL,         &kp GT,            &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LBRC,          &kp LPAR,          &kp COLON,         &kp RPAR,          &kp RBRC,          \
&kp CARET,         &kp AMPS,          &kp ASTRK,         &kp MINUS,         &kp EQUAL,         &kp EXCL,          &kp EQUAL,         &kp AMPS,          &kp PIPE,          &kp SEMI,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp UNDER,         &kp SEMI,          U_NP,              U_NP
