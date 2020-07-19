#include QMK_KEYBOARD_H
#include "defs.c"
#include "rgb.c"
#include "functions.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_all(
        KC_GESC,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSLS,    KC_GRV,  
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSPC,           
        TD(TD_CAPS),KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,            
        KC_LSFT,    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_UP,      KC_RSFT,    KC_RSFT,
        KC_LCTL,    KC_LGUI ,    KC_LALT,                           KC_SPC,     TD(TD_FUNCS),KC_SPC,                            KC_RALT,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_RCTL
    ),
    [_F] = LAYOUT_all(
        _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______,     _______,
        _______,    KC_F13,     KC_F14,     KC_F15,     KC_F16,     KC_F17,     KC_F18,     KC_F19,     KC_F20,     KC_F21,     KC_F22,     KC_F23,     KC_F24,     KC_DEL,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,                            _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______
    ),
    [_SYSTEM] = LAYOUT_all(
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_INS,     _______,    KC_PSCR,    NK_ON,      NK_OFF,     _______,
        TD(TD_RESET),_______,   _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_SLCK,    _______,    _______,    _______,
        _______,    _______,    RGB_TOG,    RGB_HUI,    RGB_SAI,    RGB_VAI,    BL_STEP,    _______,    _______,    _______,    _______,    _______,    KC_VOLU,    _______,    _______,
        _______,    _______,    _______,                            KC_MPLY,    _______,    KC_MPLY,                            _______,    KC_MPRV,    KC_VOLD,    KC_MNXT,    KC_MUTE
    ),
    [_SPEC] = LAYOUT_all(
        KC_GRV,     _______,    _______,    _______,    _______,    _______,    _______,    KC_P7,      KC_P8,      KC_P9,      KC_PAST,    KC_PMNS,    KC_PPLS,    _______,    KC_PSCR,
        _______,    DM_REC1,    DM_PLY1,    _______,    _______,    _______,    _______,    KC_P4,      KC_P5,      KC_P6,      _______,    _______,    _______,    KC_DEL,
        KC_NLCK,    DM_REC2,    DM_PLY2,    _______,    _______,    _______,    _______,    KC_P1,      KC_P2,      KC_P3,      _______,    _______,    DM_RSTP,
        _______,    _______,    _______,    _______,    KC_CALC,    _______,    _______,    _______,    KC_P0,      KC_PDOT,    KC_PENT,    KC_PSLS,    KC_PGUP,    _______,    _______,
        _______,    _______,    _______,                            _______,    _______,    _______,                            _______,    KC_HOME,    KC_PGDN,    KC_END,     _______    
    )
};

