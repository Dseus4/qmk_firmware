int func_cycle_hold(qk_tap_dance_state_t* state) {
    switch (state->count) {
    case 1:
            if (state->interrupted || !state->pressed)
                return TAP1;
            else
                return HOLD1;
        break;
    case 2:
        if (state->interrupted || !state->pressed)
            return TAP2;
        else
            return HOLD2;
        break;
    case 3:
        if (state->interrupted || !state->pressed)
            return TAP3;
        else
            return HOLD3;
        break;
    case 4:
        if (state->interrupted || !state->pressed)
            return TAP4;
        else
            return HOLD4;
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



void x_finished(qk_tap_dance_state_t* state, void* user_data) {
    xtap_state.state = func_cycle_hold(state);
    if (layer_state_is(_NUM))
        xtap_state.layer = _NUM;
    else if (layer_state_is(_F))
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
            layer_move(_NUM);
            break;
        case HOLD3:
        case TAP3:
            layer_move(_F);
            break;
        case HOLD4:
        case TAP4:
            layer_move(_SYSTEM);
            break;
    }
}
void x_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (xtap_state.state) {
        case HOLD1:
        case HOLD2:
        case HOLD3:
        case HOLD4:
            layer_move(xtap_state.layer);
            break;
    }
}


qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_NO, KC_CAPS),
    [TD_FUNCS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, x_finished, x_reset, 225)
};
