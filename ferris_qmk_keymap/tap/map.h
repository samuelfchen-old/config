#pragma once
#include QMK_KEYBOARD_H
#include "tapdances.h"

#define LAYOUT_ferris_wrapper(...) LAYOUT(__VA_ARGS__)

#define ALPHA 0
#define PROG 1
#define NAV 2
#define NUM 3

// Home row mods
#define HOME_D TD(TD_HOME_L2)
#define HOME_F TD(TD_HOME_L1)

#define HOME_J TD(TD_HOME_R1)
#define HOME_K TD(TD_HOME_R2)

#define D_QUOT  TD(TD_QUOT)
#define H_DOT   TD(TD_DOT)
#define H_COMM  TD(TD_COMM)
#define H_SCLN  TD(TD_SCLN)
#define CAP_SFT TD(TD_SFT)

#define G_ALPHA TO(ALPHA)
#define G_PROG  TO(PROG)
#define G_NAV   TO(NAV)
#define G_NUM   TO(NUM)

enum custom_keycodes {
    _ALPHA = 0,
    _PROG = 1,
    _NAV = 2,
    _NUM = 3,
};

#define ______________________________ 

#define __________ALPHA_L1____________  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T
#define __________ALPHA_L2____________  KC_A,   KC_S,   HOME_D, HOME_F, KC_G
#define __________ALPHA_L3____________  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B

#define __________ALPHA_R1____________  KC_Y,   KC_U,   KC_I,   KC_O,   KC_P
#define __________ALPHA_R2____________  KC_H,   HOME_J, HOME_K, KC_L,   H_SCLN 
#define __________ALPHA_R3____________  KC_N,   KC_M,   H_COMM, H_DOT,  KC_BSPC

#define ALPHA_TL MT(MOD_LCTL, KC_ESC),  KC_SPC
#define ALPHA_TR CAP_SFT,               G_PROG

/*

! @ # $ %  ^ & * : L3
T [ { ( `  \ / _ ' ENT 
? ] } ) ~  | + - = BSPC

*/

#define ___________PROG_L1____________  KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC
#define ___________PROG_L2____________  KC_TAB, KC_LBRC,KC_LCBR,KC_LPRN,KC_GRV
#define ___________PROG_L3____________  KC_QUES,KC_RBRC,KC_RCBR,KC_RPRN,KC_TILD

#define ___________PROG_R1____________  KC_CIRC,KC_AMPR,KC_ASTR,KC_COLN,G_NAV
#define ___________PROG_R2____________  KC_BSLS,KC_SLSH,KC_UNDS,D_QUOT, KC_ENT
#define ___________PROG_R3____________  KC_PIPE,KC_PLUS,KC_MINS,KC_EQL, KC_BSPC

#define _PROG_TL G_ALPHA,               KC_SPC
#define _PROG_TR CAP_SFT,               G_NUM

#define ___________NAV_L1_____________  KC_GRV, KC_BTN1,KC_MS_U,KC_BTN2,KC_WH_U
#define ___________NAV_L2_____________  KC_TAB, KC_MS_L,KC_MS_D,KC_MS_R,KC_WH_D
#define ___________NAV_L3_____________  KC_NO,  KC_WH_L,KC_NO,  KC_WH_R,KC_NO

#define ___________NAV_R1_____________  KC_NO,  KC_BTN1,KC_BTN2,KC_NO,  KC_NO
#define ___________NAV_R2_____________  KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,KC_ENT
#define ___________NAV_R3_____________  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_BSPC

#define __NAV_TL G_ALPHA,               KC_LALT
#define __NAV_TR KC_RCTL,               G_PROG

#define ___________NUM_L1_____________  RESET,  KC_F1,  KC_F2,  KC_F3,  KC_F4 
#define ___________NUM_L2_____________  KC_TAB, KC_F5,  KC_F6,  KC_F7,  KC_F8
#define ___________NUM_L3_____________  KC_NO,  KC_F9,  KC_F10, KC_F11, KC_F12

#define ___________NUM_R1_____________  KC_MINS,KC_7,   KC_8,   KC_9,   G_NAV
#define ___________NUM_R2_____________  KC_EQL, KC_4,   KC_5,   KC_6,   KC_ENT
#define ___________NUM_R3_____________  KC_0,   KC_1,   KC_2,   KC_3,   KC_BSPC

#define __NUM_TL G_ALPHA,               KC_LALT 
#define __NUM_TR KC_RCTL,               G_PROG

// #define ___________SYM_L1_____________  KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC
// #define ___________SYM_L2_____________  KC_GRV, KC_TILD,KC_LCBR,KC_LPRN,KC_LBRC
// #define ___________SYM_L3_____________  KC_LT,  KC_GT,  KC_RCBR,KC_RPRN,KC_RBRC

// #define ___________SYM_R1_____________  KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL, KC_COLN
// #define ___________SYM_R2_____________  KC_UNDS,KC_RCTL,KC_RSFT,KC_RALT,KC_RGUI
// #define ___________SYM_R3_____________  KC_BSLS,KC_MINS,KC_PLUS,KC_SLSH,KC_QUES

// #define ___________NAV_L1_____________  KC_1,   KC_2,   KC_3,   KC_4,   KC_5
// #define ___________NAV_L2_____________  KC_LGUI,KC_LALT,KC_LSFT,KC_LCTL,KC_NO
// #define ___________NAV_L3_____________  KC_ESC, KC_VOLD,KC_VOLU,KC_TAB, KC_NO

// #define ___________NAV_R1_____________  KC_6,   KC_7,   KC_8,   KC_9,   KC_0
// #define ___________NAV_R2_____________  KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,KC_BSPC
// #define ___________NAV_R3_____________  KC_NO,  KC_ENT, KC_PGUP,KC_PGDN,KC_DEL

// #define ___________ADJ_L1_____________  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5
// #define ___________ADJ_L2_____________  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10
// #define ___________ADJ_L3_____________  KC_F11, KC_F12, KC_NO,  KC_NO,  KC_PSCR

// #define ___________ADJ_R1_____________  KC_NO,  KC_NO,  KC_NO,  KC_NO
// #define ___________ADJ_R2_____________  KC_NO,  KC_BTN1,KC_MS_U,KC_BTN2,KC_WH_U
// #define ___________ADJ_R3_____________  KC_NO,  KC_MS_L,KC_MS_D,KC_MS_R,KC_WH_D

// #define _THUMB_L        LT(SYM, KC_ESC),    KC_SPC
// #define _THUMB_R        TD(TD_SFT),         MO(NUM)
