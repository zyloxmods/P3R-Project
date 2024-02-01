#pragma once
#include "CoreMinimal.h"
#include "SkillChangeItem.generated.h"

USTRUCT(BlueprintType)
struct FSkillChangeItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SkillPack;
    
    XRD777_API FSkillChangeItem();
};

