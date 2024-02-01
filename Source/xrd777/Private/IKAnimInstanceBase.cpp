#include "IKAnimInstanceBase.h"

void UIKAnimInstanceBase::UpdateLocomotionTick(float DeltaSeconds) {
}

UIKAnimInstanceBase::UIKAnimInstanceBase() {
    this->MoveSpeed = 0.00f;
    this->bUsingFootIK = false;
    this->bEnableFootIK = false;
    this->RotationOffsetInterpSpeed = 25.00f;
    this->ZOffsetInterpSpeed = 25.00f;
    this->PelvisOffset = 0.00f;
    this->LeftFootIKSocketName = TEXT("LeftFoot");
    this->RightFootIKSocketName = TEXT("RightFoot");
}

