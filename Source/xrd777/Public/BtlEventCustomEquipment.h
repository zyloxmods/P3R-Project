#pragma once
#include "CoreMinimal.h"
#include "BtlEventCustomEquipment.generated.h"

USTRUCT(BlueprintType)
struct FBtlEventCustomEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCustomEquipSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseWeapon;
    
    XRD777_API FBtlEventCustomEquipment();
};

