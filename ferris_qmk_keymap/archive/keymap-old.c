#include QMK_KEYBOARD_H
#include "./keymap.h"
#include "./features/caps_word.h"


/***                Tap Dance Binds             ***/
// double tap for " 
void quot_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_QUOTE);
    } 
    else {
        register_code16(S(KC_QUOTE));
    }

}

void quot_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code(KC_QUOTE);
    } else {
        unregister_code16(S(KC_QUOTE));
    }
}

/* Home row mods (double tap hold) */
// Create an instance of 'td_tap_t' for the 'x' tap dance.
static td_tap_t l1tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void l1_finished(qk_tap_dance_state_t *state, void *user_data) {
    l1tap_state.state = cur_dance(state);
    switch (l1tap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_F); break;
        case TD_SINGLE_HOLD: register_code(KC_F); break;
        case TD_DOUBLE_TAP: tap_code(KC_F); register_code(KC_F); break;
        case TD_DOUBLE_HOLD: register_code(KC_LCTL); break;
        case TD_TRIPLE_TAP: tap_code(KC_F); tap_code(KC_F); register_code(KC_F); break;
        case TD_TRIPLE_HOLD: tap_code(KC_F); tap_code(KC_F); register_code(KC_F); break;
        // Last case is for fast typing. Assuming your key is `f`:
        // For example, when typing the word `buffer`, and you want to make sure that you send `ff` and not `Esc`.
        // In order to type `ff` when typing fast, the next character will have to be hit within the `TAPPING_TERM`, which by default is 200ms.
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_F); register_code(KC_F); break;
        default: return;
    }
}
void l1_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (l1tap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_F); break;
        case TD_SINGLE_HOLD: unregister_code(KC_F); break;
        case TD_DOUBLE_TAP: unregister_code(KC_F); break;
        case TD_DOUBLE_HOLD: unregister_code(KC_LCTL); break;
        case TD_TRIPLE_TAP: unregister_code(KC_F); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_F); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_F); break;
        default: return;
    }
    l1tap_state.state = TD_NONE;
}
/*************************************/
static td_tap_t l2tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void l2_finished(qk_tap_dance_state_t *state, void *user_data) {
    l2tap_state.state = cur_dance(state);
    switch (l2tap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_D); break;
        case TD_SINGLE_HOLD: register_code(KC_D); break;
        case TD_DOUBLE_TAP: tap_code(KC_D); register_code(KC_D); break;
        case TD_DOUBLE_HOLD: register_code(KC_LSFT); break;
        case TD_TRIPLE_TAP: tap_code(KC_D); tap_code(KC_D); register_code(KC_D); break;
        case TD_TRIPLE_HOLD: tap_code(KC_D); tap_code(KC_D); register_code(KC_D); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_D); register_code(KC_D); break;
        default: return;
    }
}
void l2_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (l2tap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_D); break;
        case TD_SINGLE_HOLD: unregister_code(KC_D); break;
        case TD_DOUBLE_TAP: unregister_code(KC_D); break;
        case TD_DOUBLE_HOLD: unregister_code(KC_LSFT); break;
        case TD_TRIPLE_TAP: unregister_code(KC_D); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_D); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_D); break;
        default: return;
    }
    l2tap_state.state = TD_NONE;
}
/*************************************/
static td_tap_t l3tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void l3_finished(qk_tap_dance_state_t *state, void *user_data) {
    l3tap_state.state = cur_dance(state);
    switch (l3tap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_S); break;
        case TD_SINGLE_HOLD: register_code(KC_S); break;
        case TD_DOUBLE_TAP: tap_code(KC_S); register_code(KC_S); break;
        case TD_DOUBLE_HOLD: register_code(KC_LALT); break;
        case TD_TRIPLE_TAP: tap_code(KC_S); tap_code(KC_S); register_code(KC_S); break;
        case TD_TRIPLE_HOLD: tap_code(KC_S); tap_code(KC_S); register_code(KC_S); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_S); register_code(KC_S); break;
        default: return;
    }
}
void l3_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (l3tap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_S); break;
        case TD_SINGLE_HOLD: unregister_code(KC_S); break;
        case TD_DOUBLE_TAP: unregister_code(KC_S); break;
        case TD_DOUBLE_HOLD: unregister_code(KC_LALT); break;
        case TD_TRIPLE_TAP: unregister_code(KC_S); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_S); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_S); break;
        default: return;
    }
    l3tap_state.state = TD_NONE;
}
/*************************************/
static td_tap_t l4tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void l4_finished(qk_tap_dance_state_t *state, void *user_data) {
    l4tap_state.state = cur_dance(state);
    switch (l4tap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_A); break;
        case TD_SINGLE_HOLD: register_code(KC_A); break;
        case TD_DOUBLE_TAP: tap_code(KC_A); register_code(KC_A); break;
        case TD_DOUBLE_HOLD: register_code(KC_LGUI); break;
        case TD_TRIPLE_TAP: tap_code(KC_A); tap_code(KC_A); register_code(KC_A); break;
        case TD_TRIPLE_HOLD: tap_code(KC_A); tap_code(KC_A); register_code(KC_A); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_A); register_code(KC_A); break;
        default: return;
    }
}
void l4_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (l4tap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_A); break;
        case TD_SINGLE_HOLD: unregister_code(KC_A); break;
        case TD_DOUBLE_TAP: unregister_code(KC_A); break;
        case TD_DOUBLE_HOLD: unregister_code(KC_LGUI); break;
        case TD_TRIPLE_TAP: unregister_code(KC_A); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_A); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_A); break;
        default: return;
    }
    l4tap_state.state = TD_NONE;
}

/*************************************/
/*************************************/

static td_tap_t r1tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void r1_finished(qk_tap_dance_state_t *state, void *user_data) {
    r1tap_state.state = cur_dance(state);
    switch (r1tap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_J); break;
        case TD_SINGLE_HOLD: register_code(KC_J); break;
        case TD_DOUBLE_TAP: tap_code(KC_J); register_code(KC_J); break;
        case TD_DOUBLE_HOLD: register_code(KC_RCTL); break;
        case TD_TRIPLE_TAP: tap_code(KC_J); tap_code(KC_J); register_code(KC_J); break;
        case TD_TRIPLE_HOLD: tap_code(KC_J); tap_code(KC_J); register_code(KC_J); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_J); register_code(KC_J); break;
        case TD_NONE: register_code(KC_J); break; 
        default: return;
    }
}
void r1_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (r1tap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_J); break;
        case TD_SINGLE_HOLD: unregister_code(KC_J); break;
        case TD_DOUBLE_TAP: unregister_code(KC_J); break;
        case TD_DOUBLE_HOLD: unregister_code(KC_RCTL); break;
        case TD_TRIPLE_TAP: unregister_code(KC_J); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_J); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_J); break;
        case TD_NONE: unregister_code(KC_J); break; 
        default: return;
    }
    r1tap_state.state = TD_NONE;
}
/*************************************/
static td_tap_t r2tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void r2_finished(qk_tap_dance_state_t *state, void *user_data) {
    r2tap_state.state = cur_dance(state);
    switch (r2tap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_K); break;
        case TD_SINGLE_HOLD: register_code(KC_K); break;
        case TD_DOUBLE_TAP: tap_code(KC_K); register_code(KC_K); break;
        case TD_DOUBLE_HOLD: register_code(KC_RSFT); break;
        case TD_TRIPLE_TAP: tap_code(KC_K); tap_code(KC_K); register_code(KC_K); break;
        case TD_TRIPLE_HOLD: tap_code(KC_K); tap_code(KC_K); register_code(KC_K); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_K); register_code(KC_K); break;
        default: return;
    }
}
void r2_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (r2tap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_K); break;
        case TD_SINGLE_HOLD: unregister_code(KC_K); break;
        case TD_DOUBLE_TAP: unregister_code(KC_K); break;
        case TD_DOUBLE_HOLD: unregister_code(KC_RSFT); break;
        case TD_TRIPLE_TAP: unregister_code(KC_K); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_K); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_K); break;
        default: return;
    }
    r2tap_state.state = TD_NONE;
}
/*************************************/
static td_tap_t r3tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void r3_finished(qk_tap_dance_state_t *state, void *user_data) {
    r3tap_state.state = cur_dance(state);
    switch (r3tap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_L); break;
        case TD_SINGLE_HOLD: register_code(KC_L); break;
        case TD_DOUBLE_TAP: tap_code(KC_L); register_code(KC_L); break;
        case TD_DOUBLE_HOLD: register_code(KC_RALT); break;
        case TD_TRIPLE_TAP: tap_code(KC_L); tap_code(KC_L); register_code(KC_L); break;
        case TD_TRIPLE_HOLD: tap_code(KC_L); tap_code(KC_L); register_code(KC_L); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_L); register_code(KC_L); break;
        default: return;
    }
}
void r3_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (r3tap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_L); break;
        case TD_SINGLE_HOLD: unregister_code(KC_L); break;
        case TD_DOUBLE_TAP: unregister_code(KC_L); break;
        case TD_DOUBLE_HOLD: unregister_code(KC_RALT); break;
        case TD_TRIPLE_TAP: unregister_code(KC_L); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_L); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_L); break;
        default: return;
    }
    r3tap_state.state = TD_NONE;
}
/*************************************/
static td_tap_t r4tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void r4_finished(qk_tap_dance_state_t *state, void *user_data) {
    r4tap_state.state = cur_dance(state);
    switch (r4tap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_SCLN); break;
        case TD_SINGLE_HOLD: register_code(KC_SCLN); break;
        case TD_DOUBLE_TAP: tap_code(KC_SCLN); register_code(KC_SCLN); break;
        case TD_DOUBLE_HOLD: register_code(KC_RGUI); break;
        case TD_TRIPLE_TAP: tap_code(KC_SCLN); tap_code(KC_SCLN); register_code(KC_SCLN); break;
        case TD_TRIPLE_HOLD: tap_code(KC_SCLN); tap_code(KC_SCLN); register_code(KC_SCLN); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_SCLN); register_code(KC_SCLN); break;
        default: return;
    }
}
void r4_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (r4tap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_SCLN); break;
        case TD_SINGLE_HOLD: unregister_code(KC_SCLN); break;
        case TD_DOUBLE_TAP: unregister_code(KC_SCLN); break;
        case TD_DOUBLE_HOLD: unregister_code(KC_RGUI); break;
        case TD_TRIPLE_TAP: unregister_code(KC_SCLN); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_SCLN); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_SCLN); break;
        default: return;
    }
    r4tap_state.state = TD_NONE;
}

/*************************************/
/*************************************/

// Double tap shift for caps word
static td_tap_t sfttap_state = {
    .is_press_action = true,
    .state = TD_NONE
};
void sft_finished(qk_tap_dance_state_t *state, void *user_data) {
    sfttap_state.state = cur_dance(state);
    switch (sfttap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_RSFT); break;
        case TD_SINGLE_HOLD: register_code(KC_RSFT); break;
        case TD_DOUBLE_TAP: 
            caps_word_set(true);
            break;
        case TD_DOUBLE_HOLD: register_code(KC_RSFT); break;
        case TD_TRIPLE_TAP: register_code(KC_RSFT); break;
        case TD_TRIPLE_HOLD: register_code(KC_RSFT); break;
        case TD_DOUBLE_SINGLE_TAP: 
            caps_word_set(true);
            break;
        default: return;
    }
}
void sft_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (sfttap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_RSFT); break;
        case TD_SINGLE_HOLD: unregister_code(KC_RSFT); break;
        case TD_DOUBLE_TAP: 
            caps_word_set(true);
            break;
        case TD_DOUBLE_HOLD: unregister_code(KC_RSFT); break;
        case TD_TRIPLE_TAP: unregister_code(KC_RSFT); break;
        case TD_TRIPLE_HOLD: unregister_code(KC_RSFT); break;
        case TD_DOUBLE_SINGLE_TAP: break;
        default: return;
    }
    r4tap_state.state = TD_NONE;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [ALPHA] = LAYOUT(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                                   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, 
        TD(TD_HOME_L4), TD(TD_HOME_L3), TD(TD_HOME_L2), TD(TD_HOME_L1), KC_G,   KC_H, TD(TD_HOME_R1), TD(TD_HOME_R2), TD(TD_HOME_R3), TD(TD_HOME_R4),
        KC_Z,   KC_X,   KC_C, KC_V, KC_B,                                       KC_N, KC_M, KC_COMM, KC_DOT, TD(TD_QUOT), 
        LT(SYM, KC_ESC),KC_SPC,                                                 TD(TD_SFT), MO(NUM)
    ),

    [SYM] = LAYOUT(
        KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                               KC_CIRC, KC_AMPR, KC_ASTR, KC_EQL, KC_COLN, 
        KC_GRV, KC_TILD, KC_LCBR, KC_LPRN, KC_LBRC,                             KC_UNDS, KC_RCTL, TD(TD_SFT), KC_RALT, KC_RGUI, 
        KC_LT, KC_GT, KC_RCBR, KC_RPRN, KC_RBRC,                                KC_BSLS, KC_MINS, KC_PLUS, KC_SLSH, KC_QUES, 
        LT(SYM, KC_ESC),KC_SPC,                                                 TD(TD_SFT), MO(NUM)
    ),

    [NUM] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5,                                           KC_6, KC_7, KC_8, KC_9, KC_0, 
        KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_NO,                              KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC, 
        KC_ESC, KC_VOLD, KC_VOLU, KC_TAB, KC_NO,                                KC_NO, KC_ENT, KC_PGUP, KC_PGDN, KC_DEL,
        LT(SYM, KC_ESC),KC_SPC,                                                 TD(TD_SFT), MO(NUM)
    ),

    [ADJ] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                      RESET, KC_NO, KC_NO, KC_NO, KC_NO,                    
        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,                                     KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, 
        KC_F11, KC_F12, KC_NO, KC_NO, KC_PSCR,                                  KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, 
        LT(SYM, KC_ESC),KC_SPC,                                                 TD(TD_SFT), MO(NUM)
    )

};

layer_state_t layer_state_set_user(layer_state_t state)                     {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  process_caps_word(keycode, record);
  return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // case HOME_A:
        // case HOME_S:
        // case HOME_D:
        // case HOME_F:
        // case HOME_J:
        // case HOME_K:
        // case HOME_L:
        // case HOME_SC:
        // case TD(TD_HOME_L1):
            // return TAPPING_TERM + 100; // Recommended
        case TD_SFT:
            return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}

/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currenlty not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustating to type.
 *
 * For the third point, there does exist the 'TD_DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */
td_state_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2) {
        // TD_DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        if (state->interrupted) return TD_DOUBLE_SINGLE_TAP;
        else if (state->pressed) return TD_DOUBLE_HOLD;
        else return TD_DOUBLE_TAP;
    }
    

    // Assumes no one is trying to type the same letter three times (at least not quickly).
    // If your tap dance key is 'KC_W', and you want to type "www." quickly - then you will need to add
    // an exception here to return a 'TD_TRIPLE_SINGLE_TAP', and define that enum just like 'TD_DOUBLE_SINGLE_TAP'
    else if (state->count == 3) {
        if (state->interrupted || !state->pressed) return TD_TRIPLE_TAP;
        else return TD_TRIPLE_HOLD;
    } 
    else {
        if (state->interrupted || !state->pressed) return TD_EXTRA;
        else return TD_UNKNOWN;
    }
    else return TD_UNKNOWN;
}



qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_QUOT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, quot_finished, quot_reset),
    [TD_HOME_L1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, l1_finished, l1_reset),
    [TD_HOME_L2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, l2_finished, l2_reset),
    [TD_HOME_L3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, l3_finished, l3_reset),
    [TD_HOME_L4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, l4_finished, l4_reset),
    [TD_HOME_R1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, r1_finished, r1_reset),
    [TD_HOME_R2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, r2_finished, r2_reset),
    [TD_HOME_R3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, r3_finished, r3_reset),
    [TD_HOME_R4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, r4_finished, r4_reset),
    [TD_SFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, sft_finished, sft_reset),
};