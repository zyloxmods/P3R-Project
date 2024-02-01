#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "ML_SplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RUNTIMEMISCLIB_API UML_SplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UML_SplineComponent();
};

