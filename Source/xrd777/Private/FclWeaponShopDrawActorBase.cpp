#include "FclWeaponShopDrawActorBase.h"

void AFclWeaponShopDrawActorBase::SetMcaCamera(UMcaAsset* McaAsset, bool Play) {
}

AFclWeaponShopDrawActorBase::AFclWeaponShopDrawActorBase() {
    this->_CurrentMcaAsset = NULL;
    this->_CurrentCamera = NULL;
    this->_OldCamera = NULL;
}

