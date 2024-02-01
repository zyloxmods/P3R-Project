#include "CldDateTableItem.h"

FCldDateTableItem::FCldDateTableItem() {
    this->Month = 0;
    this->Day = 0;
    this->MoonAge = 0;
    this->IsHoliday = false;
    this->IsPublicHoliday = false;
    this->NumColorType = ECldDateColor::Normal;
}

