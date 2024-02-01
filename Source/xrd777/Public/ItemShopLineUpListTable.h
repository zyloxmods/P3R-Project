#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "ItemShopLineUpList.h"
#include "ItemShopLineUpListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UItemShopLineUpListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemShopLineUpList> Data;
    
    UItemShopLineUpListTable();
};

