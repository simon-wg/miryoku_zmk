// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define MIRYOKU_KLUDGE_GLOBALSHIFTFUNCTIONS

// Swedish characters (AltGr combos on the US Swedish layout)
#define SE_ARING &kp RA(LBKT)
#define SE_ADIA  &kp RA(SQT)
#define SE_ODIA  &kp RA(SEMI)

// Select which layer gets the Swedish characters on K06/K07/K08:
//   NONE = no override (default Miryoku)
//   SYM  = override the SYM layer
//   NUM  = override the NUM layer
#define MIRYOKU_SWEDISH_LAYER_NONE 0
#define MIRYOKU_SWEDISH_LAYER_SYM  1
#define MIRYOKU_SWEDISH_LAYER_NUM  2

#define MIRYOKU_SWEDISH_LAYER MIRYOKU_SWEDISH_LAYER_NUM

#if MIRYOKU_SWEDISH_LAYER == MIRYOKU_SWEDISH_LAYER_SYM
#undef MIRYOKU_LAYER_SYM
#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              SE_ARING,          SE_ADIA,           SE_ODIA,           U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP
#endif

#if MIRYOKU_SWEDISH_LAYER == MIRYOKU_SWEDISH_LAYER_NUM
#undef MIRYOKU_LAYER_NUM
#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              SE_ARING,          SE_ADIA,           SE_ODIA,           U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP
#endif
