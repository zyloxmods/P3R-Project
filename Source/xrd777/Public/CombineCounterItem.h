#pragma once
#include "CoreMinimal.h"
#include "CombineCounterItem.generated.h"

USTRUCT(BlueprintType)
struct FCombineCounterItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Num;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ConceptionRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SkillChangeRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AccidentRate;
    
    XRD777_API FCombineCounterItem();
};

