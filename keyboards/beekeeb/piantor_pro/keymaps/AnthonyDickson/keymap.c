// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Lock the MacBook
const uint16_t PROGMEM MAC_LCK = C(G(KC_Q));
// Custom macOS shortcut to tile window to the left half.
const uint16_t PROGMEM MAC_TWL = HYPR(KC_LEFT);
// Custom macOS shortcut to tile window to the right half.
const uint16_t PROGMEM MAC_TWR = HYPR(KC_RIGHT);
// Custom macOS shortcut to tile window to fill the screen.
const uint16_t PROGMEM MAC_TFS = HYPR(KC_F);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      S(KC_9),    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_EQL, MT(MOD_LALT, KC_A), MT(MOD_LCTL, KC_R), MT(MOD_LGUI, KC_S), MT(MOD_LSFT, KC_T), KC_G,
                                                                                    KC_M, MT(MOD_RSFT, KC_N), MT(MOD_RGUI, KC_E), MT(MOD_RCTL, KC_I), MT(MOD_RALT, KC_O), KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CW_TOGG, LT(7, KC_Z), KC_X,   KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, LT(7, KC_LBRC), KC_RBRC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                        LT(1, KC_ESC), LT(2, KC_TAB), LT(3, KC_SPC),     LT(4, KC_ENT),   LT(5, KC_BSPC), LT(6, KC_DEL)
                    //`--------------------------------------------'  `------------------------------------------------'

  ),

    // Media Layer
    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, MAC_LCK, KC_SLEP, XXXXXXX, XXXXXXX, MAC_TWL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, XXXXXXX,                      XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, MAC_TWR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MAC_TFS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,    KC_MSTP, KC_MPLY, KC_MUTE
                                      //`--------------------------'  `--------------------------'
  ),

    // Navigation Layer
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   G(S(KC_Z)), G(KC_V), G(KC_C), G(KC_X), G(KC_Z), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, XXXXXXX,                      KC_CAPS, KC_LEFT, KC_DOWN,  KC_UP, KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_INS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,     KC_ENT, KC_BSPC,  KC_DEL
                                      //`--------------------------'  `--------------------------'
  ),

    // Mouse layer
    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   G(S(KC_Z)), G(KC_V), G(KC_C), G(KC_X), G(KC_Z), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, XXXXXXX,                      XXXXXXX, MS_LEFT, MS_DOWN,   MS_UP, MS_RGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,    MS_BTN2, MS_BTN1, MS_BTN3
                                      //`--------------------------'  `--------------------------'
  ),

    // Symbol layer
    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, S(KC_LBRC), S(KC_7), S(KC_8), S(KC_9), S(KC_RBRC),                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, S(KC_SCLN), S(KC_4), S(KC_5), S(KC_6), S(KC_EQL),                 XXXXXXX, KC_RSFT, KC_RGUI, KC_RCTL, KC_RALT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, S(KC_GRV), S(KC_1), S(KC_2), S(KC_3), S(KC_BSLS),                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                       S(KC_9), S(KC_0), S(KC_MINS),    XXXXXXX, XXXXXXX, XXXXXXX
                                    //`----------------------------'  `--------------------------'
  ),

    // Number layer
    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL,                      XXXXXXX, KC_RSFT, KC_RGUI, KC_RCTL, KC_RALT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_DOT,    KC_0, KC_MINS,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    // Function layer
    [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,  KC_F12,   KC_F7,   KC_F8,   KC_F9, KC_PSCR,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_F11,   KC_F4,   KC_F5,   KC_F6, KC_SCRL,                      XXXXXXX, KC_RSFT, KC_RGUI, KC_RCTL, KC_RALT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_F10,   KC_F1,   KC_F2,   KC_F3,  KC_BRK,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_APP,  KC_TAB,  KC_SPC,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),


    // Button layer
    [7] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, G(KC_Z), G(KC_X), G(KC_C), G(KC_V), G(S(KC_Z)),                G(S(KC_Z)), G(KC_V), G(KC_C), G(KC_X), G(KC_Z), QK_BOOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CG_SWAP, KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, XXXXXXX,                      XXXXXXX, KC_RSFT, KC_RGUI, KC_RCTL, KC_RALT, CG_SWAP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CG_NORM, G(KC_Z), G(KC_X), G(KC_C), G(KC_V), G(S(KC_Z)),                G(S(KC_Z)), G(KC_V), G(KC_C), G(KC_X), G(KC_Z), CG_NORM,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MS_BTN3, MS_BTN1, MS_BTN2,    MS_BTN2, MS_BTN1, MS_BTN3
                                      //`--------------------------'  `--------------------------'
  ),
};
