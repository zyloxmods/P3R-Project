#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpecialSpreadTable.generated.h"

USTRUCT(BlueprintType)
struct FSpecialSpreadTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatPerVal_1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatPerVal_2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatPerVal_3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatPerVal_4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatPerVal_5;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MatPerVal_6;
    
    XRD777_API FSpecialSpreadTable();
};

