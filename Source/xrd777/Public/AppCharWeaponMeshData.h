#pragma once
#include "CoreMinimal.h"
#include "AppCharWeaponMeshData.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FAppCharWeaponMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MultiEquip;
    
    XRD777_API FAppCharWeaponMeshData();
};

