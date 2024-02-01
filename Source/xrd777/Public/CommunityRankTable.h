#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommunityRankTable.generated.h"

USTRUCT(BlueprintType)
struct FCommunityRankTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Bonus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HighBonus;
    
    XRD777_API FCommunityRankTable();
};

