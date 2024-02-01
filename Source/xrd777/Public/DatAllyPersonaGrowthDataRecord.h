#pragma once
#include "CoreMinimal.h"
#include "DatLevelupParam.h"
#include "DatPersonaGrowthEventTable.h"
#include "DatAllyPersonaGrowthDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatAllyPersonaGrowthDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 levelMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatPersonaGrowthEventTable skillEvent[32];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatLevelupParam paramsUp[98];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Exp[98];
    
    XRD777_API FDatAllyPersonaGrowthDataRecord();
};

