#pragma once

#include QMK_KEYBOARD_H

enum layers {
  _COLEMAK = 0,
  _NAV,
  _MOUSE,
  _NUMBER,
  _FN
};

#define  DESKTOP LGUI(KC_TAB)
#define  LOCK    LGUI(KC_L)
#define  UNDO    LCTL(KC_Z)
#define  CUT     LCTL(KC_X)
#define  COPY    LCTL(KC_C)
#define  PASTE   LCTL(KC_V)
// #define  TASKMAN LGUI(KC_1)
// #define  DISCORD LGUI(KC_2)

#define  HOME_A  LGUI_T(KC_A)
#define  HOME_R  LALT_T(KC_R)
#define  HOME_S  LSFT_T(KC_S)
#define  HOME_T  LCTL_T(KC_T)

#define  HOME_N  LCTL_T(KC_N)
#define  HOME_E  LSFT_T(KC_E)
#define  HOME_I  LALT_T(KC_I)
#define  HOME_O  LGUI_T(KC_O)
/*
#define  DVOR_A  LGUI_T(KC_A)
#define  DVOR_O  LALT_T(KC_O)
#define  DVOR_E  LSFT_T(KC_E)
#define  DVOR_U  LCTL_T(KC_U)

#define  DVOR_H  LCTL_T(KC_H)
#define  DVOR_T  LSFT_T(KC_T)
#define  DVOR_N  LALT_T(KC_N)
#define  DVOR_S  LGUI_T(KC_S)*/

#define  OS_LSFT OSM(MOD_LSFT)
#define  OS_LCTL OSM(MOD_LCTL)
#define  OS_LALT OSM(MOD_LALT)
#define  OS_LGUI OSM(MOD_LGUI)


#define  TH_TAB  LT(_NUMBER,  KC_TAB)
#define  TH_BSPC LT(_FN,      KC_BSPC)

#define  TH_SPC  LT(_MOUSE,   KC_SPC)
#define  TH_ENT  LT(_NAV,     KC_ENT)