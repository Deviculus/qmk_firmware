#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (IS_LAYER_ON(_NAV)) {
            tap_code(clockwise ? KC_LEFT : KC_RIGHT);
        } 
        else if (IS_LAYER_ON(_MOUSE)){
            tap_code16(clockwise ? KC_BSPC : LCTL(KC_Z));
        }
        else {
            tap_code16(clockwise ? LCTL(KC_Z) : LCTL(KC_Y));
        }
    }
    else if (index == 1) { 
        if (IS_LAYER_ON(_NUMBER)) {
            tap_code(clockwise ? KC_VOLD : KC_VOLU);
        } 
        else if (IS_LAYER_ON(_FN)) {
            tap_code(clockwise ? KC_BRID : KC_BRIU);
        }
        else {
            tap_code16(clockwise ? LSFT(KC_TAB) : KC_TAB);
        } 
    }
}
#endif