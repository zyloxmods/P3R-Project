#pragma once
#include "CoreMinimal.h"
#include "DatPlayerMaxHPSP.generated.h"

USTRUCT(BlueprintType)
struct FDatPlayerMaxHPSP {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxHp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxSp;
    
    XRD777_API FDatPlayerMaxHPSP();
};

