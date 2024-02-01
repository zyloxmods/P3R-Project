#pragma once
#include "CoreMinimal.h"
#include "AntiqueShopTradeItem.h"
#include "ShopLineUpListBase.h"
#include "AntiqueShopLineUpList.generated.h"

USTRUCT(BlueprintType)
struct FAntiqueShopLineUpList : public FShopLineUpListBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAntiqueShopTradeItem> TradeItems;
    
    XRD777_API FAntiqueShopLineUpList();
};

