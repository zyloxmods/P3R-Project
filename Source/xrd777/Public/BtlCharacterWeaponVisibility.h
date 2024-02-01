#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BtlCharacterWeaponVisibility.generated.h"

USTRUCT(BlueprintType)
struct FBtlCharacterWeaponVisibility : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowGun;
    
    XRD777_API FBtlCharacterWeaponVisibility();
};

