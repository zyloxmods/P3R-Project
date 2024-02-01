#include "AppCharTransparencyArea.h"
#include "Components/CapsuleComponent.h"

AAppCharTransparencyArea::AAppCharTransparencyArea() {
    this->CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
    this->Opacity = 0.50f;
    this->Speed = 1.00f;
    this->Distance = 100.00f;
    this->MobDistance = 200.00f;
    this->LargeDistance = 300.00f;
    this->Priority = 0;
}

