#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SkillChangeItem.h"
#include "SkillChangeDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API USkillChangeDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillChangeItem> Data;
    
    USkillChangeDataAsset();
};

