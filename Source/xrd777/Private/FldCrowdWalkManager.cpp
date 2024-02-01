#include "FldCrowdWalkManager.h"

void AFldCrowdWalkManager::SaveMobWalkInitTable(UDataTable* InitTable) {
}

AFldCrowdWalkManager::AFldCrowdWalkManager() {
    this->mFlag_ = 0;
    this->mMinTimer_ = 0.00f;
    this->mMaxTimer_ = 1.00f;
}

