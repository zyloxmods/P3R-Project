#include "FldPlayerData.h"

FFldPlayerData::FFldPlayerData() {
    this->InputDeadZone = 0.00f;
    this->InputWalkZone = 0.00f;
    this->Acceleration = 0.00f;
    this->Deceleration = 0.00f;
    this->RotSpeed = 0.00f;
    this->RotSpeed_Walk = 0.00f;
    this->TurnSpeed = 0.00f;
    this->TurnMoveRot = 0.00f;
    this->BrakingTime = 0.00f;
    this->BrakingSlideTime = 0.00f;
    this->ReverseBrakingTime = 0.00f;
    this->ReverseBrakingSlideTime = 0.00f;
    this->EncoutRadius = 0.00f;
    this->SwitchingTimeToAssault = 0.00f;
    this->SwitchingTimeToAssaultLv2 = 0.00f;
    this->AssaultGetTpLv1 = 0.00f;
    this->AssaultGetTpLv2 = 0.00f;
    this->AssaultUpsetRateLv1 = 0;
    this->AssaultUpsetRateLv2 = 0;
    this->IdleAttackId = 0;
    this->WalkAttackId = 0;
    this->RunAttackId = 0;
    this->DashAttackId = 0;
    this->AssaultAttackId = 0;
    this->AttackToMoveBlendTime = 0.00f;
}

