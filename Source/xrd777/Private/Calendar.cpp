#include "Calendar.h"

UCalendar::UCalendar() {
    this->mEventActor_ = NULL;
    this->mChangeFlag_ = 0;
    this->mChangeType_ = ECldSceneChangeType::None;
    this->mChangeSetted_ = ECldSceneChangeType::None;
    this->mChangePrevDay_ = 0;
    this->mChangePrevTimeZone_ = ECldTimeZone::None;
    this->mChangeNextDay_ = 0;
    this->mChangeNextTimeZone_ = ECldTimeZone::None;
    this->cursorDay = 0;
}

