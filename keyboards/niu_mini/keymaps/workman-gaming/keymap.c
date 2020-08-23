#include "niu_mini.h"
#include "action_layer.h"
#include "../../../shared-keymap/workman-gaming.c"

void matrix_init_user(void) { // Runs boot tasks for keyboard
    rgblight_enable();
    rgblight_sethsv(166,100,100);
    // rgblight_mode(3);
};

    