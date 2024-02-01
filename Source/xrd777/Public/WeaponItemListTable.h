#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "WeaponItemList.h"
#include "WeaponItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UWeaponItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponItemList> Data;
    
    UWeaponItemListTable();
};

