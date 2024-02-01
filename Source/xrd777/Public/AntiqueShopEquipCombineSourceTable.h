#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AntiqueShopEquipCombineSourceTable.generated.h"

USTRUCT(BlueprintType)
struct FAntiqueShopEquipCombineSourceTable : public FTableRowBase {
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
    
    XRD777_API FAntiqueShopEquipCombineSourceTable();
};

