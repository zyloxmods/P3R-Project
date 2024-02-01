#pragma once
#include "CoreMinimal.h"
#include "DatShuffleChoiceMajorArcanaRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleChoiceMajorArcanaRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ArcanaID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RankInPhase[8];
    
    XRD777_API FDatShuffleChoiceMajorArcanaRecord();
};

