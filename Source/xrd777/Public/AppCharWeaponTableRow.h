#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AppCharWeapoAnimAssetTypeData.h"
#include "AppCharWeaponMeshData.h"
#include "AppCharWeaponTableRow.generated.h"

USTRUCT(BlueprintType)
struct FAppCharWeaponTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppCharWeaponMeshData> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppCharWeapoAnimAssetTypeData> AnimAsset;
    
    XRD777_API FAppCharWeaponTableRow();
};

