#include "CldDateMessage.h"

FCldDateMessage::FCldDateMessage() {
    this->Key = 0;
    this->TotalDay = 0;
    this->Month = 0;
    this->Day = 0;
    this->Period = ECldDateMsgPeriod::Single;
    this->MsgLabel = 0;
    this->VisibleFlag = 0;
}

