#include "BtlFadeManager.h"




bool ABtlFadeManager::BtlFadeSync() {
    return false;
}

void ABtlFadeManager::BtlFadeOut(EBtlFadeType NewType, int32 Frame, bool IsEnemy, bool isAIAction) {
}

ABtlFadeManager* ABtlFadeManager::BtlFadeManagerGetInstance() {
    return NULL;
}

void ABtlFadeManager::BtlFadeIn(EBtlFadeType NewType, int32 Frame, bool IsEnemy, bool isAIAction) {
}

bool ABtlFadeManager::BtlFadeCheckScreenWrap() {
    return false;
}

void ABtlFadeManager::BtlCrossFadeOut() {
}

void ABtlFadeManager::BtlCrossFadeIn(int32 Frame) {
}

ABtlFadeManager::ABtlFadeManager() {
    this->isFadeing = false;
    this->isScreenWrap = false;
    this->isEnemyFlag = false;
    this->isAIActionFlag = false;
    this->Type = EBtlFadeType::BTL_FADE_TYPE_NULL;
    this->ReceaveType = EBtlFadeType::BTL_FADE_TYPE_NULL;
    this->bCrossFade = false;
    this->CrossfadeTime = 0.00f;
    this->CrossFadeMaxTime = 0.00f;
    this->LastFadeOut = false;
    this->LoadClass = NULL;
    this->pLoader = NULL;
}

