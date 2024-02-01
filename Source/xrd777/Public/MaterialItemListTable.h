#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "MaterialItemList.h"
#include "MaterialItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UMaterialItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialItemList> Data;
    
    UMaterialItemListTable();
};

