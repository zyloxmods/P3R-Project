#include "FldCrowdNpcBase.h"
#include "Components/CapsuleComponent.h"

float AFldCrowdNpcBase::UpdateOpacityByPlayerActor(float Opacity, AActor* TargetActor) {
    return 0.0f;
}

AFldCrowdNpcBase::AFldCrowdNpcBase() {
    this->CapsuleComp_ = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->mDispValue_ = 100;
}

