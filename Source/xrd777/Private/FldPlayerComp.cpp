#include "FldPlayerComp.h"

void UFldPlayerComp::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

float UFldPlayerComp::GetWalkThreshold() const {
    return 0.0f;
}

float UFldPlayerComp::GetRunThreshold() const {
    return 0.0f;
}

float UFldPlayerComp::GetDashThreshold() const {
    return 0.0f;
}

UFldPlayerComp::UFldPlayerComp() {
    this->ControllerRef = NULL;
    this->AppCharComp = NULL;
    this->HitCoreRef = NULL;
    this->CameraHitRef = NULL;
    this->State = EFldPlayerState::None;
    this->NextState = EFldPlayerState::None;
    this->bEnableDash = false;
    this->bEnableAssault = false;
    this->bJammingSkill = false;
    this->bPressureSkill = false;
    this->bOnceAnimStop = false;
    this->bNotSearchedByEnemies = false;
    this->AttackMontage = NULL;
    this->PersonalMotionComp = NULL;
}

