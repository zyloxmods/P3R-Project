#pragma once
#include "CoreMinimal.h"
#include "DatShuffleCoinArcanaRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleCoinArcanaRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Max;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Min;
    
    XRD777_API FDatShuffleCoinArcanaRecord();
};

