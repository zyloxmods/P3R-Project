#pragma once
#include "CoreMinimal.h"
#include "DatShuffleCupArcanaRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleCupArcanaRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RankID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EffectID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 prob;
    
    XRD777_API FDatShuffleCupArcanaRecord();
};

