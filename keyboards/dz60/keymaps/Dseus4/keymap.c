#include QMK_KEYBOARD_H
#include "defs.c"
#include "rgb.c"
#include "functions.c"





qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_NO, KC_CAPS),
    [TD_FUNCS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, x_finished, x_reset, 250)
};





const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_all(
        KC_GESC,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,    KC_BSPC,  
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,           
        TD(TD_CAPS),KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,            
        KC_LSFT,    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_UP,      KC_RSFT,    KC_RSFT,
        KC_F14,     TD(TD_FUNCS),KC_LALT,                           KC_SPC,     KC_SPC,     KC_SPC,                 KC_RGUI,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_RCTL
    ),
    [_NUM] = LAYOUT_all(
        KC_GRV,     _______,    _______,    _______,    _______,    _______,    _______,    KC_P7,      KC_P8,      KC_P9,      KC_PAST,    KC_PMNS,    KC_PPLS,    _______,    KC_DEL,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_P4,      KC_P5,      KC_P6,      _______,    _______,    _______,    _______,
        KC_NLCK,    _______,    _______,    _______,    _______,    _______,    _______,    KC_P1,      KC_P2,      KC_P3,      _______,    _______,                _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_P0,      KC_PDOT,    KC_PENT,    KC_PSLS,    _______,    _______,    _______,
        _______,    TD(TD_FUNCS),_______,                           _______,    _______,    _______,                TO(_BASE),  _______,    _______,    _______,    _______
    ),
    [_F] = LAYOUT_all(
        KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_DEL,     KC_DEL,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,                _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    TD(TD_FUNCS),_______,                           _______,    _______,    _______,                TO(_BASE),  _______,    _______,    _______,    _______
    ),
    [_RGB] = LAYOUT_all(
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    RGB_VAD,    _______,    NK_ON,      NK_OFF,     _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,                _______,
        _______,    _______,    _______,    _______,    BL_DEC,      BL_TOGG,    BL_INC,    BL_STEP,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    TD(TD_FUNCS),_______,                           _______,    _______,    _______,                TO(_BASE),  _______,    _______,    _______,    _______
    )
};
