#pragma once
#include "CoreMinimal.h"
#include "AntiqueShopTradeItem.generated.h"

USTRUCT(BlueprintType)
struct FAntiqueShopTradeItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 itemNum;
    
    XRD777_API FAntiqueShopTradeItem();
};

