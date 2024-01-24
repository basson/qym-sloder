#pragma once

#include <stdlib.h>
#include "string.h"

#include "fonts/HellenicaRus16px.h"
#include "fonts/HellenicaRus12px.h"
#include "fonts/HellenicaRus8px.h"

#include "icons/IconHeat12px.h"

#include "emem.hpp"

#include "types.hpp"

#include "uip/include/text.hpp"
#include "uip/include/bitmap.hpp"

#include "uie/include/tab_page.hpp"

#include "control.hpp"

namespace gui
{
    class ScreenHakkoT12
    {
    private:
        char _strCurrent[10] = "120°";
        char _strSet[10] = "set:280°";

        qymos::gui::Text _textCurrent;
        qymos::gui::Text _textSet;
        qymos::gui::Bitmap _iconHeat;

        qymos::gui::TabPage _tabPage;

        Emem *_emem = Emem::GetInstance();

        bool _isChangeSetTemp = false;
        bool _isInvert = false;
        uint32_t _millis = 0;

    public:
        ScreenHakkoT12();

        qymos::gui::TabPage *GetPage();

        void Process();

        void OnEncoderDirection(bool direction);
        void OnButtonClick();
        void OnButtonLongClick();
        void OnEncoderValue(uint32_t value);
    };

} // namespace gui
