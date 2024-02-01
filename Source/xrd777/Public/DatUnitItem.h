#pragma once
#include "CoreMinimal.h"
#include "DatUnitItem.generated.h"

USTRUCT(BlueprintType)
struct FDatUnitItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 equip[5];
    
    XRD777_API FDatUnitItem();
};

