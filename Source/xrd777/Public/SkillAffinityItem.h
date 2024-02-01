#pragma once
#include "CoreMinimal.h"
#include "SkillAffinityItem.generated.h"

USTRUCT(BlueprintType)
struct FSkillAffinityItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Bit;
    
    XRD777_API FSkillAffinityItem();
};

