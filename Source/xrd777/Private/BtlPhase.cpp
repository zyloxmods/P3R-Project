#include "BtlPhase.h"



void ABtlPhase::StartPhase() {
}

void ABtlPhase::SetNowBattlePhaseName(EBattlePhaseName newPhaseName) {
}


ABtlPhase* ABtlPhase::GetNextPhase() {
    return NULL;
}


void ABtlPhase::FinalizePhase() {
}



ABtlPhase::ABtlPhase() {
    this->Type = EBtlPhaseType::None;
    this->ImplementInBP = false;
}

