
#pragma once
#include "../lib/qymos-stm32-gui-monochrome/types.hpp"



static uint8_t image_data_IconFlow12px[20] = {
    0x03, 0x80, 
    0x74, 0x40, 
    0x88, 0x40, 
    0xcb, 0x80, 
    0x3c, 0x00, 
    0x0f, 0x00, 
    0x74, 0xc0, 
    0x84, 0x40, 
    0x8b, 0x80, 
    0x70, 0x00
};
const qymos::gui::tImage IconFlow12px = { image_data_IconFlow12px, 10, 10,
    8, 20 };
