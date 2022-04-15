#pragma once
#include QMK_KEYBOARD_H
#include "tapdances.h"

#define LAYOUT_ferris_wrapper(...) LAYOUT(__VA_ARGS__)

#define ALPHA 0
#define SYM 1
#define NUM 2
#define ADJ 3

// Home row mods
// #define HOME_A GUI_T(KC_A)
// #define HOME_S ALT_T(KC_S)
// #define HOME_D SFT_T(KC_D)
// #define HOME_F CTL_T(KC_F)

// #define HOME_J RCTL_T(KC_J)
// #define HOME_K RSFT_T(KC_K)
// #define HOME_L RALT_T(KC_L)
// #define HOME_SC RGUI_T(KC_SCLN)

#define HOME_A TD(TD_HOME_L4)
#define HOME_S TD(TD_HOME_L3)
#define HOME_D TD(TD_HOME_L2)
#define HOME_F TD(TD_HOME_L1)

#define HOME_J TD(TD_HOME_R1)
#define HOME_K TD(TD_HOME_R2)
#define HOME_L TD(TD_HOME_R3)
#define HOME_SC TD(TD_HOME_R4)

enum custom_keycodes {
    _ALPHA = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

#define ______________________________ 

#define __________ALPHA_L1____________  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T
#define __________ALPHA_L2____________  HOME_A, HOME_S, HOME_D, HOME_F, KC_G
#define __________ALPHA_L3____________  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B

#define __________ALPHA_R1____________  KC_Y,   KC_U,   KC_I,   KC_O,   KC_P
#define __________ALPHA_R2____________  KC_H,   HOME_J, HOME_K, HOME_L, HOME_SC
#define __________ALPHA_R3____________  KC_N,   KC_M,   KC_COMM,KC_DOT, TD(TD_QUOT)

#define ___________SYM_L1_____________  KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC
#define ___________SYM_L2_____________  KC_GRV, KC_TILD,KC_LCBR,KC_LPRN,KC_LBRC
#define ___________SYM_L3_____________  KC_LT,  KC_GT,  KC_RCBR,KC_RPRN,KC_RBRC

#define ___________SYM_R1_____________  KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL, KC_COLN
#define ___________SYM_R2_____________  KC_UNDS,KC_RCTL,KC_RSFT,KC_RALT,KC_RGUI
#define ___________SYM_R3_____________  KC_BSLS,KC_MINS,KC_PLUS,KC_SLSH,KC_QUES

#define ___________NAV_L1_____________  KC_1,   KC_2,   KC_3,   KC_4,   KC_5
#define ___________NAV_L2_____________  KC_LGUI,KC_LALT,KC_LSFT,KC_LCTL,KC_NO
#define ___________NAV_L3_____________  KC_ESC, KC_VOLD,KC_VOLU,KC_TAB, KC_NO

#define ___________NAV_R1_____________  KC_6,   KC_7,   KC_8,   KC_9,   KC_0
#define ___________NAV_R2_____________  KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,KC_BSPC
#define ___________NAV_R3_____________  KC_NO,  KC_ENT, KC_PGUP,KC_PGDN,KC_DEL

#define ___________ADJ_L1_____________  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5
#define ___________ADJ_L2_____________  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10
#define ___________ADJ_L3_____________  KC_F11, KC_F12, KC_NO,  KC_NO,  KC_PSCR

#define ___________ADJ_R1_____________  RESET,  KC_NO,  KC_NO,  KC_NO,  KC_NO
#define ___________ADJ_R2_____________  KC_NO,  KC_BTN1,KC_MS_U,KC_BTN2,KC_WH_U
#define ___________ADJ_R3_____________  KC_NO,  KC_MS_L,KC_MS_D,KC_MS_R,KC_WH_D

#define _THUMB_L        LT(SYM, KC_ESC),    KC_SPC
#define _THUMB_R        TD(TD_SFT),         MO(NUM)
