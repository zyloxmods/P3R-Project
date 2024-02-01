#include "FldDbgMaker.h"

bool AFldDbgMaker::Load() {
    return false;
}

APawn* AFldDbgMaker::GetPlayerActor() const {
    return NULL;
}

TArray<APawn*> AFldDbgMaker::GetPartnerActors() const {
    return TArray<APawn*>();
}

void AFldDbgMaker::ForceWaitPose(const bool Enable) {
}

AFldDbgMaker::AFldDbgMaker() {
    this->PlayerClass = NULL;
    this->PlayerPoints = NULL;
    this->PlayerCharaId = 1;
    this->PartnerClass = NULL;
    this->KoroPartnerClass = NULL;
    this->CostumeID = 2;
    this->AnimPackID = EAnimPackID::Common;
    this->bWeapon = true;
    this->WeaponId = -1;
    this->bBag = false;
    this->BagId = -1;
    this->FootstepsData = NULL;
    this->IsLoad = false;
    this->ReLoadCostume = false;
}

