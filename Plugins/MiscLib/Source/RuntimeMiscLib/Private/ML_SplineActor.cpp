#include "ML_SplineActor.h"
#include "ML_SplineComponent.h"

void AML_SplineActor::SetMarkerVisibility(bool Visibility) {
}

void AML_SplineActor::SetMarkerPosition(int32 Index, FVector Position) {
}

AML_SplineActor::AML_SplineActor() {
    this->_SplineComponent = CreateDefaultSubobject<UML_SplineComponent>(TEXT("Spline"));
    this->_TargetMarkerComponent = NULL;
}

