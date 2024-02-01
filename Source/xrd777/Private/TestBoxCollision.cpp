#include "TestBoxCollision.h"
#include "Components/BoxComponent.h"

ATestBoxCollision::ATestBoxCollision() {
    this->CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
}

