#define _______ KC_TRNS

//More HSV shades
#define HSV_OFF 0, 0, 0

#define HSV_WHITE_1 0, 0, 64
#define HSV_RED_1 0, 255, 64
#define HSV_CORAL_1 11, 176, 64
#define HSV_ORANGE_1 28, 255, 64
#define HSV_GOLDENROD_1 30, 218, 64
#define HSV_GOLD_1 36, 255, 64
#define HSV_YELLOW_1 43, 255, 64
#define HSV_CHARTREUSE_1 64, 255, 64
#define HSV_GREEN_1 85, 255, 64
#define HSV_SPRINGGREEN_1 106, 255, 64
#define HSV_TURQUOISE_1 123, 90, 64
#define HSV_TEAL_1 128, 255, 64
#define HSV_CYAN_1 128, 255, 64
#define HSV_AZURE_1 132, 102, 64
#define HSV_BLUE_1 170, 255, 64
#define HSV_PURPLE_1 191, 255, 64
#define HSV_MAGENTA_1 213, 255, 64
#define HSV_PINK_1 234, 128

#define HSV_WHITE_2 0, 0, 128
#define HSV_RED_2 0, 255, 128
#define HSV_CORAL_2 11, 176, 128
#define HSV_ORANGE_2 28, 255, 128
#define HSV_GOLDENROD_2 30, 218, 128
#define HSV_GOLD_2 36, 255, 128
#define HSV_YELLOW_2 43, 255, 128
#define HSV_CHARTREUSE_2 64, 255, 128
#define HSV_GREEN_2 85, 255, 128
#define HSV_SPRINGGREEN_2 106, 255, 128
#define HSV_TURQUOISE_2 123, 90, 128
#define HSV_TEAL_2 128, 255, 128
#define HSV_CYAN_2 128, 255, 128
#define HSV_AZURE_2 132, 102, 128
#define HSV_BLUE_2 170, 255, 128
#define HSV_PURPLE_2 191, 255, 128
#define HSV_MAGENTA_2 213, 255, 128
#define HSV_PINK_2 234, 128, 128

#define HSV_WHITE_3 0, 0, 192
#define HSV_RED_3 0, 255, 192
#define HSV_CORAL_3 11, 176, 192
#define HSV_ORANGE_3 28, 255, 192
#define HSV_GOLDENROD_3 30, 218, 192
#define HSV_GOLD_3 36, 255, 192
#define HSV_YELLOW_3 43, 255, 192
#define HSV_CHARTREUSE_3 64, 255, 192
#define HSV_GREEN_3 85, 255, 192
#define HSV_SPRINGGREEN_3 106, 255, 192
#define HSV_TURQUOISE_3 123, 90, 192
#define HSV_TEAL_3 128, 255, 192
#define HSV_CYAN_3 128, 255, 192
#define HSV_AZURE_3 132, 102, 192
#define HSV_BLUE_3 170, 255, 192
#define HSV_PURPLE_3 191, 255, 192
#define HSV_MAGENTA_3 213, 255, 192
#define HSV_PINK_3 234, 128, 192

typedef struct {
    bool is_press_action;
    int  state;
    int  layer;
} tap;

//tapdance hold/tap defs
enum {
    TAP1 = 0,
    HOLD1 = 1,
    TAP2 = 2,
    HOLD2 = 3,
    TAP3 = 4,
    HOLD3 = 5
};

//tapdance defs
enum {
    TD_CAPS = 0,
    TD_FUNCS,
    TD_RESET,
    TD_MCRO1,
    TD_MCRO2
};

//layer defs
enum layers {
    _BASE = 0,
    _F,
    _SYSTEM,
    _SPEC
};

enum custom_keycodes {
    LT_TOGG = SAFE_RANGE,
    BSLS_BSPC,
    BSLS_DEL,
    BSPC_TILDE,
    BSPC_BSLS,
    TOGG_BSLS
};

unsigned int underglow_level = 4;
bool bksls_is_bkspc = false;
