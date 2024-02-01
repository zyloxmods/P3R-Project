#pragma once
#include "CoreMinimal.h"
#include "AppCharWeaponUsageEnv.h"
#include "AppCharWeapoAnimAssetTypeData.generated.h"

class UAppCharWeaponAnimDataAsset;

USTRUCT(BlueprintType)
struct FAppCharWeapoAnimAssetTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AppCharWeaponUsageEnv UsageEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAppCharWeaponAnimDataAsset> Asset;
    
    XRD777_API FAppCharWeapoAnimAssetTypeData();
};

