#include "quantum.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}
bool oled_task_kb(void) {
    if (!oled_task_user()) {
        return false;
    }
    oled_write_ln_P(PSTR("babababababababababababababababababarnacle"), false);
    return false;
}
#endif
