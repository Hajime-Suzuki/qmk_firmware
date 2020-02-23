#include "nyquist.h"
// #include QMK_KEYBOARD_H
#include "action_layer.h"

#include "../../../../shared-keymap/workman-keymap.c"

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
