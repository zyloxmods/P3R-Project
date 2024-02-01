#include "UtlBpObjManager.h"

void UUtlBpObjManager::SetEventEnd() {
}

void UUtlBpObjManager::SetBluePrint(UUtlBpObjCore* BpObjCore) {
}

UUtlBpObjCore* UUtlBpObjManager::CreateBluePrint(UClass* ObjectClass) {
    return NULL;
}

UUtlBpObjManager::UUtlBpObjManager() {
    this->mObject_ = NULL;
}

