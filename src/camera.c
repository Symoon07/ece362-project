#include "camera.h"

void init_camera() {
    set_camera_params(QVGA, RGB565);
}

void set_camera_params(int mode, int format) {
    if (mode != DONTCHANGE) set_size_mode(mode);
    if (format != DONTCHANGE) set_output_format(format);
}