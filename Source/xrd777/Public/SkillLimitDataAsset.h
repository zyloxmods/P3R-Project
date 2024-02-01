#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SkillLimitItem.h"
#include "SkillLimitDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API USkillLimitDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillLimitItem> Data;
    
    USkillLimitDataAsset();
};

