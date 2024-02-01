#include "BtlEncountWipeCore.h"

void ABtlEncountWipeCore::RequestEndWipe(UBtlCoreComponent* NewCore) {
}

void ABtlEncountWipeCore::LoadResources() {
}

EBtlEncountWipeType ABtlEncountWipeCore::GetWipeType() {
    return EBtlEncountWipeType::BTL_ENCWIPE_NONE;
}

void ABtlEncountWipeCore::ForceFadeIn() {
}

void ABtlEncountWipeCore::ClearResources() {
}

bool ABtlEncountWipeCore::CheckFadeInEnd() {
    return false;
}

ABtlEncountWipeCore* ABtlEncountWipeCore::BtlEncountWipeGetInstance() {
    return NULL;
}

void ABtlEncountWipeCore::BtlEncountWipeDeleteInstance() {
}

bool ABtlEncountWipeCore::BtlEncountWipeCheckWraped() {
    return false;
}

ABtlEncountWipeCore::ABtlEncountWipeCore() {
    this->requestWipeOut = false;
    this->isWraped = false;
    this->isSequenceEnable = false;
    this->wipeType = EBtlEncountWipeType::BTL_ENCWIPE_NONE;
    this->Core = NULL;
}

