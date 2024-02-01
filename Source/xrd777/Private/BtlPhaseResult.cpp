#include "BtlPhaseResult.h"

void ABtlPhaseResult::SetStartResultInVictory(bool flag) {
}

void ABtlPhaseResult::SetHaveVictorySequence(bool flag) {
}

void ABtlPhaseResult::ReleaseResource() {
}

void ABtlPhaseResult::PlayResultUI() {
}


bool ABtlPhaseResult::CheckAlreadyStartResult() {
    return false;
}

ABtlPhaseResult::ABtlPhaseResult() {
    this->_sceneBase = NULL;
    this->_uiBase = NULL;
    this->_ViewData = NULL;
    this->_ShuffleMain = NULL;
    this->ReactBackGround = NULL;
    this->ResutlUIBp = NULL;
    this->ShuffleUIBp = NULL;
    this->Loader = NULL;
    this->PhaseVictory = NULL;
    this->hasVictoryPhase = false;
    this->isStartResultInVictory = false;
    this->ReadyForExitByVictoryPhase = false;
}

