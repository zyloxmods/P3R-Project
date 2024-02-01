#pragma once
#include "CoreMinimal.h"
#include "SkillPowerUpItem.generated.h"

USTRUCT(BlueprintType)
struct FSkillPowerUpItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 OldSkill;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NewSkill;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LevelLimit;
    
    XRD777_API FSkillPowerUpItem();
};

