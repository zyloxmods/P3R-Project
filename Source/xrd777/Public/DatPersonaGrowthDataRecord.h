#pragma once
#include "CoreMinimal.h"
#include "DatPersonaGrowthEventTable.h"
#include "DatPersonaGrowthDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatPersonaGrowthDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 paramsUp[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatPersonaGrowthEventTable skillEvent[16];
    
    XRD777_API FDatPersonaGrowthDataRecord();
};

