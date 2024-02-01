#include "AtlEvtPreData.h"

FAtlEvtPreData::FAtlEvtPreData() {
    this->EventMajorID = 0;
    this->EventMinorID = 0;
    this->EventCategoryTypeID = 0;
    this->bDisableAutoLoadFirstLightingScenarioLevel = false;
    this->bForceDisableUseCurrentTimeZone = false;
    this->ForcedCldTimeZoneValue = 0;
    this->ForceMonth = 0;
    this->ForceDay = 0;
}

