#include "EvtAdxSoundManagePayload.h"

FEvtAdxSoundManagePayload::FEvtAdxSoundManagePayload() {
    this->EvtAdxSoundManageOperationType = EEvtSoundManageOperationType::DayTimeFieldEnvSE;
    this->Month = 0;
    this->Day = 0;
    this->TimeZone = ECldTimeZone::None;
    this->ControlId = 0;
    this->ControlValue = 0.00f;
    this->ControlFrame = 0;
}

