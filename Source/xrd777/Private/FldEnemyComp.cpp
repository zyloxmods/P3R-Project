#include "FldEnemyComp.h"

UFldEnemyComp::UFldEnemyComp() {
    this->ControllerRef = NULL;
    this->MeshComp = NULL;
    this->MovementComp = NULL;
    this->CapsuleComp = NULL;
    this->SearchAreaComp = NULL;
    this->SearchArea = NULL;
    this->AttackAreaComp = NULL;
    this->AttackArea = NULL;
    this->AnimMontage = NULL;
    this->CurrentAnimSequence = NULL;
    this->EnemyType = EFldEnemyType::Normal;
    this->ID = 0;
    this->EncountID = 0;
    this->Group = 0;
    this->AbnormalStateId = 0;
    this->bForceUpset = false;
    this->bGroupEnable = true;
    this->bVisibleEnable = true;
    this->bCollisionEnable = true;
    this->FlagID = 0;
    this->RespawnProhibited = false;
    this->TypeChanged = false;
    this->bAllowStandbyToFinish = false;
}

