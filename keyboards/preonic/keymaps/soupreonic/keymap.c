#include QMK_KEYBOARD_H

enum preonic_layers {
  _DEFAULT = 0,
  _LOWER,
  _RAISE,
  _PROGRAM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_preonic_1x2uC(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, \
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, \
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, RSFT_T(KC_ENT), \
    KC_LCTL, KC_LGUI, KC_LALT, KC_HAEN, TT(_LOWER), KC_SPC, TT(_RAISE), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
    ),
	[_LOWER] = LAYOUT_preonic_1x2uC(
    KC_GRV, _______, _______, _______, _______, LALT(KC_F4), KC_NLCK, KC_P7, KC_P8, KC_P9, KC_PAST, KC_BSPC, \
    _______, _______, _______, _______, _______, _______, _______, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_DEL, \
    _______, _______, _______, LCTL(KC_CAPS), LALT(KC_CAPS), LALT(KC_GRV), _______, KC_P1, KC_P2, KC_P3, KC_PPLS, _______, \
    _______, _______, _______, _______, _______, _______, _______, KC_P0, KC_0, KC_PDOT, KC_PGUP, KC_ENT, \
    _______, _______, _______, KC_HANJ, _______, _______, _______, KC_PSLS, KC_HOME, KC_PGDN, KC_END
    ),
	[_RAISE] = LAYOUT_preonic_1x2uC(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, \
    _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, _______, _______, _______, KC_DEL, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MO(_PROGRAM), \
    _______, _______, _______, _______, _______, _______, _______, KC_RSFT, _______, _______, _______
    ),
	[_PROGRAM] = LAYOUT_preonic_1x2uC(
    RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
