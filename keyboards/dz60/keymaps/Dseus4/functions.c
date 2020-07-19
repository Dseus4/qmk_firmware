//function cycle tap dance
int func_cycle_hold(qk_tap_dance_state_t* state) {
    switch (state->count) {
    case 1:
            if (!state->pressed)
                return TAP1;
            else
                return HOLD1;
        break;
    case 2:
        if (!state->pressed)
            return TAP2;
        else
            return HOLD2;
        break;
    case 3:
        if (!state->pressed)
            return TAP3;
        else
            return HOLD3;
        break;
    default:
        return 0;
    }
}
static tap xtap_state = {
    .is_press_action = true,
    .state = 0,
    .layer = _BASE
};
void layer_tap_finished(qk_tap_dance_state_t* state, void* user_data) {
    xtap_state.state = func_cycle_hold(state);
    if (layer_state_is(_F))
        xtap_state.layer = _F;
    else if (layer_state_is(_SYSTEM))
        xtap_state.layer = _SYSTEM;
    else if (layer_state_is(_BASE))
        xtap_state.layer = _BASE;
    switch (xtap_state.state) {
        case HOLD1:
            layer_move(_SPEC);
            break;
        case TAP1:
            layer_move(_BASE);
            break;
        case HOLD2:
        case TAP2:
            layer_move(_F);
            break;
        case HOLD3:
        case TAP3:
            layer_move(_SYSTEM);
            break;
    }
}
void layer_tap_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (xtap_state.state) {
        case HOLD1:
        case HOLD2:
        case HOLD3:
            layer_move(xtap_state.layer);
            break;
    }
}

void flash_tap_finished(qk_tap_dance_state_t* state, void* user_data) {
    
    if (state->count == 5) {
        rgblight_set_layer_state(6, true);
        reset_keyboard();
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_NO, KC_CAPS),
    [TD_FUNCS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, layer_tap_finished, layer_tap_reset, 200),
    [TD_RESET] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, flash_tap_finished, NULL)
};

//custom keys
//bool process_record_user(uint16_t keycode, keyrecord_t* record) {
//    switch (keycode) {
//        case BKSLS_BSPC:
//            if (record->event.pressed) {
//                if (bksls_is_bkspc)
//                    register_code(KC_BSPC);
//                else
//                    register_code(KC_BSLS);
//            }
//            else {
//                if (bksls_is_bkspc)
//                    unregister_code(KC_BSPC);
//                else
//                    unregister_code(KC_BSLS);
//            }
//            return false;  // Skip all further processing of this key
//        case BSLS_DEL:
//            if (record->event.pressed) {
//                if (bksls_is_bkspc)
//                    register_code(KC_DEL);
//                else
//                    register_code(KC_BSLS);
//            }
//            else {
//                if (bksls_is_bkspc)
//                    unregister_code(KC_DEL);
//                else
//                    unregister_code(KC_BSLS);
//            }
//            return false;
//        case BSPC_BSLS:
//            if (record->event.pressed) {
//                if (bksls_is_bkspc)
//                    register_code(KC_BSLS);
//                else
//                    register_code(KC_BSPC);
//            }
//            else {
//                if (bksls_is_bkspc)
//                    unregister_code(KC_BSLS);
//                else
//                    unregister_code(KC_BSPC);
//            }
//            return false;
//            case BSPC_
//        default:
//            return true;
//    }
//}
