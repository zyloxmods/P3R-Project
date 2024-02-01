#pragma once
#include "CoreMinimal.h"
#include "AccsItemList.h"
#include "AppDataAsset.h"
#include "AccsItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAccsItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccsItemList> Data;
    
    UAccsItemListTable();
};

