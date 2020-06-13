#define _______ KC_TRNS

//More HSV shades
#define HSV_OFF 0, 0, 0

#define HSV_WHITE_PART 0, 0
#define HSV_RED_PART 0, 255
#define HSV_CORAL_PART 11, 176
#define HSV_ORANGE_PART 28, 255
#define HSV_GOLDENROD_PART 30, 218
#define HSV_GOLD_PART 36, 255
#define HSV_YELLOW_PART 43, 255
#define HSV_CHARTREUSE_PART 64, 255
#define HSV_GREEN_PART 85, 255
#define HSV_SPRINGGREEN_PART 106, 255
#define HSV_TURQUOISE_PART 123, 90
#define HSV_TEAL_PART 128, 255
#define HSV_CYAN_PART 128, 255
#define HSV_AZURE_PART 132, 102
#define HSV_BLUE_PART 170, 255
#define HSV_PURPLE_PART 191, 255
#define HSV_MAGENTA_PART 213, 255
#define HSV_PINK_PART 234, 128

typedef struct {
    bool is_press_action;
    int  state;
    int  layer;
} tap;

typedef struct {
    int brightness;
} LED_stats;

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
    _SYSTEM,
    _SPEC
};
