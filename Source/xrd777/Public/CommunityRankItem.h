#pragma once
#include "CoreMinimal.h"
#include "CommunityRankItem.generated.h"

USTRUCT(BlueprintType)
struct FCommunityRankItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Bonus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HighBonus;
    
    XRD777_API FCommunityRankItem();
};

