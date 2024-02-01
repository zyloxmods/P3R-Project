#include "BtlShakeManager.h"

void ABtlShakeManager::BtlShakeStop(APlayerController* Controller) {
}

void ABtlShakeManager::BtlShakePlay(EBtlShakeType Type, float PlayTime, APlayerController* Controller) {
}

ABtlShakeManager* ABtlShakeManager::BtlShakeManagerGetInstance() {
    return NULL;
}

ABtlShakeManager::ABtlShakeManager() {
    this->Loader = NULL;
    this->childActor = NULL;
    this->ShakeAsset = NULL;
}

