//static LED_stats LED = {
//    .brightness = 255
//};

const rgblight_segment_t PROGMEM base_layer[]   = RGBLIGHT_LAYER_SEGMENTS( { 0, 16, HSV_CYAN } );
const rgblight_segment_t PROGMEM nums_layer[]   = RGBLIGHT_LAYER_SEGMENTS( { 0, 16, HSV_GREEN } );
const rgblight_segment_t PROGMEM f_layer[]      = RGBLIGHT_LAYER_SEGMENTS( { 0, 16, HSV_PURPLE } );
const rgblight_segment_t PROGMEM system_layer[] = RGBLIGHT_LAYER_SEGMENTS( { 0, 16, HSV_GOLD } );
const rgblight_segment_t PROGMEM spec_layer[]   = RGBLIGHT_LAYER_SEGMENTS( { 0, 16, HSV_BLUE } );
const rgblight_segment_t PROGMEM caps_layer[]   = RGBLIGHT_LAYER_SEGMENTS( { 0, 1, HSV_RED } );
const rgblight_segment_t PROGMEM numl_layer[]   = RGBLIGHT_LAYER_SEGMENTS( { 7, 1, HSV_RED } );

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    base_layer,
    nums_layer,
    f_layer,
    system_layer,
    spec_layer,
    caps_layer,
    numl_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
    rgblight_set_layer_state(0, true);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(5, led_state.caps_lock);
    rgblight_set_layer_state(6, !led_state.num_lock);
    return true;
}

//int main(void) {
//    rgblight_set_layer_state(0, true);
//}
