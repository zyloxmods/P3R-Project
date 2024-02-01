#pragma once
#include "CoreMinimal.h"
#include "SkillPackItem.generated.h"

USTRUCT(BlueprintType)
struct FSkillPackItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Rank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Skill;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Weight;
    
    XRD777_API FSkillPackItem();
};

