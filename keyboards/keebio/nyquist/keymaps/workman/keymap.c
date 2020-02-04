#include "nyquist.h"
// #include QMK_KEYBOARD_H
#include "action_layer.h"



#define _BL 0
// #define _QWERTY 2

#define _FL1 1
#define _FL2 2
#define _FL3 3
#define _NUM 4
#define _LEFT 5
#define _LEFT_NUM 6
#define _LEFT2 7
#define _PROGRAMMING 8
#define _SHORTCUTS 9
#define _MOUSE 10
#define _FL1_clone 11
#define _LED_SOUND 12


#define _COPY LCMD(KC_C)
#define _PASTE LCMD(KC_V)
#define _CUT LCMD(KC_X)

#define _UNDO LCMD(KC_Z)
#define _REDO LCMD(LSFT(KC_Z))
#define _SAVE LCMD(KC_S)
#define _S_NO_FRMT S(LCMD(KC_S))

#define _Inc1  S(LCMD(KC_UP))
#define _Dec1  S(LCMD(KC_DOWN))
#define _Inc10 LALT(LCMD(KC_UP))
#define _Dec10 LALT(LCMD(KC_DOWN))
#define _Inc01 S(LALT(KC_UP))
#define _Dec01 S(LALT(KC_DOWN))
#define _DupLine S(LCMD(KC_D))

#define _block_u LCMD(LALT(KC_Y))
#define _block_d LCMD(LALT(KC_K))
#define _block_s_u S(LCMD(LALT(KC_Y)))
#define _block_s_d S(LCMD(LALT(KC_K)))

#define _terminal LCMD(KC_GRV)
#define _t_focus LCMD(LALT(KC_F))
#define _slctWord S(LCMD(LALT(KC_W)))


#define xxxxx KC_NO


// #include "tap_dance.c"


// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
//   FL1,
//   NUM,
//   TEST,
//   MOUSE
// };

enum{
  TD_COL_SEMC = 0,
	// TD_IME_ESC_CLEAR,
  TD_QUOTATION,
  TD_IME,
  TD_R_BRCT,
  TD_L_BRCT,
  // TD_AT_HASH,
  // TD_EQ_GT,

  TD_TAB_STAB,

  // $ _
  TD_DOL_UNDR,
  // & |
  TD_AMP_PIP,
  // \ ~
  TD_BCSL_TILD,


  // 3 keys tapdance
  TD_HS_AT_CI,
  TD_EDL_GT_LT,
  TD_DOL_UNDR_TILD,
  TD_AMP_PIP_BCSL,



DOL_LT,
LCBR_AT,
RCBR_HASH,
LPRN_TILD,
RPRN_CIRC,
EQL_RBRC,
CLN_UNDR,
QUO_DQUO,
QES_GRV,
COPY_CUT,
GT_RBRC
};

enum custom_keycodes {
    px = SAFE_RANGE,
    em
};


qk_tap_dance_action_t tap_dance_actions[] = {

  // [TD_QUOTATION]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL, quo_doublequo_backtic_fin, quo_doublequo_backtic_res),
  // [TD_HS_AT_CI]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL, hash_at_crirc_fin, hash_at_crirc_res),
  // [TD_EDL_GT_LT]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL, eql_grater_less_fin, eql_grater_less_res),
  //
  //
  [TD_COL_SEMC]  = ACTION_TAP_DANCE_DOUBLE(KC_COLN, KC_SCLN),
	// [TD_L_BRCT]  = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LBRC),
	// [TD_R_BRCT]  = ACTION_TAP_DANCE_DOUBLE(KC_RPRN, KC_RBRC),
	// [TD_TAB_STAB]  = ACTION_TAP_DANCE_DOUBLE(KC_TAB, S(KC_TAB)),
	// [TD_IME]  = ACTION_TAP_DANCE_DOUBLE(S(LCMD(KC_F9)), S(LCMD(KC_F8))),
  //
  //
  //
  //
  // [TD_DOL_UNDR]  = ACTION_TAP_DANCE_DOUBLE (KC_DOLLAR, KC_UNDERSCORE),
  // [TD_AMP_PIP]  = ACTION_TAP_DANCE_DOUBLE (KC_AMPERSAND, KC_PIPE),
  // [TD_BCSL_TILD]  = ACTION_TAP_DANCE_DOUBLE (KC_BSLASH, KC_TILDE),
  //
  //
  //


  [DOL_LT] = ACTION_TAP_DANCE_DOUBLE (KC_DOLLAR, KC_LT),
  [LCBR_AT] = ACTION_TAP_DANCE_DOUBLE (KC_LCBR, KC_AT),
  [RCBR_HASH] = ACTION_TAP_DANCE_DOUBLE (KC_LCBR, KC_HASH),
  [LPRN_TILD] = ACTION_TAP_DANCE_DOUBLE (KC_LPRN, KC_TILDE),
  [RPRN_CIRC] = ACTION_TAP_DANCE_DOUBLE (KC_RPRN, KC_CIRC),
  [EQL_RBRC] = ACTION_TAP_DANCE_DOUBLE (KC_EQL, KC_RBRC),
  [CLN_UNDR] = ACTION_TAP_DANCE_DOUBLE (KC_COLN, KC_UNDERSCORE),
  [QUO_DQUO] = ACTION_TAP_DANCE_DOUBLE (KC_QUOT, KC_DQT),
  [QES_GRV] = ACTION_TAP_DANCE_DOUBLE (KC_QUES, KC_GRV),
  [COPY_CUT]= ACTION_TAP_DANCE_DOUBLE (_COPY, _CUT),

  [GT_RBRC] = ACTION_TAP_DANCE_DOUBLE (KC_GT, KC_RBRC)



  // [TD_DOL_UNDR_TILD]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL, doller_underscore_tilde_fin, doller_underscore_tilde_res),
  // [TD_AMP_PIP_BCSL]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL, amp_pipe_backslash_fin, amp_pipe_backslash_res),
};

// @description: S(LALT(LCTL(__some_key__))) is used anywhere that are available.
// @description: F10 doesn't work sometimes with other mod keys... Replace it with tab key.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_BL] = KEYMAP(
  OSM(MOD_LALT)     , KC_Q, KC_D, KC_R, KC_W, KC_B,       KC_J, KC_F, KC_U   , KC_P  , S(LCMD(KC_F8)) , OSM(MOD_LGUI | MOD_LSFT),
  OSM(MOD_LGUI)     , KC_A, KC_S, KC_H, KC_T, KC_G,       KC_Y, KC_N, KC_E   , KC_O  , KC_I       , KC_MINS,
  LT(_LEFT, KC_ESC) , KC_Z, KC_V, KC_M, KC_C, KC_X,       KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH    , KC_LCTL,

  KC_ENT,  MO(_LEFT_NUM), LT(_LEFT2, KC_ESC),   LT(_PROGRAMMING, KC_TAB), LT(_SHORTCUTS, KC_SPC), MO(_FL1),   OSM(MOD_LSFT), LT(_NUM, KC_BSPC), LT(_MOUSE, KC_DEL), KC_APP, MO(_LED_SOUND), S(LCMD(KC_F9))
),

[_FL1] = KEYMAP(
  KC_AMPR, KC_UNDS    , KC_LCBR, KC_RCBR     , TD(COPY_CUT)   , _PASTE ,        S(LCMD(KC_D)), S(LALT(KC_LEFT)) , KC_UP              , S(LALT(KC_RGHT)), _slctWord          , LCMD(KC_SLSH),
  KC_PIPE, KC_DLR     , KC_LPRN, KC_RPRN     , TD(TD_COL_SEMC), KC_EXLM,        LCMD(KC_LEFT), KC_LEFT          , KC_DOWN            , KC_RGHT         , LCMD(KC_RGHT)      , S(LALT(LCTL(KC_MINS))),
  KC_BSLS, TD(GT_RBRC), KC_LBRC, KC_EQL      , TD(QUO_DQUO)   , KC_QUES,        KC_COMM      , LALT(KC_LEFT)    , LCTL(LALT(KC_LEFT)), LALT(KC_RGHT)   , LCTL(LALT(KC_RGHT)), KC_LSFT,
  _______, _______    , _______, KC_TAB      , S(KC_TAB)      , _______,        MO(_FL3)     , LT(_FL2, KC_BSPC), KC_SPC             , _______         , _______            , S(LALT(LCTL(KC_F12)))
),

[_FL2] = KEYMAP(
  _______,     _______ ,   _______,   _______,   _______,    _______,         S(LALT(LCTL(KC_Z))), S(LALT(LCTL(KC_V))), S(KC_UP)  , S(LALT(LCTL(KC_X))), S(LALT(LCTL(KC_C))), _______,
  _______,     KC_TILDE,   KC_GRAVE ,   KC_AT  ,   KC_SCLN,    S(KC_3),       S(LCMD(KC_LEFT))    , S(KC_LEFT)          , S(KC_DOWN), S(KC_RGHT)          , S(LCMD(KC_RGHT))    , _______,
  _______,     KC_LT   ,   KC_CIRC,   KC_RBRC,   KC_DQT ,    _______,         S(LALT(LCTL(KC_Q))), _block_s_u          , _block_u  , _block_s_d          , _block_d            , _______,
  _______,     _______ ,   _______,   _______,   _______,    _______,         _______         , _______   , _______   , _______         , _______  , _______
),

[_FL3] = KEYMAP(
  _______,     _______,     _______,     _______,      _______,      _______,      S(LALT(KC_F1))  , S(LALT(KC_F2))  , S(LALT(KC_F3))   ,S(LALT(KC_F4)), S(LALT(KC_F5))  , _______,
  _______,     _______,     _______,     _______,      _______,      _______,      S(LALT(KC_F6))  , S(LALT(KC_F7))  , S(LALT(KC_F8))   ,S(LALT(KC_F9)), S(LALT(KC_TAB)) , _______,
  _______,     _______,     _______,     _______,      _______,      _______,      S(LALT(KC_F11)) , S(LALT(KC_F12)) , S(LALT(KC_TILDE)),S(LALT(KC_LT)), S(LALT(KC_CIRC)), _______,
  _______,     _______,     _______,     _______,      _______,      _______,      _______,     _______,     _______,     _______,      _______,      _______
), 

[_SHORTCUTS] = KEYMAP(
  LCTL(KC_F1), LCTL(KC_F2), LCTL(KC_F3) , LCTL(KC_F4) , LCTL(KC_F5) , LCTL(KC_F6)   ,  S(LALT(LCMD(KC_F1)))  , S(LALT(LCMD(KC_F2))) , S(LALT(LCMD(KC_F3)))   , S(LALT(LCMD(KC_F4))), S(LALT(LCMD(KC_F5)))  , _______, 
  LCTL(KC_F7), _SAVE      , _S_NO_FRMT  , _UNDO       , _REDO       , LCTL(KC_F8)   ,  S(LALT(LCMD(KC_F6)))  , S(LALT(LCMD(KC_F7))) , S(LALT(LCMD(KC_F8)))   , S(LALT(LCMD(KC_F9))), S(LALT(LCMD(KC_TAB))) , _______, 
  LCTL(KC_F9), LCMD(KC_W) , LCTL(KC_TAB), LCTL(KC_F11), LCTL(KC_F12), LCTL(KC_TILDE),  S(LALT(LCMD(KC_F11))) , S(LALT(LCMD(KC_F12))), S(LALT(LCMD(KC_TILDE))), S(LALT(LCMD(KC_LT))), S(LALT(LCMD(KC_CIRC))), _______, 
  _______    , _______    ,  _______    , _______     , _______     , _______       ,  S(LALT(LCMD(KC_UNDS))), S(LALT(LCMD(KC_DLR))), S(LALT(LCMD(KC_AMPR))) , xxxxx               , xxxxx                 , S(LALT(LCMD(KC_PIPE)))
),

[_NUM] = KEYMAP(
  _______,     KC_F1  ,     KC_F2  ,     KC_F3  ,      KC_F4  ,      KC_F5  ,                KC_F6   ,  KC_F7  ,     KC_F8  ,    KC_F9  ,      KC_F10 ,     KC_F12 ,
  _______,     KC_1   ,     KC_2   ,     KC_3   ,      KC_4   ,      KC_5   ,                KC_6    ,  KC_7   ,     KC_8   ,    KC_9   ,      KC_0   ,      _______,
  _______,     KC_PPLS,     KC_PMNS,     KC_PAST,      KC_PSLS,      KC_COLN,                KC_PERC ,  KC_EQL ,     KC_COMM,    KC_DOT ,      em     ,      _______,
  _______,     _______,     _______,     KC_BSPC,      KC_SPC ,      MO(_FL1_clone),         _______ ,  _______,     _______,    _______,      _______,      _______
),

[_LEFT_NUM] = KEYMAP(
  xxxxx,     xxxxx  ,     KC_7   , KC_8   , KC_9, xxxxx  ,                xxxxx,     xxxxx,     xxxxx,    xxxxx,      xxxxx,      xxxxx,
  xxxxx,     xxxxx  ,     KC_4   , KC_5   , KC_6, KC_PAST,                KC_PSLS,     xxxxx,     xxxxx,    xxxxx,      xxxxx,      xxxxx,
  xxxxx,     xxxxx  ,     KC_1   , KC_2   , KC_3, KC_PPLS,                KC_PMNS,     xxxxx,     xxxxx,    xxxxx,      xxxxx,      xxxxx,
  xxxxx,     xxxxx  ,     KC_COLN, xxxxx  , KC_0, KC_DOT ,                xxxxx,     xxxxx,     xxxxx,    xxxxx,      xxxxx,      xxxxx
),

[_FL1_clone] = KEYMAP(
  KC_AMPR, KC_UNDS    , KC_LCBR, KC_RCBR     , TD(COPY_CUT)   , _PASTE ,        S(LCMD(KC_D)), S(LCMD(KC_LEFT)) , KC_UP      , S(LCMD(KC_RGHT)), _slctWord    , LCMD(KC_SLSH),
  KC_PIPE, KC_DLR     , KC_LPRN, KC_RPRN     , TD(TD_COL_SEMC), KC_EXLM,        KC_HOME      , KC_LEFT          , KC_DOWN    , KC_RGHT         , KC_END       , xxxxx,
  KC_BSLS, TD(GT_RBRC), KC_LBRC, KC_EQL      , TD(QUO_DQUO)   , KC_QUES,        KC_COMM      , LCMD(KC_LEFT)    , LCMD(KC_UP), LCMD(KC_RGHT)   , LCMD(KC_DOWN), KC_LSFT,
  _______, _______    , _______, KC_TAB      , S(KC_TAB)      , _______,        MO(_FL2)     , LT(_NUM, KC_BSPC), KC_SPC     , _______         , _______      , _______
),


[_PROGRAMMING] = KEYMAP(
  S(LCTL(KC_F1))   ,S(LCTL(KC_F2))   , S(LCTL(KC_F3)) , S(LCTL(KC_F4)) , S(LCTL(KC_F5)) , S(LCTL(KC_F6))  ,  _______,     _______,     _______,    _______,      _______,      _______,
  S(LCTL(KC_F7))   ,S(LCTL(KC_F8))   , S(LCTL(KC_F9)) , S(LCTL(KC_TAB)), S(LCTL(KC_F11)), S(LCTL(KC_F12)) ,  _______,     _______,     _______,    _______,      _______,      _______,
  S(LCTL(KC_TILDE)),S(LCTL(KC_LT))   , LCMD(KC_L)     , _DupLine       , LCMD(KC_SLASH) , S(LCTL(KC_CIRC)),  _______,     _______,     _______,    _______,      _______,      _______,
  _______           , _______        , _______        , _______        , _______        , _______         ,  _______,     _______,     _______,    _______,      _______,      _______
),


[_LEFT] = KEYMAP(
  xxxxx  , S(LALT(LCTL(KC_F1))) , S(LALT(LCTL(KC_F2))) , S(LALT(LCTL(KC_F3))) , xxxxx             , xxxxx  ,          _______,     _______      , LCTL(KC_UP)  , _______      , _______, _______,
  xxxxx  , S(LALT(LCTL(KC_F4))) , S(LALT(LCTL(KC_F5))), S(LALT(LCTL(KC_F6))), xxxxx             , xxxxx  ,          _______,     LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_RGHT), _______, _______,
  xxxxx  , S(LALT(LCTL(KC_F7))), S(LALT(LCTL(KC_F8)))  , S(LALT(LCTL(KC_F9)))  , xxxxx             , xxxxx  ,          _______,     _______      , _______      , _______      , _______, _______,
  _______, _______             , _______               , S(LALT(LCTL(KC_TAB)))  ,S(LALT(LCTL(KC_F11))), _______,          _______,     _______      , _______      , _______      , _______, _______
),

[_LEFT2] = KEYMAP(
  _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
  _______,     _______,     KC_UP  ,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
  _______,     KC_LEFT,     KC_DOWN,     KC_RGHT,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
  _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______
),

[_MOUSE] = KEYMAP(
  xxxxx  ,     xxxxx     , xxxxx     , KC_MS_U        , xxxxx       , xxxxx  ,                xxxxx  ,     KC_BTN4,     KC_BTN3,    KC_BTN5,      xxxxx  ,      xxxxx  ,
  xxxxx  ,     xxxxx     , KC_MS_L   , KC_MS_D        , KC_MS_R     , xxxxx  ,                xxxxx  ,     KC_BTN1,     KC_BTN2,    KC_ACL0,      KC_ACL1,      KC_ACL2,
  xxxxx  ,     LCMD(KC_W), LCMD(KC_R), S(LCTL(KC_TAB)), LCTL(KC_TAB), xxxxx  ,                xxxxx  ,     KC_WH_U,     KC_WH_D,    KC_WH_L,      KC_WH_R,      xxxxx  ,
  _______,     _______   , _______   , KC_ACL2        , KC_ACL0     , KC_ACL1,                _______,     _______,     _______,    _______,      _______,      _______
),

[_LED_SOUND] = KEYMAP(
  RESET  ,     xxxxx  ,     xxxxx   ,    xxxxx   ,      xxxxx   ,      xxxxx   ,                xxxxx  ,     xxxxx  ,     xxxxx   ,    xxxxx  ,      KC_PWR  ,      KC_SLEP,
  RGB_TOG,     RGB_VAI,     RGB_VAD ,    RGB_SAI ,      RGB_SAD ,      RGB_HUI ,                RGB_HUD,     xxxxx  ,     xxxxx   ,    xxxxx  ,      xxxxx   ,      KC_WAKE,
  xxxxx  ,     RGB_M_P,     RGB_M_B ,    RGB_M_SW,      RGB_M_SN,      RGB_M_R ,                RGB_M_K,     RGB_M_X,     RGB_M_G ,    xxxxx  ,      xxxxx   ,      xxxxx  ,
  xxxxx  ,     xxxxx  ,     xxxxx   ,    xxxxx   ,      xxxxx   ,      xxxxx   ,                xxxxx  ,     KC_MUTE,     KC_VOLU ,    KC_VOLD,      xxxxx   ,      xxxxx
),




// [_BLANK] = KEYMAP(
//   _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______
// ),
};

// Loop
void matrix_scan_user(void) {
  // Empty
};


void matrix_init_user(void) { // Runs boot tasks for keyboard
    rgblight_enable();
    rgblight_sethsv(166,100,100);
    // rgblight_mode(3);
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case px:
                SEND_STRING("px"); // this is our macro!
                return false;
            case em:
                SEND_STRING("em"); // this is our macro!
                return false;
        }
    }
    return true;
};
