#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0 - Default
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
        LCTL_T(KC_TAB), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MO(2),
        MO(1),   KC_LGUI,                                     KC_SPC,                                     KC_BSPC, KC_RALT
    ),

    // Layer 1 - Punctuation/Numbers (left Fn)
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
        KC_TRNS, KC_GRV,  KC_BSLS, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL,  KC_4,    KC_5,    KC_6,    KC_SCLN,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COMM, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,                                     KC_TRNS,                                    KC_TRNS, KC_TRNS
    ),

    // Layer 2 - Nav/Function (right Fn)
    [2] = LAYOUT(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS,
        KC_TRNS, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_VOLD, KC_TRNS, KC_PGUP, KC_HOME, KC_UP,   KC_END,
        KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MUTE, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
        KC_TRNS, KC_TRNS,                                     KC_TRNS,                                    KC_DEL,  KC_TRNS
    )
};
