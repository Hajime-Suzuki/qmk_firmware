void quo_doublequo_backtic_fin (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_QUOT);
      break;
    case 2:
      register_code(KC_LSHIFT);
      register_code(KC_QUOT);
      break;
    case 3:
        register_code(KC_GRV);
      break;
  }
}
void quo_doublequo_backtic_res (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
       unregister_code(KC_QUOT);
      break;
    case 2:
       unregister_code(KC_QUOT);
       unregister_code(KC_LSFT);
      break;
    case 3:
       unregister_code(KC_GRV);
      break;
  }
}









void hash_at_crirc_fin (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
       register_code(KC_LSFT);
       register_code(KC_3);

      break;
    case 2:
        register_code(KC_LSFT);
        register_code(KC_2);
      break;
    case 3:
        register_code(KC_LSFT);
        register_code(KC_6);
      break;
  }
}
void hash_at_crirc_res (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      unregister_code(KC_3);
      unregister_code(KC_LSFT);

      break;
    case 2:

       unregister_code(KC_2);
       unregister_code(KC_LSFT);

      break;
    case 3:

       unregister_code(KC_6);
       unregister_code(KC_LSFT);

      break;
  }
}





// void ESC_IME_CLEAR_fin (qk_tap_dance_state_t *state, void *user_data) {
//   switch (state->count) {
//     case 1:
//       register_code(KC_ESC);
//       break;
//     case 2:
//       register_code(KC_LCTL);
//       register_code(KC_LSFT);
//       register_code(KC_F9);
//       break;
//     case 5:
//
//       break;
//   }
// }
//
// void ESC_IME_CLEAR_res (qk_tap_dance_state_t *state, void *user_data) {
//   switch (state->count) {
//     case 1:
//       unregister_code(KC_ESC);
//       break;
//     case 2:
//        // unregister_code(KC_QUOT);
//        // unregister_code(KC_LSFT);
//        unregister_code(KC_F9);
//        unregister_code(KC_LSFT);
//        unregister_code(KC_LCTL);
//        // clear_keyboard();
//       break;
//     case 3:
//        // unregister_code(KC_GRV);
//        layer_on(_BL);
//        clear_keyboard();
//        // clear_keyboard();
//       break;
//   }
// }






void doller_underscore_tilde_fin (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
       register_code(KC_LSFT);
       register_code(KC_4);

      break;
    case 2:
        register_code(KC_LSFT);
        register_code(KC_MINS);
      break;
    case 3:
        register_code(KC_LSFT);
        register_code(KC_GRV);
      break;
  }
}
void doller_underscore_tilde_res (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
       // unregister_code(KC_QUOT);
       unregister_code(KC_4);
       unregister_code(KC_LSFT);
       // clear_keyboard();
      break;
    case 2:
       // unregister_code(KC_QUOT);
       // unregister_code(KC_LSFT);
       unregister_code(KC_MINS);
       unregister_code(KC_LSFT);
       // clear_keyboard();
      break;
    case 3:
       // unregister_code(KC_GRV);
       unregister_code(KC_GRV);
       unregister_code(KC_LSFT);
       // clear_keyboard();
      break;
  }
}












void amp_pipe_backslash_fin (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
       register_code(KC_LSFT);
       register_code(KC_7);

      break;
    case 2:
        register_code(KC_LSFT);
        register_code(KC_BSLS);
      break;
    case 3:
        register_code(KC_BSLS);
      break;
  }
}
void amp_pipe_backslash_res (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
       unregister_code(KC_7);
       unregister_code(KC_LSFT);
      break;
    case 2:

       unregister_code(KC_BSLS);
       unregister_code(KC_LSFT);

      break;
    case 3:
       unregister_code(KC_BSLS);
      break;
  }
}



void eql_grater_less_fin (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
        register_code(KC_EQUAL);

        break;
    case 2:
        register_code(KC_LSFT);
        register_code(KC_DOT);
        break;
    case 3:
        register_code(KC_LSFT);
        register_code(KC_COMMA);
        break;
  }
}
void eql_grater_less_res (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
       unregister_code(KC_EQUAL);
      break;
    case 2:

       unregister_code(KC_DOT);
       unregister_code(KC_LSFT);

      break;
    case 3:

       unregister_code(KC_COMMA);
       unregister_code(KC_LSFT);
      break;
  }
}
