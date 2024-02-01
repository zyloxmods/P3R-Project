#include "NameEntry.h"

void ANameEntry::OnFinishedScr(int32 ExitType) {
}

ANameEntry::ANameEntry() {
    this->Loader_ = NULL;
    this->ScrActor_ = NULL;
    this->BmdAsset_ = NULL;
    this->BfAsset_ = NULL;
    this->CnvCharDataAsset_ = NULL;
    this->NameEntryDrawSubClass = NULL;
    this->pNameEntryDrawActor = NULL;
    this->pParamLayoutData = NULL;
    this->pLayoutDataTable = NULL;
}

