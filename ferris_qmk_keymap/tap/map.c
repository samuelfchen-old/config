#include QMK_KEYBOARD_H
#include "map.h"
#include "features/caps_word.h"


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  process_caps_word(keycode, record);
  return true;
}

bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
    // Keycodes that continue Caps Word, with shift applied.
    case KC_A ... KC_Z:
    case KC_MINS:
    case TD(TD_HOME_L1):
    case TD(TD_HOME_L2):
    case TD(TD_HOME_R1):
    case TD(TD_HOME_R2):
      add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to the next key.
      return true;

    // Keycodes that continue Caps Word, without shifting.
    case KC_1 ... KC_0:
    case KC_BSPC:
    case KC_DEL:
    case KC_UNDS:
    case KC_RSFT:
      return true;

    default:
      return false;  // Deactivate Caps Word.
  }
}


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return TAPPING_TERM;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ALPHA] = LAYOUT_ferris_wrapper(
        __________ALPHA_L1____________, __________ALPHA_R1____________,
        __________ALPHA_L2____________, __________ALPHA_R2____________,
        __________ALPHA_L3____________, __________ALPHA_R3____________,
        ALPHA_TL, ALPHA_TR
    ),
    [PROG] = LAYOUT_ferris_wrapper(
        ___________PROG_L1____________, ___________PROG_R1____________,
        ___________PROG_L2____________, ___________PROG_R2____________,
        ___________PROG_L3____________, ___________PROG_R3____________,
        _PROG_TL, _PROG_TR
    ),
    [NAV] = LAYOUT_ferris_wrapper(
        ___________NAV_L1_____________, ___________NAV_R1_____________,
        ___________NAV_L2_____________, ___________NAV_R2_____________,
        ___________NAV_L3_____________, ___________NAV_R3_____________,
        __NAV_TL, __NAV_TR
    ),
    [NUM] = LAYOUT_ferris_wrapper(
        ___________NUM_L1_____________, ___________NUM_R1_____________,
        ___________NUM_L2_____________, ___________NUM_R2_____________,
        ___________NUM_L3_____________, ___________NUM_R3_____________,
        __NUM_TL, __NUM_TR
    )
};