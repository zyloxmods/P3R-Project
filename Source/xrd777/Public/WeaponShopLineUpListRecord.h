#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponShopLineUpListRecord.generated.h"

USTRUCT(BlueprintType)
struct FWeaponShopLineUpListRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SaleMonth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SaleDay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OpenFLG;
    
    XRD777_API FWeaponShopLineUpListRecord();
};

