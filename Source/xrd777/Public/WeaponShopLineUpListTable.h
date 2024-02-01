#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "WeaponShopLineUpList.h"
#include "WeaponShopLineUpListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UWeaponShopLineUpListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponShopLineUpList> Data;
    
    UWeaponShopLineUpListTable();
};

