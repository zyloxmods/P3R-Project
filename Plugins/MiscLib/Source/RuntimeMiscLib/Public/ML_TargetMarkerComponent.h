#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "ML_TargetMarkerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RUNTIMEMISCLIB_API UML_TargetMarkerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UML_TargetMarkerComponent();
};

