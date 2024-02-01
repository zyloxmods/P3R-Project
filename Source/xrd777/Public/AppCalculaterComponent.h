#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AppCalculaterComponentWork.h"
#include "AppCalculaterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UAppCalculaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAppCalculaterComponent();
    UFUNCTION(BlueprintCallable)
    float BPCommand_CalculationUpdate(const float DeltaTime, UPARAM(Ref) FAppCalculaterComponentWork& Work, const bool IsReverse, const bool IsLoop, const bool IsReset);
    
};

