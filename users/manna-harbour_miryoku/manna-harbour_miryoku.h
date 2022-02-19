// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_NORDIC

#include "miryoku_babel/miryoku_layer_names.h"
#include "miryoku_babel/miryoku_layer.h"

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

#if defined (MIRYOKU_CLIPBOARD_FUN)
  #define U_RDO KC_AGIN
  #define U_PST KC_PSTE
  #define U_CPY KC_COPY
  #define U_CUT KC_CUT
  #define U_UND KC_UNDO
#elif defined (MIRYOKU_CLIPBOARD_MAC)
  #define U_RDO SCMD(KC_Z)
  #define U_PST LCMD(KC_V)
  #define U_CPY LCMD(KC_C)
  #define U_CUT LCMD(KC_X)
  #define U_UND LCMD(KC_Z)
#elif defined (MIRYOKU_CLIPBOARD_WIN)
  #define U_RDO C(KC_Y)
  #define U_PST C(KC_V)
  #define U_CPY C(KC_C)
  #define U_CUT C(KC_X)
  #define U_UND C(KC_Z)
#else
  #define U_RDO KC_AGIN
  #define U_PST S(KC_INS)
  #define U_CPY C(KC_INS)
  #define U_CUT S(KC_DEL)
  #define U_UND KC_UNDO
#endif


#if defined (MIRYOKU_NORDIC)
  //Nordic
#define  NO_AAE    0x34        // Æ
#define  NO_AE    KC_QUOTE     //  Æ
#define  NO_AO    KC_LBRACKET     //  Å
#define  NO_BSLS  KC_BSLASH      //  Backslash
#define  NO_LT    KC_NONUS_BACKSLASH     //  <
#define  NO_MINS  KC_SLASH     //  -
#define  NO_OE    KC_SCOLON     //  Ø
#define  NO_PIPE  KC_GRAVE      //  |
#define  NO_PLUS  KC_MINUS     //  +
#define  NO_QUOT  KC_NONUS_HASH     //  '
#define  NO_UMLA  KC_RBRACKET     //  ¨
#define  NO_RALT  KC_RIGHT_GUI  //  Right Alt
//Nordic - Modifier dependant definitions
#define  NO_EXLM  LSFT(KC_1)        //  !
#define  NO_DQT   LSFT(KC_2)        //  "
#define  NO_AT    RALT(KC_2)        //  @
#define  NO_HASH  LSFT(KC_3)        //  #
#define  NO_EUR   LSFT(KC_4)        //  €
#define  NO_DLR   RALT(KC_4)        //  $
#define  NO_PERC  LSFT(KC_5)        //  %
#define  NO_AMPR  LSFT(KC_6)        //  &
#define  NO_SLSH  LSFT(KC_7)        //  /
#define  NO_LPRN  LSFT(KC_8)        //  (
#define  NO_RPRN  LSFT(KC_9)        //  )
#define  NO_EQL   LSFT(KC_0)        //  =
#define  NO_LCBR  RALT(KC_7)        //  {
#define  NO_LBRC  RALT(KC_8)        //  [
#define  NO_RBRC  RALT(KC_9)        //  ]
#define  NO_RCBR  RALT(KC_0)        //  }
#define  NO_COLN  LSFT(KC_DOT)      //  :
#define  NO_SCLN  LSFT(KC_COMM)     //  ;
#define  NO_MICR  RALT(KC_M)        //  µ
#define  NO_EURO  RALT(KC_E)        //  €
#define  NO_SECT  LSFT(KC_GRV)      //  §
#define  NO_GERC  RALT(KC_COMM)     //  ¸
#define  NO_QUAR  LSFT(RALT(KC_4))  //  ¼
//Norwegian layout - dependant on previous definitions
#define  NO_UNDS  LSFT(NO_MINS)  //  _
#define  NO_QUES  LSFT(NO_PLUS)  //  ?
#define  NO_ACUT  RALT(NO_BSLS)  //  Acute
#define  NO_GRV   LSFT(NO_BSLS)  //  `
#define  NO_GT    LSFT(NO_LT)    //  >
#define  NO_HALF  RALT(NO_LT)    //  ½
#define  NO_CIRC  LSFT(NO_UMLA)  //  ^
#define  NO_ASTR  LSFT(NO_QUOT)  //  *
#define  NO_TILD  RALT(NO_UMLA)  //  ~

#undef KC_QUOT
#define KC_QUOT NO_QUOT

#endif
