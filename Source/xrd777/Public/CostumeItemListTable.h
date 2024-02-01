#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "CostumeItemList.h"
#include "CostumeItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCostumeItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCostumeItemList> Data;
    
    UCostumeItemListTable();
};

