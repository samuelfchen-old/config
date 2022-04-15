#include QMK_KEYBOARD_H 

// Layers
#define ALPHA 0
#define SYM 1
#define NUM 2
#define ADJ 3

// Home row mods
#define HOME_A GUI_T(KC_A)
#define HOME_S ALT_T(KC_S)
#define HOME_D SFT_T(KC_D)
#define HOME_F CTL_T(KC_F)

#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L RALT_T(KC_L)
#define HOME_SC RGUI_T(KC_SCLN)

enum custom_keycodes {
    _ALPHA = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

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
};

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
    TD_EXTRA,
} td_state_t;

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