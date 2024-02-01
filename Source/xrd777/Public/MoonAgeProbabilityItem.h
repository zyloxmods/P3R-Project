#pragma once
#include "CoreMinimal.h"
#include "MoonAgeProbabilityItem.generated.h"

USTRUCT(BlueprintType)
struct FMoonAgeProbabilityItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ConceptionRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SkillChangeRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AccidentRate;
    
    XRD777_API FMoonAgeProbabilityItem();
};

