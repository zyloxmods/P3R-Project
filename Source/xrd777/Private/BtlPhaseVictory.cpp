#include "BtlPhaseVictory.h"

void ABtlPhaseVictory::SetResultType(EBtlResultType resulttype) {
}

EBtlResultType ABtlPhaseVictory::GetResultType() const {
    return EBtlResultType::Normal;
}

ABtlPhaseVictory::ABtlPhaseVictory() {
    this->CompensationData = NULL;
    this->BtlCore = NULL;
}

