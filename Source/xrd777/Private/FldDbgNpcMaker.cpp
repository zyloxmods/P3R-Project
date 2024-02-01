#include "FldDbgNpcMaker.h"

TArray<APawn*> AFldDbgNpcMaker::GetNpcActors() const {
    return TArray<APawn*>();
}

APawn* AFldDbgNpcMaker::GetNpcActor() const {
    return NULL;
}

AFldDbgNpcMaker::AFldDbgNpcMaker() {
    this->NpcClass = NULL;
    this->AnimPackID = EAnimPackID::Common;
    this->IsLoad = false;
}

