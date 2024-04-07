
#pragma once
#include "gui/types.hpp"



static uint8_t image_data_Error24x24px[72] = {
    0x03, 0xff, 0xc0, 0x07, 0xff, 0xe0, 0x0f, 0x00, 0xf0, 0x1e, 0x00, 0x78, 0x3c, 0x00, 0x3c, 0x78, 0x00, 0x1e, 0xf1, 0x81, 0x8f, 0xe3, 0xc3, 0xc7, 0xe3, 0xe7, 0xc7, 0xe1, 0xff, 0x87, 0xe0, 0xff, 0x07, 0xe0, 0x7e, 0x07, 0xe0, 0x7e, 0x07, 0xe0, 0xff, 0x07, 0xe1, 0xff, 0x87, 0xe3, 0xe7, 0xc7, 0xe3, 0xc3, 0xc7, 0xf1, 0x81, 0x8f, 0x78, 0x00, 0x1e, 0x3c, 0x00, 0x3c, 0x1e, 0x00, 0x78, 0x0f, 0xff, 0xf0, 0x07, 0xff, 0xe0, 0x03, 0xff, 0xc0
};
const qymos::gui::tImage Error24x24px = { image_data_Error24x24px, 24, 24, 8, 72 };
