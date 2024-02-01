#include "BtlGuiRushEffect.h"

void ABtlGuiRushEffect::SetOT(int32 OT) {
}

void ABtlGuiRushEffect::SetEffect(bool Enable) {
}

void ABtlGuiRushEffect::SetBtlFlag(bool flag) {
}

void ABtlGuiRushEffect::SetAppCanvas(int32 appCanvas) {
}

void ABtlGuiRushEffect::AnimationPause(bool Pause) {
}

ABtlGuiRushEffect::ABtlGuiRushEffect() {
    this->Material = NULL;
    this->DynamicMaterial = NULL;
    this->MPC = NULL;
    this->switchState = 0;
    this->materialOt = 0;
    this->renderOt = 0;
    this->pLoader = NULL;
    this->bEffectEnable = false;
    this->bAnimationPause = false;
    this->bLoadComlpeted = false;
    this->bBtlFlag = false;
    this->maskWidth = 0.00f;
}

