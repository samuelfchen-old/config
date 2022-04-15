#pragma once
#include QMK_KEYMAP_H

// Define a type containing as many tapdance states as you need
typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD,
    TD_DOUBLE_SINGLE_TAP,
    TD_TRIPLE_TAP,
    TD_TRIPLE_HOLD,
} td_state_t;

// Tap Dance keycodes
enum td_keycodes {
    TD_QUOT = 0,
    TD_HOME_L1,
    TD_HOME_L2,
    TD_HOME_L3,
    TD_HOME_L4,
    TD_HOME_R1,
    TD_HOME_R2,
    TD_HOME_R3,
    TD_HOME_R4,
    TD_SFT,
    TD_CTL,
};

// Create a global instance of the tapdance state type
// static td_state_t td_state;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;


// Declare your tapdance functions:
// Function to determine the current tapdance state
td_state_t cur_dance(qk_tap_dance_state_t *state);

// Home row mods (double tap hold)
void l1_finished(qk_tap_dance_state_t *state, void *user_data);
void l1_reset(qk_tap_dance_state_t *state, void *user_data);
void l2_finished(qk_tap_dance_state_t *state, void *user_data);
void l2_reset(qk_tap_dance_state_t *state, void *user_data);
void l3_finished(qk_tap_dance_state_t *state, void *user_data);
void l3_reset(qk_tap_dance_state_t *state, void *user_data);
void l4_finished(qk_tap_dance_state_t *state, void *user_data);
void l4_reset(qk_tap_dance_state_t *state, void *user_data);

void r1_finished(qk_tap_dance_state_t *state, void *user_data);
void r1_reset(qk_tap_dance_state_t *state, void *user_data);
void r2_finished(qk_tap_dance_state_t *state, void *user_data);
void r2_reset(qk_tap_dance_state_t *state, void *user_data);
void r3_finished(qk_tap_dance_state_t *state, void *user_data);
void r3_reset(qk_tap_dance_state_t *state, void *user_data);
void r4_finished(qk_tap_dance_state_t *state, void *user_data);
void r4_reset(qk_tap_dance_state_t *state, void *user_data);

// Double tap quote for double quote
void quot_finished(qk_tap_dance_state_t *state, void *user_data);
void quot_reset(qk_tap_dance_state_t *state, void *user_data);

// Right shift hold activates caps word
void sft_finished(qk_tap_dance_state_t *state, void *user_data);
void sft_reset(qk_tap_dance_state_t *state, void *user_data);

// Tap for OSM CTL, hold for layer switch
void ctl_finished(qk_tap_dance_state_t *state, void *user_data);
void ctl_reset(qk_tap_dance_state_t *state, void *user_data);