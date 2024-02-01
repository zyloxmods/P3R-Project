#include "UIRestore.h"

void AUIRestore::OnFinishedInAnim() {
}

void AUIRestore::OnFinishedCloseAnim() {
}

AUIRestore::AUIRestore() {
    this->SaveLoadLayoutDataTable = NULL;
    this->SaveLoadLayoutDataTable2 = NULL;
    this->SaveLoadDateLayoutDataTable = NULL;
    this->pParamLayoutData = NULL;
    this->pParamLayoutData2 = NULL;
    this->pParamDateLayoutData = NULL;
    this->Loader = NULL;
    this->DrawActorSC = NULL;
    this->DrawActor = NULL;
    this->AddContentCheck = NULL;
}

