#define _______ KC_TRNS


typedef struct {
    bool is_press_action;
    int  state;
    int  layer;
} tap;

enum {
    MO1 = KC_F13,
    MO2 = KC_F14,
    MO3 = KC_F15,
    MO4 = KC_F16
};

//tapdance hold/tap defs
enum {
    TAP1 = 0,
    HOLD1 = 1,
    TAP2 = 2,
    HOLD2 = 3,
    TAP3 = 4,
    HOLD3 = 5,
    TAP4 = 6,
    HOLD4 = 7
};

//tapdance defs
enum {
    TD_CAPS = 0,
    TD_FUNCS
};

//layer defs
enum layers {
    _BASE = 0,
    _NUM,
    _F,
    _RGB
};
