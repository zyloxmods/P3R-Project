#include "TestSplineCollision.h"
#include "Components/SplineComponent.h"

ATestSplineCollision::ATestSplineCollision() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
}

