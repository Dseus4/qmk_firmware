//static LED_stats LED = {
//    .brightness = 255
//};

const rgblight_segment_t PROGMEM base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0, 16, HSV_CYAN }
);
const rgblight_segment_t PROGMEM nums_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 4, 3, HSV_GREEN },
    { 9, 3, HSV_GREEN }
);
const rgblight_segment_t PROGMEM f_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0, 8, HSV_PURPLE }
);
const rgblight_segment_t PROGMEM rgb_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 8, 8, HSV_GOLD}
);
const rgblight_segment_t PROGMEM caps_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0, 1, HSV_RED },
    { 15, 1, HSV_RED }
);
const rgblight_segment_t PROGMEM numl_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 7, 2, HSV_RED }
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    base_layer,
    nums_layer,
    f_layer,
    rgb_layer,
    caps_layer,
    numl_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state, led_t led_state) {
    
    //_BASE layer
    if (layer_state_cmp(state, 0)) {
        for (int led_num = 0, count = 0; count < 16; led_num++, count++)
            sethsv(HSV_CYAN, (LED_TYPE*)&led[led_num]);
    }
    //_NUM layer
    if (layer_state_cmp(state, 1)) {
        for (int led_num = 4, count = 0; count < 3; led_num++, count++)
            sethsv(HSV_GREEN, (LED_TYPE*)&led[led_num]);
        for (int led_num = 9, count = 0; count < 3; led_num++, count++)
            sethsv(HSV_GREEN, (LED_TYPE*)&led[led_num]);
    }
    //_F layer
    if (layer_state_cmp(state, 2)) {
        for (int led_num = 0, count = 0; count < 8; led_num++, count ++)
            sethsv(HSV_PURPLE, (LED_TYPE*)&led[led_num]);
    }
    //_RGB layer
    if (layer_state_cmp(state, 3)) {
        for (int led_num = 0, count = 0; count < 8; led_num++, count ++)
            sethsv(HSV_PURPLE, (LED_TYPE*)&led[led_num]);
    }
    if (led_state.caps_lock) {
        sethsv(HSV_RED, (LED_TYPE*)&led[0]);
        sethsv(HSV_RED, (LED_TYPE*)&led[15]);
    }
    if (!led_state.num_lock) {
        sethsv(HSV_RED, (LED_TYPE*)&led[7]);
        sethsv(HSV_RED, (LED_TYPE*)&led[8]);
    }
    rgblight_set();
    //rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    //rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    //rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    //rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    return state;
}

bool led_update_user(layer_state_t state, led_t led_state) {
    //_BASE layer
    if (layer_state_cmp(state, 0)) {
        for (int led_num = 0, count = 0; count < 16; led_num++, count++) sethsv(HSV_CYAN, (LED_TYPE*)&led[led_num]);
    }
    //_NUM layer
    if (layer_state_cmp(state, 1)) {
        for (int led_num = 4, count = 0; count < 3; led_num++, count++) sethsv(HSV_GREEN, (LED_TYPE*)&led[led_num]);
        for (int led_num = 9, count = 0; count < 3; led_num++, count++) sethsv(HSV_GREEN, (LED_TYPE*)&led[led_num]);
    }
    //_F layer
    if (layer_state_cmp(state, 2)) {
        for (int led_num = 0, count = 0; count < 8; led_num++, count++) sethsv(HSV_PURPLE, (LED_TYPE*)&led[led_num]);
    }
    //_RGB layer
    if (layer_state_cmp(state, 3)) {
        for (int led_num = 0, count = 0; count < 8; led_num++, count++) sethsv(HSV_PURPLE, (LED_TYPE*)&led[led_num]);
    }
    if (led_state.caps_lock) {
        sethsv(HSV_RED, (LED_TYPE*)&led[0]);
        sethsv(HSV_RED, (LED_TYPE*)&led[15]);
    }
    if (!led_state.num_lock) {
        sethsv(HSV_RED, (LED_TYPE*)&led[7]);
        sethsv(HSV_RED, (LED_TYPE*)&led[8]);
    }
    rgblight_set();
    //rgblight_set_layer_state(4, led_state.caps_lock);
    //rgblight_set_layer_state(5, !led_state.num_lock);
    return true;
}
