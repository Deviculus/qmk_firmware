/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "keymap.h"

#include "oled.c"

#include "encoders.c"

#include "key_overrides.c"

#ifdef COMBO_ENABLE
  #include "g/keymap_combo.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */

    [_COLEMAK] = LAYOUT(
      XXXXXXX, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                        KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, XXXXXXX,
      XXXXXXX, HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,                                        KC_M,    HOME_N,  HOME_E,  HOME_I,  HOME_O,  G_ON,
      XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_COLN, XXXXXXX,
                                 LOCK,    XXXXXXX, TH_BSPC, OS_LSFT, TH_TAB,  KC_ESC,  TH_SPC,  TH_ENT,  XXXXXXX, DESKTOP
    ),
    /*[_DVORAK] = LAYOUT(
      KC_MNXT, KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                                        KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_CAPS,
      KC_MPLY, DVOR_A,  DVOR_O,  DVOR_E,  DVOR_U,  KC_I,                                        KC_D,    DVOR_H,  DVOR_T,  DVOR_N,  DVOR_S,  G_ON,
      KC_MPRV, KC_COLN, KC_Q,    KC_J,    KC_K,    KC_X,    DISCORD, TASKMAN, KC_CALC, EMOTE,   KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_PSCR,
                                 LOCK,    XXXXXXX, TH_TAB,  TH_BSPC, OS_LSFT, KC_ESC,  TH_SPC,  TH_ENT,  XXXXXXX, DESKTOP
    ),*/
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_NAV] = LAYOUT(
      XXXXXXX, UNDO,    CUT,     COPY,    PASTE,   XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_PGUP, KC_LEFT, KC_UP,   KC_RGHT, XXXXXXX,                                     XXXXXXX, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, XXXXXXX,
      XXXXXXX, KC_PGDN, KC_HOME, KC_DOWN, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 KC_PSCR, XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX
    ),
 /*
  * Layer templater
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_MOUSE] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_WH_U, KC_MS_L, KC_MS_U, KC_MS_R, XXXXXXX,                                     XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_WH_D, KC_WH_L, KC_MS_D, KC_WH_R, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, XXXXXXX, KC_BTN2, KC_BTN1, KC_BTN3, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX
     ),
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |   8  |   7  |   6  |   5  |   ^  |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |   4  |   3  |   2  |   1  |   9  |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |   /  |   -  |   *  |   +  |   %  |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |   ,  |   =  |   0  |   .  |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_NUMBER] = LAYOUT(
      XXXXXXX, KC_LBRC, KC_HASH, KC_DLR,  KC_LPRN, KC_LT,                                       KC_ASTR, KC_7,    KC_8,    KC_9,    KC_COMM, XXXXXXX,
      XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_EQL,                                      KC_PLUS, KC_4,    KC_5,    KC_6,    KC_SLSH, XXXXXXX,
      XXXXXXX, KC_RBRC, KC_CIRC, KC_PERC, KC_RPRN, KC_GT,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_1,    KC_2,    KC_3,    KC_COLN, XXXXXXX,
                                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_DOT,  KC_0,    KC_ENT,  XXXXXXX,  KC_MUTE
    ),
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_FN] = LAYOUT(
      XXXXXXX, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,                                     KC_NLCK, KC_F7,   KC_F8,   KC_F9,   KC_F12,  XXXXXXX,
      XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                                     KC_CAPS, KC_F4,   KC_F5,   KC_F6,   KC_F11,  XXXXXXX,
      XXXXXXX, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLCK, KC_F1,   KC_F2,   KC_F3,   KC_F10,  XXXXXXX,
                                 XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, RGB_TOG
    ),
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_GAMES] = LAYOUT(
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, TO(_APEX), TO(_MH), TO(_LOL), TO(_HK), XXXXXXX,
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, TO(_QWERTY), XXXXXXX, XXXXXXX, XXXXXXX, G_OFF,
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
//----------------------------------------------------------------------------------------------------------------------------------------------------
    [_APEX] = LAYOUT(
      KC_ESC,  KC_T,    KC_R,    KC_W,    KC_E,    KC_P2,                                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_TAB,  KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_F1,   KC_Z,    KC_P3,   KC_P4,   KC_P1,   KC_P5,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, XXXXXXX, KC_Q,    KC_SPC,  KC_C,    XXXXXXX, KC_ENT,  GCHAT_ON,XXXXXXX, G_OFF
     ),

    [_MH] = LAYOUT(
      KC_ESC,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_T,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_F8,   KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_N,    XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, KC_M,    KC_LALT, KC_SPC,  G_NUM,    XXXXXXX, KC_ENT,  GCHAT_ON,XXXXXXX, G_OFF
     ),   

    [_LOL] = LAYOUT(
      KC_ESC,  KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_V,    KC_LSFT, KC_Q,    KC_W,    KC_E,    KC_R,                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_T,    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, XXXXXXX, KC_LALT, KC_SPC,  G_NUM,    XXXXXXX, KC_ENT,  GCHAT_ON,   XXXXXXX, G_OFF
     ),

    [_HK] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                      XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_TAB,  KC_X,    KC_F,    KC_C,    XXXXXXX,                                      XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_RBRC, XXXXXXX,
      XXXXXXX, XXXXXXX, KC_D,    KC_A,    KC_S,    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, XXXXXXX, KC_ESC,   KC_Z,    XXXXXXX, XXXXXXX, KC_LBRC, KC_I,    XXXXXXX, G_OFF
     ),
    [_QWERTY] = LAYOUT(
      KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
      XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, XXXXXXX,
      XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX,
                                 XXXXXXX, XXXXXXX, KC_TAB,  KC_BSPC, G_NUM,   G_NAV,   KC_SPC,  KC_ENT,  XXXXXXX, G_OFF
    ),
//----------------------------------------------------------------------------------------------------------------------------------------------------
    [_GNUM] = LAYOUT(
      XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_0,    KC_1,    KC_2,    KC_3,    KC_4,                                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_9,    KC_5,    KC_6,    KC_7,    KC_8,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, XXXXXXX, _______, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
     ),
    [_GNAV] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,                                     XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, XXXXXXX, _______, XXXXXXX, _______, _______, XXXXXXX, _______, XXXXXXX, XXXXXXX
    ),
    [_GCHAT] = LAYOUT(
      XXXXXXX, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                        KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, XXXXXXX,
      XXXXXXX, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                        KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    XXXXXXX,
      XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_COLN, XXXXXXX,
                                 XXXXXXX, XXXXXXX, KC_TAB,  KC_BSPC, OS_LSFT, KC_ESC,  KC_SPC,  GCHAT_OFF,  XXXXXXX, XXXXXXX
    )
// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    /*case EMOTE: 
      if (record->event.pressed) {
        SEND_STRING("- v-)b");
      }
      break;*/
    case G_ON:
      if (record->event.pressed) {
        combo_disable();
        key_override_off();
        key_override = false;
        layer_move(_GAMES);
      }
      return false;
    case G_OFF:
      if (record->event.pressed) {
        combo_enable();
        key_override_on();
        key_override = true;
        layer_move(_COLEMAK);
      }
      return false;
    case GCHAT_ON:
      if (record->event.pressed) {
        layer_on(_GCHAT);
        key_override_on();
        key_override = true;
      }
      return false;
    case GCHAT_OFF:
      if (record->event.pressed) {
        tap_code(KC_ENT);
        layer_off(_GCHAT);
        key_override_off();
        key_override = false;
      }
      return false;
      //return false;
  }
  return true;
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TH_SPC:
        case TH_ENT:
        case TH_BSPC:
        case TH_TAB:
            return TAPPING_TERM -30;
        default:
            return TAPPING_TERM;
    }
}
   

/*
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TH_SPC:
            return true;
        default:
            return false;
    }
}; 
*/