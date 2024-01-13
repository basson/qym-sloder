#pragma once

#include "fonts/HellenicaRus8px.h"

#include "icons/IconD8928px.h"
#include "icons/IconBack8px.h"
#include "icons/IconCalibration8px.h"
#include "icons/IconSens8px.h"
#include "icons/IconSleep8px.h"
#include "icons/IconTemp8px.h"
#include "icons/IconNtc8px.h"
#include "icons/IconPid8px.h"

#include "types.hpp"
#include "iscreen.hpp"
#include "hierarchy.hpp"

#include "screens.hpp"

#include "pid_autotune.hpp"

#include "uip/include/text.hpp"

#include "uie/include/checkbox.hpp"

#include "uie/include/input_time.hpp"
#include "uie/include/input_int.hpp"
#include "uie/include/input_select.hpp"

#include "uie/include/window.hpp"
#include "uie/include/layout.hpp"
#include "uie/include/list.hpp"

namespace gui
{
    class ScreenConfigSolderHand : public qymos::gui::IScreen
    {
    private:
        char *_titleStr = "Solder Hand";

        char *_strBack = "Назад";
        char *_strTempCalibrate = "Калибровка темп.";
        char *_strTempMin = "Мин. Температура";
        char *_strTempMax = "Макс. Температура";
        char *_strSensorOn = "Сенсор Есть";
        char *_strSensorOff = "Сенсора Нет";
        char *_strTimeSleep = "Время погр в сон";
        char *_strTempSleep = "Темп во время сна";
        char *_strPidTune = "Калибровка PID";
        char *_strNtcResistens = "NTC термистр";

        char *_strSelectNtcNone = "Нет";
        char *_strSelectNtc10K = "10К";
        char *_strSelectNtc100k = "100K";

        qymos::gui::Text _titleText;
        qymos::gui::Text _textBack;
        qymos::gui::Text _textTempCalibrate;
        qymos::gui::Text _textTempMin;
        qymos::gui::Text _textTempMax;
        qymos::gui::Text _textSensor;
        qymos::gui::Text _textTimeSleep;
        qymos::gui::Text _textTempSleep;
        qymos::gui::Text _textPidTune;
        qymos::gui::Text _textNtsResistens;

        qymos::gui::Text _textSelectNtcNone;
        qymos::gui::Text _textSelectNtc10k;
        qymos::gui::Text _textSelectNtc100k;

        qymos::gui::Bitmap _iconSolderHand;
        qymos::gui::Bitmap _iconCalibrate;
        qymos::gui::Bitmap _iconBack;
        qymos::gui::Bitmap _iconSens;
        qymos::gui::Bitmap _iconSleep;
        qymos::gui::Bitmap _iconTemp;
        qymos::gui::Bitmap _iconNtc;
        qymos::gui::Bitmap _iconPid;

        qymos::gui::CheckBox _checkBoxSelected;
        qymos::gui::CheckBox _checkBoxNotSelected;

        qymos::gui::InputTime _inputTime;
        qymos::gui::InputInt _inputInt;
        qymos::gui::InputSelect _inputSelectNtc;

        qymos::gui::Window _window;

        qymos::gui::Layout _layout;
        qymos::gui::List _list;

        qymos::gui::Hierarchy *_hierarhy = qymos::gui::Hierarchy::GetInstance();

        bool _isInputShow[6]{
            false,
        };

        bool _sensorState = false;

    public:
        ScreenConfigSolderHand();
        qymos::gui::IElement *GetPage();
        void Process();
        void OnEncoderDirection(bool direction);
        void OnEncoderValue(uint32_t value);
        void OnButtonClick(uint16_t ButtonPin = 0);
        void OnButtonLongClick(uint16_t ButtonPin = 0);
    };

} // namespace gui