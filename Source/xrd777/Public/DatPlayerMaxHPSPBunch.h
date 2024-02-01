#pragma once
#include "CoreMinimal.h"
#include "DatPlayerMaxHPSP.h"
#include "DatPlayerMaxHPSPBunch.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FDatPlayerMaxHPSPBunch {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatPlayerMaxHPSP EachPlayerData[11];
    
    FDatPlayerMaxHPSPBunch();
};

