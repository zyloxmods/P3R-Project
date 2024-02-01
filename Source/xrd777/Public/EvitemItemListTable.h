#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "EvitemItemList.h"
#include "EvitemItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UEvitemItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvitemItemList> Data;
    
    UEvitemItemListTable();
};

