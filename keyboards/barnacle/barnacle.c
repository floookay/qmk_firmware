#include "quantum.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}
static void render_layer(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_ln_P(PSTR("base layer"), false);
            break;
        case 1:
            oled_write_ln_P(PSTR("navigation layer"), false);
            break;
        case 2:
            oled_write_ln_P(PSTR("function layer"), false);
            break;
        case 3:
            oled_write_ln_P(PSTR("numpad layer"), false);
            break;
        case 4:
            oled_write_ln_P(PSTR("config layer"), false);
            break;
        default:
            break;
    }
}
static void render_wpm(void) {
    int wpm = get_current_wpm();
    float rep = wpm / 5;

    while(rep > 0) {
        oled_write_P(PSTR("ba"), false);
        rep--;
    }
    oled_write_ln_P(PSTR("barnacle"), false);
}
bool oled_task_kb(void) {
    if (is_keyboard_master()) {
        return false;
    }
    if (!oled_task_user()) {
        return false;
    }

    render_layer();
    oled_write_ln_P("", false);
    render_wpm();
    return false;
}
#endif
