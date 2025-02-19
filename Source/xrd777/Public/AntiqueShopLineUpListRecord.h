#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AntiqueShopLineUpListRecord.generated.h"

USTRUCT(BlueprintType)
struct FAntiqueShopLineUpListRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ListType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatItemValue_1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatItemNum_1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatItemValue_2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatItemNum_2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatItemValue_3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatItemNum_3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SaleMonth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SaleDay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OpenFLG;
    
    XRD777_API FAntiqueShopLineUpListRecord();
};

