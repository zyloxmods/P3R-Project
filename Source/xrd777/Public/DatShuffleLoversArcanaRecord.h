#pragma once
#include "CoreMinimal.h"
#include "DatShuffleLoversArcanaRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleLoversArcanaRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 CommuBonus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LoversBonus;
    
    XRD777_API FDatShuffleLoversArcanaRecord();
};

