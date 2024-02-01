#include "BtlEventAlloutShuffleMonitor.h"

void ABtlEventAlloutShuffleMonitor::StartShuffleTime(UBtlCoreComponent* BtlCore) {
}

bool ABtlEventAlloutShuffleMonitor::CheckReadyToDestroy() const {
    return false;
}

ABtlEventAlloutShuffleMonitor::ABtlEventAlloutShuffleMonitor() {
    this->pCore = NULL;
    this->pShuffle = NULL;
    this->ShuffleUIBp = NULL;
    this->Loader = NULL;
}

