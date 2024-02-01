#include "CmpSystem.h"

void UCmpSystem::OnEndPlaySubProcess(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

UCmpSystem::UCmpSystem() {
    this->pSystemDraw = NULL;
    this->pSystemSystem = NULL;
    this->pSaveMenu = NULL;
    this->pTutorial = NULL;
    this->pDictionary = NULL;
    this->pTutorialDrawClass = NULL;
    this->pConfig = NULL;
}

