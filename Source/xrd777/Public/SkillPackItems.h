#pragma once
#include "CoreMinimal.h"
#include "SkillPackItem.h"
#include "SkillPackItems.generated.h"

USTRUCT(BlueprintType)
struct FSkillPackItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillPackItem> Items;
    
    XRD777_API FSkillPackItems();
};

