#ifdef KEY_OVERRIDE_ENABLE // 1040 bytes
//                          name                               modifiers      key    replacement
const key_override_t scln_key_override		= ko_make_basic(MOD_MASK_SHIFT, KC_COLN, KC_SCLN);
const key_override_t exlm_key_override 		= ko_make_basic(MOD_MASK_SHIFT, KC_DOT,  KC_QUES);
const key_override_t ques_key_override 		= ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_EXLM);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&scln_key_override,
	&exlm_key_override,
	&ques_key_override,

	NULL // Null terminate the array of overrides!
};
#endif
/*
MOD_MASK_CTRL
MOD_MASK_SHIFT
MOD_MASK_ALT
MOD_MASK_GUI
*/