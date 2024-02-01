#pragma once
#include "CoreMinimal.h"
#include "DatUnitPersona.generated.h"

USTRUCT(BlueprintType)
struct FDatUnitPersona {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 equip;
    
    XRD777_API FDatUnitPersona();
};

