#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "ShoesItemList.h"
#include "ShoesItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UShoesItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShoesItemList> Data;
    
    UShoesItemListTable();
};

