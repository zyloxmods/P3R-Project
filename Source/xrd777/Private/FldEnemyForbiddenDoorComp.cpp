#include "FldEnemyForbiddenDoorComp.h"

UFldEnemyForbiddenDoorComp::UFldEnemyForbiddenDoorComp() {
    this->DisplayChildActorComp = NULL;
    this->AuraNiagaraComp = NULL;
    this->State = EFldEnemyState::None;
    this->NextState = EFldEnemyState::None;
    this->bIsLoading = false;
    this->bIsSetupDisplay = false;
}

