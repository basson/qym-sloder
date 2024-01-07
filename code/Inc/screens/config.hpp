#pragma once

#include "fonts/HellenicaRus16px.h"
#include "fonts/HellenicaRus12px.h"
#include "fonts/HellenicaRus8px.h"

#include "icons/IconConfig8px.h"
#include "icons/IconBack8px.h"
#include "icons/IconMonitor8px.h"
#include "icons/IconT128px.h"
#include "icons/IconD8928px.h"
#include "icons/IconFan8px.h"

#include "types.hpp"
#include "iscreen.hpp"
#include "hierarchy.hpp"

#include "screens.hpp"

#include "uip/include/text.hpp"

#include "uie/include/window.hpp"
#include "uie/include/layout.hpp"
#include "uie/include/list.hpp"

namespace gui
{
    class ScreenConfig : public qymos::gui::IScreen
    {
    private:
        char *_titleStr = "Настройки";
        char *_strBack = "Назад";
        char *_strDefault = "Основные";
        char *_strHacckoT12 = "Hakko t12";
        char *_strSolderHand = "Solder hand";
        char *_strHiarGun = "Hotair gun";
        

        qymos::gui::Text _titleText;
        qymos::gui::Text _textBack;
        qymos::gui::Text _textDefault;
        qymos::gui::Text _textHakkoT12;
        qymos::gui::Text _textSolderHand;
        qymos::gui::Text _textHairGun;

        qymos::gui::Bitmap _iconConfig;
        qymos::gui::Bitmap _iconBack;
        qymos::gui::Bitmap _iconDefault;
        qymos::gui::Bitmap _iconHakkoT12;
        qymos::gui::Bitmap _iconHiarGun;
        qymos::gui::Bitmap _iconSolderHand;

        qymos::gui::Window _window;

        qymos::gui::Layout _layout;
        qymos::gui::List _list;

        qymos::gui::Hierarchy *_hierarchy = qymos::gui::Hierarchy::GetInstance();

        int8_t _activeItem = 0;

    public:
        ScreenConfig();
        qymos::gui::IElement *GetPage();
        void Process();
        void OnEncoderDirection(bool direction);
        void OnEncoderValue(uint32_t value);
        void OnButtonClick(uint16_t ButtonPin = 0);
        void OnButtonLongClick(uint16_t ButtonPin = 0);
    };

} // namespace gui
