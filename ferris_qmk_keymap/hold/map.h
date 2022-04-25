#pragma once
#include QMK_KEYBOARD_H
#include "tapdances.h"

#define LAYOUT_ferris_wrapper(...) LAYOUT(__VA_ARGS__)

#define ALPHA 0
#define SYM 1
#define NUM 2
#define ADJ 3

// Home row mods
#define MOD_L4  TD(TD_MOD_L4)
#define MOD_L3  TD(TD_MOD_L3)
#define MOD_L2  TD(TD_MOD_L2)
#define MOD_L1  TD(TD_MOD_L1)

#define MOD_R1  TD(TD_MOD_R1)
#define MOD_R2  TD(TD_MOD_R2)
#define MOD_R3  TD(TD_MOD_R3)
#define MOD_R4  TD(TD_MOD_R4)

#define T_QUOT  TD(TD_QUOT)

#define M_LCTL  MT(MOD_LCTL, KC_LCTL)
#define M_LSFT  MT(MOD_LSFT, KC_LSFT)
#define M_LALT  MT(MOD_LALT, KC_LALT)
#define M_LGUI  MT(MOD_LGUI, KC_LGUI)
#define M_RCTL  MT(MOD_RCTL, KC_RCTL)
#define M_RSFT  MT(MOD_RSFT, KC_RSFT)
#define M_RALT  MT(MOD_RALT, KC_RALT)
#define M_RGUI  MT(MOD_RGUI, KC_RGUI)

enum custom_keycodes {
    _ALPHA = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

#define ______________________________ 

#define __________ALPHA_L1____________  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T
#define __________ALPHA_L2____________  KC_A,   KC_S,   KC_D,   KC_F,   KC_G
#define __________ALPHA_L3____________  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B

#define __________ALPHA_R1____________  KC_Y,   KC_U,   KC_I,   KC_O,   KC_P
#define __________ALPHA_R2____________  KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN
#define __________ALPHA_R3____________  KC_N,   KC_M,   KC_COMM,KC_DOT, T_QUOT

#define ___________SYM_L1_____________  KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC
#define ___________SYM_L2_____________  KC_LT,  KC_LBRC,KC_LCBR,KC_LPRN,KC_GRV
#define ___________SYM_L3_____________  KC_GT,  KC_RBRC,KC_RCBR,KC_RPRN,KC_TILD

#define ___________SYM_R1_____________  KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL, KC_COLN
#define ___________SYM_R2_____________  KC_UNDS,MOD_R1, MOD_R2, MOD_R3, MOD_R4
#define ___________SYM_R3_____________  KC_PLUS,KC_MINS,KC_BSLS,KC_SLSH,KC_QUES

#define ___________NAV_L1_____________  KC_1,   KC_2,   KC_3,   KC_4,   KC_5
#define ___________NAV_L2_____________  MOD_L4, MOD_L3, MOD_L2, MOD_L1, KC_GRV
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