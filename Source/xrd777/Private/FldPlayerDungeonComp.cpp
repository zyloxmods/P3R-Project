#include "FldPlayerDungeonComp.h"

UFldPlayerDungeonComp::UFldPlayerDungeonComp() {
    this->AttackAreaComp = NULL;
    this->AttackArea = NULL;
    this->SearchAreaComp = NULL;
    this->SearchArea = NULL;
    this->PostProcessComp = NULL;
    this->Behavior = EFldPlayerDngBehavior::None;
    this->NextBehavior = EFldPlayerDngBehavior::None;
    this->Timer = 0.00f;
    this->AttackId = 0;
    this->bNextAttack = false;
    this->bRotAttack = false;
    this->RootMoveY = 0.00f;
    this->AssaultTimer = 0.00f;
    this->bEncountingPause = false;
    this->AssaultNiagara = NULL;
}

