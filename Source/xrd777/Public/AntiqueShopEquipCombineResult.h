#pragma once
#include "CoreMinimal.h"
#include "AntiqueShopTradeItem.h"
#include "ShopLineUpListBase.h"
#include "AntiqueShopEquipCombineResult.generated.h"

USTRUCT(BlueprintType)
struct FAntiqueShopEquipCombineResult : public FShopLineUpListBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BaseItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAntiqueShopTradeItem> TradeItems;
    
    XRD777_API FAntiqueShopEquipCombineResult();
};

