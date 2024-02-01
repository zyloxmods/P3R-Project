#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SkillAffinityItem.h"
#include "SkillAffinityDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API USkillAffinityDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillAffinityItem> Data;
    
    USkillAffinityDataAsset();
};

