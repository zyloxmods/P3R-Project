#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "ArmorItemList.h"
#include "ArmorItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UArmorItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArmorItemList> Data;
    
    UArmorItemListTable();
};

