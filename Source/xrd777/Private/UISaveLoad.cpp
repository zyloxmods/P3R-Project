#include "UISaveLoad.h"

void AUISaveLoad::OnFinishedInAnim() {
}

void AUISaveLoad::OnFinishedCloseAnim() {
}

AUISaveLoad::AUISaveLoad() {
    this->AddContentCheck = NULL;
    this->Loader = NULL;
    this->SaveLoadLayoutDataTable = NULL;
    this->SaveLoadLayoutDataTable2 = NULL;
    this->SaveLoadDateLayoutDataTable = NULL;
    this->pParamLayoutData = NULL;
    this->pParamLayoutData2 = NULL;
    this->pParamDateLayoutData = NULL;
    this->NetworkConnectionDialog = NULL;
    this->SaveManagerInst = NULL;
    this->DrawActorSC = NULL;
    this->DrawActor = NULL;
}

