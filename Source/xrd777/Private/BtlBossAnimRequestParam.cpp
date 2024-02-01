#include "BtlBossAnimRequestParam.h"

FBtlBossAnimRequestParam::FBtlBossAnimRequestParam() {
    this->Type = EBtlAnimationType::BTL_ANIM_NULL;
    this->UseCustomFade = false;
    this->CustomFadeIn = 0.00f;
    this->CustomFadeOut = 0.00f;
}

