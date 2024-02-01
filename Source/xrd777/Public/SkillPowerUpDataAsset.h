#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SkillPowerUpItem.h"
#include "SkillPowerUpDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API USkillPowerUpDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillPowerUpItem> Data;
    
    USkillPowerUpDataAsset();
};

