#pragma once
#include "CoreMinimal.h"
#include "DatUnitDropItem.generated.h"

USTRUCT(BlueprintType)
struct FDatUnitDropItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool eventitem;
    
    XRD777_API FDatUnitDropItem();
};

