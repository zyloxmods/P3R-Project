#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "CommonItemList.h"
#include "CommonItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCommonItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonItemList> Data;
    
    UCommonItemListTable();
};

