#pragma once
#include "CoreMinimal.h"
#include "AntiqueShopEquipCombineResult.h"
#include "AntiqueShopEquipCombineSource.h"
#include "AntiqueShopLineUpList.h"
#include "AppMultiDataAsset.h"
#include "AntiqueShopLineUpListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAntiqueShopLineUpListTable : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAntiqueShopLineUpList> TradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAntiqueShopEquipCombineSource> CombineSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAntiqueShopEquipCombineResult> CombineResults;
    
    UAntiqueShopLineUpListTable();
};

