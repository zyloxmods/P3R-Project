#include "FldEnemyNormalComp.h"

void UFldEnemyNormalComp::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

UFldEnemyNormalComp::UFldEnemyNormalComp() {
    this->MarkNiagaraComp = NULL;
    this->DirectionNiagaraComp = NULL;
    this->AuraNiagaraComp = NULL;
    this->ConditionNiagaraComp = NULL;
    this->State = EFldEnemyState::None;
    this->NextState = EFldEnemyState::None;
    this->bIsDead = false;
    this->bVanish = false;
    this->bModalMenu = false;
    this->bIdleMenu = false;
    this->EnemyData = NULL;
    this->FootprintDA = NULL;
    this->IdelAnim = NULL;
    this->DamageAnim = NULL;
    this->RunAnim = NULL;
    this->WalkAnim = NULL;
    this->AttackAnim = NULL;
    this->FindAnim = NULL;
    this->SearchAnim = NULL;
    this->VanishAnim = NULL;
    this->ArrivalAnim = NULL;
    this->WinceAnim = NULL;
    this->WinceIdleAnim = NULL;
}

