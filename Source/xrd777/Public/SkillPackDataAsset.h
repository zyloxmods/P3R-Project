#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SkillPackItems.h"
#include "SkillPackDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API USkillPackDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillPackItems> Data;
    
    USkillPackDataAsset();
};

