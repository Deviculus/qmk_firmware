/* Copyright 2015-2017 Jack Humbert
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
#include "key_overrides.c"

#ifdef COMBO_ENABLE
  #include "g/keymap_combo.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT_planck_grid(
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    XXXXXXX, XXXXXXX, KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
      HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,    XXXXXXX, XXXXXXX, KC_M,    HOME_N,  HOME_E,  HOME_I,  HOME_O,
      KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    XXXXXXX, XXXXXXX, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_COLN,
      XXXXXXX, XXXXXXX, XXXXXXX, TH_BSPC, OS_LSFT, TH_TAB,  KC_ESC,  TH_SPC,  TH_ENT,  XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_NAV] = LAYOUT_planck_grid(
      UNDO,    CUT,     COPY,    PASTE,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_PGUP, KC_LEFT, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,
      KC_PGDN, KC_HOME, KC_DOWN, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_PSCR, XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX
  ),
  [_MOUSE] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_WH_U, KC_MS_L, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX,
    KC_WH_D, KC_WH_L, KC_MS_D, KC_WH_R, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN2, KC_BTN1, KC_BTN3, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
   ),
  [_NUMBER] = LAYOUT_planck_grid(
    KC_LBRC, KC_HASH, KC_DLR,  KC_LPRN, KC_LT,   XXXXXXX, XXXXXXX, KC_ASTR, KC_7,    KC_8,    KC_9,    KC_COMM,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_EQL,  XXXXXXX, XXXXXXX, KC_PLUS, KC_4,    KC_5,    KC_6,    KC_SLSH,
    KC_RBRC, KC_CIRC, KC_PERC, KC_RPRN, KC_GT,   XXXXXXX, XXXXXXX, KC_MINS, KC_1,    KC_2,    KC_3,    KC_COLN,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_DOT,  KC_0,    KC_ENT,  XXXXXXX, KC_MUTE, XXXXXXX 
  ),
  [_FN] = LAYOUT_planck_grid(
    RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, KC_NLCK, KC_F7,   KC_F8,   KC_F9,   KC_F12,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, KC_CAPS, KC_F4,   KC_F5,   KC_F6,   KC_F11,
    RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLCK, KC_F1,   KC_F2,   KC_F3,   KC_F10,
    XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, RGB_TOG, XXXXXXX 
  )
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