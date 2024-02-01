#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "AppCharBagData.h"
#include "AppCharCostumeData.h"
#include "AppCharWeaponData.h"
#include "EAnimPackID.h"
#include "AppCharTableRow.generated.h"

class UAppCharAnimDataAsset;
class UAppCharFaceAnimDataAsset;

USTRUCT(BlueprintType)
struct FAppCharTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimPackID, TSoftObjectPtr<UAppCharAnimDataAsset>> Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAppCharFaceAnimDataAsset> FaceAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppCharCostumeData> Costumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppCharWeaponData> WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppCharBagData> BagType;
    
    XRD777_API FAppCharTableRow();
};

