#include "SaveSlotItem.h"

FSaveSlotItem::FSaveSlotItem() {
    this->SlotNo = 0;
    this->Month = 0;
    this->Day = 0;
    this->PLV = 0;
    this->Week = 0;
    this->bHoliday = false;
    this->PTimeHour = 0;
    this->PTimeMin = 0;
    this->Diff = 0;
    this->MoonAge = 0;
    this->TimeZone = 0;
    this->bIsGoodEnd = false;
    this->bIsBadEnd = false;
    this->bIsLoaded = false;
    this->bHasData = false;
    this->bUseDefaultHeroName = false;
}

