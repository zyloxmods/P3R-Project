#include "AddContentEntitlement.h"

FAddContentEntitlement::FAddContentEntitlement() {
    this->Enabled = false;
    this->Categories[0] = EAddContentEntitlementCategory::Blank;
    this->Categories[1] = EAddContentEntitlementCategory::Blank;
    this->Categories[2] = EAddContentEntitlementCategory::Blank;
    this->Categories[3] = EAddContentEntitlementCategory::Blank;
    this->Categories[4] = EAddContentEntitlementCategory::Blank;
    this->Items[0] = 0;
    this->Items[1] = 0;
    this->Items[2] = 0;
    this->Items[3] = 0;
    this->Items[4] = 0;
    this->SteamAppId = 0;
}

