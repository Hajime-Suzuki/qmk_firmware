#include "niu_mini.h"
#include "action_layer.h"

#define _BL 0
// #define _QWERTY 2

#define _FL1 1
#define _FL2 2

#define _NUM 3

#define _LEFT 4
#define _LEFT_NUM 5
#define _LEFT2 6
// #define _right 6


#define _PROGRAMMING 7
#define _SHORTCUTS 8
#define _MOUSE 9
#define _FL1_clone 10
#define _LED_SOUND 11


#define _COPY LCTL(KC_C)
#define _PASTE LCTL(KC_V)
#define _CUT LCTL(KC_X)

#define _UNDO LCTL(KC_Z)
#define _REDO LCTL(LSFT(KC_Z))
#define _SAVE LCTL(KC_S)
#define _S_NO_FRMT S(LCTL(KC_S))

#define _Inc1  S(LCTL(KC_UP))
#define _Dec1  S(LCTL(KC_DOWN))
#define _Inc10 LALT(LCTL(KC_UP))
#define _Dec10 LALT(LCTL(KC_DOWN))
#define _Inc01 S(LALT(KC_UP))
#define _Dec01 S(LALT(KC_DOWN))
#define _DupLine S(LCTL(KC_D))

#define _block_u LCTL(LALT(KC_Y))
#define _block_d LCTL(LALT(KC_K))
#define _block_s_u S(LCTL(LALT(KC_Y)))
#define _block_s_d S(LCTL(LALT(KC_K)))

#define _terminal LCTL(KC_GRV)
#define _t_focus LCTL(LALT(KC_F))
#define _slctWord S(LCTL(LALT(KC_W)))


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
	// [TD_IME]  = ACTION_TAP_DANCE_DOUBLE(S(LCTL(KC_F9)), S(LCTL(KC_F8))),
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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// For LINUX


[_BL] = KEYMAP(
  OSM(MOD_LALT)     , KC_Q, KC_D, KC_R, KC_W, KC_B,       KC_J, KC_F, KC_U   , KC_P  , S(LCTL(KC_F8)) , OSM(MOD_LCTL | MOD_LSFT),
  OSM(MOD_LCTL)     , KC_A, KC_S, KC_H, KC_T, KC_G,       KC_Y, KC_N, KC_E   , KC_O  , KC_I       , KC_MINS,
  LT(_LEFT, KC_ESC) , KC_Z, KC_V, KC_M, KC_C, KC_X,       KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH    , KC_LGUI,

  KC_ENT,  MO(_LEFT_NUM), LT(_LEFT2, KC_ESC),   LT(_PROGRAMMING, KC_TAB), LT(_SHORTCUTS, KC_SPC), MO(_FL1),   OSM(MOD_LSFT), LT(_NUM, KC_BSPC), LT(_MOUSE, KC_DEL), KC_APP, MO(_LED_SOUND), S(LCTL(KC_F9))
  // KC_ENT,  KC_LGUI, KC_LCTL, LT(_SHORTCUTS, KC_ESC), LT(_FL1, KC_SPC), LT(_SHORTCUTS, KC_TAB),           OSM(MOD_LSFT), LT(_MOUSE, KC_BSPC), LT(_NUM, KC_DEL),KC_DOWN, MO(_LED_SOUND), KC_BSPC
),

// Original
// [_BL] = KEYMAP(
//   KC_LALT          , KC_Q, KC_D, KC_R, KC_W, KC_B,       KC_J, KC_F, KC_U   , KC_P  , S(LCTL(KC_F8)) , OSM(MOD_LCTL | MOD_LSFT),
//   OSM(MOD_LCTL)    , KC_A, KC_S, KC_H, KC_T, KC_G,       KC_Y, KC_N, KC_E   , KC_O  , KC_I       , KC_MINS,
//   LT(_LEFT, KC_ESC), KC_Z, KC_V, KC_M, KC_C, KC_X,       KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH    , KC_SCLN ,
//
//   KC_ENT,  MO(_LEFT_NUM), MO(_LEFT2), LT(_PROGRAMMING, KC_TAB), LT(_SHORTCUTS, KC_SPC), MO(_FL1),        OSM(MOD_LSFT), LT(_NUM, KC_BSPC), LT(_MOUSE, KC_DEL), KC_LGUI, MO(_LED_SOUND), S(LCTL(KC_F9))
//   // KC_ENT,  KC_LGUI, KC_LCTL, LT(_SHORTCUTS, KC_ESC), LT(_FL1, KC_SPC), LT(_SHORTCUTS, KC_TAB),           OSM(MOD_LSFT), LT(_MOUSE, KC_BSPC), LT(_NUM, KC_DEL),KC_DOWN, MO(_LED_SOUND), KC_BSPC
// ),

//Mac
[_FL1] = KEYMAP(
  KC_AMPR, KC_UNDS    , KC_LCBR, KC_RCBR     , TD(COPY_CUT)   , _PASTE ,        S(LCTL(KC_D)), S(LALT(KC_LEFT)) , KC_UP      , S(LALT(KC_RGHT)), _slctWord    , LCTL(KC_SLSH),
  KC_PIPE, KC_DLR     , KC_LPRN, KC_RPRN     , TD(TD_COL_SEMC), KC_EXLM,        LCTL(KC_LEFT), KC_LEFT          , KC_DOWN    , KC_RGHT         , LCTL(KC_RGHT), xxxxx,
  KC_BSLASH, TD(GT_RBRC), KC_LBRC, KC_EQL      , TD(QUO_DQUO)   , KC_QUES,        KC_COMM      , LALT(KC_LEFT)    , LCTL(KC_UP), LALT(KC_RGHT)   , LCTL(KC_DOWN), KC_LSFT,
  _______, _______    , _______, KC_TAB      , S(KC_TAB)      , _______,        MO(_FL2)     , LT(_NUM, KC_BSPC), KC_SPC     , _______         , _______      , _______
),

// [_FL1] = KEYMAP(
//   KC_AMPR, KC_UNDS    , KC_LCBR, KC_RCBR     , TD(COPY_CUT)   , _PASTE ,        S(LCTL(KC_D)), S(LCTL(KC_LEFT)) , KC_UP      , S(LCTL(KC_RGHT)), _slctWord    , LCTL(KC_SLSH),
//   KC_PIPE, KC_DLR     , KC_LPRN, KC_RPRN     , TD(TD_COL_SEMC), KC_EXLM,        KC_HOME      , KC_LEFT          , KC_DOWN    , KC_RGHT         , KC_END       , xxxxx,
//   KC_BSLS, TD(GT_RBRC), KC_LBRC, KC_EQL      , TD(QUO_DQUO)   , KC_QUES,        KC_COMM      , LCTL(KC_LEFT)    , LCTL(KC_UP), LCTL(KC_RGHT)   , LCTL(KC_DOWN), KC_LSFT,
//   _______, _______    , _______, KC_TAB      , S(KC_TAB)      , _______,        MO(_FL2)     , LT(_NUM, KC_BSPC), KC_SPC     , _______         , _______      , _______
// ),

// [_FL1] = KEYMAP(
//   KC_AMPR, KC_SCLN   , TD(LCBR_AT)  , TD(RCBR_HASH), TD(COPY_CUT), _PASTE     ,        xxxxx   , S(LCTL(KC_LEFT)) , KC_UP      , S(LCTL(KC_RGHT)), KC_LCTL      , KC_LALT,
//   KC_PIPE, TD(DOL_LT), TD(LPRN_TILD), TD(RPRN_CIRC), TD(CLN_UNDR), KC_EXLM    ,        KC_HOME , KC_LEFT          , KC_DOWN    , KC_RGHT         , KC_END       , _______,
//   KC_BSLS, KC_GT     , KC_LBRC      , TD(EQL_RBRC) , TD(QUO_DQUO), TD(QES_GRV),        KC_COMM , LCTL(KC_LEFT)    , LCTL(KC_UP), LCTL(KC_RGHT)   , LCTL(KC_DOWN), KC_LSFT,
//   _______, _______   , _______      , KC_TAB       , S(KC_TAB)   , _______    ,        MO(_FL2), LT(_NUM, KC_BSPC), KC_SPC     , _______         , _______      , _______
// ),

//MAC=
[_FL2] = KEYMAP(
  _______,     _______ ,   _______,   _______,   _______,    _______,         xxxxx           , xxxxx     , S(KC_UP)  , xxxxx           , xxxxx     , _______,
  _______,     KC_TILDE,   KC_GRV ,   KC_AT  ,   KC_SCLN,    S(KC_3),         S(LCTL(KC_LEFT)), S(KC_LEFT), S(KC_DOWN), S(KC_RGHT), S(LCTL(KC_RGHT)) , _______,
  _______,     KC_LT   ,   KC_CIRC,   KC_RBRC,   KC_DQT ,    _______,         xxxxx           , _block_s_u, _block_u  , _block_s_d      , _block_d  , _______,
  _______,     _______ ,   _______,   _______,   _______,    _______,         _______         , _______   , _______   , _______         , _______  , _______
),

// [_FL2] = KEYMAP(
//   _______,     _______ ,   _______,   _______,   _______,    _______,         xxxxx           , xxxxx     , S(KC_UP)  , xxxxx           , xxxxx     , _______,
//   _______,     KC_TILDE,   KC_GRV ,   KC_AT  ,   KC_SCLN,    KC_HASH,         S(LCTL(KC_LEFT)), S(KC_LEFT), S(KC_DOWN), S(KC_RGHT), S(LCTL(KC_RGHT)) , _______,
//   _______,     KC_LT   ,   KC_CIRC,   KC_RBRC,   KC_DQT ,    _______,         xxxxx           , _block_s_u, _block_u  , _block_s_d      , _block_d  , _______,
//   _______,     _______ ,   _______,   _______,   _______,    _______,         _______         , _______   , _______   , _______         , _______  , _______
// ),




// [_FL1] = KEYMAP(
//   _______, TD(TD_BCSL_TILD), KC_LCBR        , KC_RCBR         , _COPY           , _PASTE  ,         _CUT   , S(LCTL(KC_LEFT)) , KC_UP      , S(LCTL(KC_RGHT)), _______      , _______,
//   _______, TD(TD_DOL_UNDR) , TD(TD_L_BRCT)  , TD(TD_R_BRCT)   , TD(TD_COL_SEMC) , KC_EXLM,          KC_HOME, KC_LEFT          , KC_DOWN    , KC_RGHT         , KC_END       , _______,
//   _______, TD(TD_AMP_PIP)  , TD(TD_HS_AT_CI), TD(TD_EDL_GT_LT), TD(TD_QUOTATION), KC_QUES,          KC_COMM, LCTL(KC_LEFT)    , LCTL(KC_UP), LCTL(KC_RGHT)   , LCTL(KC_DOWN), _______,
//   _______, _______         , _______        , KC_TAB          , S(KC_TAB)       , _______,          KC_LSFT, LT(_NUM, KC_BSPC), KC_SPC     , _______         , _______      , _______
// ),



[_NUM] = KEYMAP(
  _______,     KC_F1  ,     KC_F2  ,     KC_F3  ,      KC_F4  ,      KC_F5  ,                KC_F6   ,  KC_F7  ,     KC_F8  ,    KC_F9  ,      KC_F10 ,     KC_F12 ,
  _______,     KC_1   ,     KC_2   ,     KC_3   ,      KC_4   ,      KC_5   ,                KC_6    ,  KC_7   ,     KC_8   ,    KC_9   ,      KC_0   ,      _______,
  _______,     KC_PPLS,     KC_PMNS,     KC_PAST,      KC_PSLS,      KC_DOT ,                KC_PERC ,  KC_EQL ,     KC_COLN,    px     ,      em     ,      _______,
  _______,     _______,     _______,     KC_BSPC,      KC_SPC ,      MO(_FL1_clone),         _______ ,  _______,     _______,    _______,      _______,      _______
),

[_LEFT_NUM] = KEYMAP(
  xxxxx,     xxxxx  ,     KC_7   , KC_8   , KC_9, xxxxx  ,                xxxxx,     xxxxx,     xxxxx,    xxxxx,      xxxxx,      xxxxx,
  xxxxx,     xxxxx  ,     KC_4   , KC_5   , KC_6, KC_PAST,                KC_PSLS,     xxxxx,     xxxxx,    xxxxx,      xxxxx,      xxxxx,
  xxxxx,     xxxxx  ,     KC_1   , KC_2   , KC_3, KC_PPLS,                KC_PMNS,     xxxxx,     xxxxx,    xxxxx,      xxxxx,      xxxxx,
  xxxxx,     xxxxx  ,     KC_COLN, xxxxx  , KC_0, KC_DOT ,                xxxxx,     xxxxx,     xxxxx,    xxxxx,      xxxxx,      xxxxx
),

[_FL1_clone] = KEYMAP(
  KC_AMPR, KC_UNDS    , KC_LCBR, KC_RCBR     , TD(COPY_CUT)   , _PASTE ,        S(LCTL(KC_D)), S(LCTL(KC_LEFT)) , KC_UP      , S(LCTL(KC_RGHT)), _slctWord    , LCTL(KC_SLSH),
  KC_PIPE, KC_DLR     , KC_LPRN, KC_RPRN     , TD(TD_COL_SEMC), KC_EXLM,        KC_HOME      , KC_LEFT          , KC_DOWN    , KC_RGHT         , KC_END       , xxxxx,
  KC_BSLS, TD(GT_RBRC), KC_LBRC, KC_EQL      , TD(QUO_DQUO)   , KC_QUES,        KC_COMM      , LCTL(KC_LEFT)    , LCTL(KC_UP), LCTL(KC_RGHT)   , LCTL(KC_DOWN), KC_LSFT,
  _______, _______    , _______, KC_TAB      , S(KC_TAB)      , _______,        MO(_FL2)     , LT(_NUM, KC_BSPC), KC_SPC     , _______         , _______      , _______
),


[_PROGRAMMING] = KEYMAP(
  S(LGUI(KC_F1))       , S(LGUI(KC_F2))  , S(LGUI(KC_F3)) , S(LGUI(KC_F4)),S(LGUI(KC_F5)) ,S(LGUI(KC_F6)),        _______,     _______      , KC_UP  , _______      , _______,  _terminal,
  S(LALT(LCTL(KC_F11))), S(LCTL(KC_F11)) , S(LCTL(KC_F10)), _Dec1         , _Inc1         ,S(LGUI(KC_F7)),        KC_HOME,     KC_LEFT      , KC_DOWN, KC_RGHT      , KC_END ,  _t_focus,
  S(LALT(LCTL(KC_F12))), LCTL(LALT(KC_C)), LCTL(KC_L)     , _DupLine      , LCTL(KC_SLASH),S(LGUI(KC_F8)) ,        _______,     LCTL(KC_LEFT), _______, LCTL(KC_RGHT), _______,  _______,
  _______              , _______         , _______        , _______       , _______       , _______,        _______,     S(LCTL(KC_J)), _______, _______      , _______,  _______
),


[_LEFT] = KEYMAP(
  xxxxx  ,     xxxxx          , xxxxx        , xxxxx        ,      xxxxx  ,      xxxxx  ,                _______,     _______      , LGUI(KC_UP)  , _______      , _______, _______,
  xxxxx  ,     xxxxx          , LGUI(KC_LEFT), LGUI(KC_RGHT),      xxxxx  ,      xxxxx  ,                _______,     LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RGHT), _______, _______,
  xxxxx  ,     S(LSFT(KC_F12)), KC_LCTL      , KC_TAB       ,      xxxxx  ,      xxxxx  ,                _______,     _______      , _______      , _______      , _______, _______,
  _______,     _______        , _______      , _______      ,      _______,      _______,                _______,     _______      , _______      , _______      , _______, _______
),

[_LEFT2] = KEYMAP(
  _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
  _______,     _______,     KC_UP  ,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
  _______,     KC_LEFT,     KC_DOWN,     KC_RGHT,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
  _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______
),

// [_NUM] = KEYMAP(
//   _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     _______,     _______,     _______,      _______,      _______,                _______,     _______,     _______,    _______,      _______,      _______
// ),

[_MOUSE] = KEYMAP(
  xxxxx  ,     xxxxx     , xxxxx     , KC_MS_U        , xxxxx       , xxxxx  ,                xxxxx  ,     KC_BTN4,     KC_BTN3,    KC_BTN5,      xxxxx  ,      xxxxx  ,
  xxxxx  ,     xxxxx     , KC_MS_L   , KC_MS_D        , KC_MS_R     , xxxxx  ,                xxxxx  ,     KC_BTN1,     KC_BTN2,    KC_ACL0,      KC_ACL1,      KC_ACL2,
  xxxxx  ,     LCTL(KC_W), LCTL(KC_R), S(LGUI(KC_TAB)), LGUI(KC_TAB), xxxxx  ,                xxxxx  ,     KC_WH_U,     KC_WH_D,    KC_WH_L,      KC_WH_R,      xxxxx  ,
  _______,     _______   , _______   , KC_ACL2        , KC_ACL0     , KC_ACL1,                _______,     _______,     _______,    _______,      _______,      _______
),

//Mac
[_SHORTCUTS] = KEYMAP(
  LGUI(KC_F1), LGUI(KC_F2), LGUI(KC_F3), LGUI(KC_F4), LGUI(KC_F5) , xxxxx  ,                _______,     _______,     _______,    _______,      _______,      _______,
  LGUI(KC_F6), _SAVE      , _S_NO_FRMT , _UNDO      , _REDO       , xxxxx  ,                _______,     _______,     _______,    _______,      _______,      _______,
  LGUI(KC_F7), LCTL(KC_W) , LGUI(KC_F8), LGUI(KC_F9), LGUI(KC_F10), xxxxx  ,                _______,     _______,     _______,    _______,      _______,      _______,
  _______    , _______    ,  _______   , _______    , _______     , _______,                _______,     _______,     _______,    _______,      _______,      _______
),
// [_SHORTCUTS] = KEYMAP(
//   _______,     _______   ,  _______,     _______        , _______     , _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     _SAVE     ,  _______,     _UNDO          , _REDO       , _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     LCTL(KC_W),  _______,     S(LCTL(KC_TAB)), LCTL(KC_TAB), _______,                _______,     _______,     _______,    _______,      _______,      _______,
//   _______,     _______   ,  _______,     _______        , _______     , _______,                _______,     _______,     _______,    _______,      _______,      _______
// ),


[_LED_SOUND] = KEYMAP(
  RESET  ,     xxxxx  ,     xxxxx   ,    xxxxx   ,      xxxxx   ,      xxxxx   ,                xxxxx  ,     xxxxx  ,     xxxxx   ,    xxxxx  ,      KC_PWR  ,      KC_SLEP,
  RGB_TOG,     RGB_VAI,     RGB_VAD ,    RGB_SAI ,      RGB_SAD ,      RGB_HUI ,                RGB_HUD,     xxxxx  ,     xxxxx   ,    xxxxx  ,      xxxxx   ,      KC_WAKE,
  xxxxx  ,     RGB_M_P,     RGB_M_B ,    RGB_M_SW,      RGB_M_SN,      RGB_M_R ,                RGB_M_K,     RGB_M_X,     RGB_M_G ,    xxxxx  ,      xxxxx   ,      xxxxx  ,
  xxxxx  ,     xxxxx  ,     xxxxx   ,    xxxxx   ,      xxxxx   ,      xxxxx   ,                xxxxx  ,     KC_MUTE,     KC_VOLU ,    KC_VOLD,      xxxxx   ,      xxxxx
),




// [_NUM] = KEYMAP(
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
