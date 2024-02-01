#pragma once
#include "CoreMinimal.h"
#include "SkillLimitItem.generated.h"

USTRUCT(BlueprintType)
struct FSkillLimitItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TotalSkillNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InheritanceSkillNum;
    
    XRD777_API FSkillLimitItem();
};

