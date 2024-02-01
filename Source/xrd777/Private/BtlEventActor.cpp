#include "BtlEventActor.h"

ABtlEventActor::ABtlEventActor() {
    this->bCompleteInit = false;
    this->bStartScript = false;
    this->pController = NULL;
    this->BtlEventProcNo = 0;
    this->isCommonAsset = false;
}

