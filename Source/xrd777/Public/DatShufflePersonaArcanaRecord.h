#pragma once
#include "CoreMinimal.h"
#include "DatShufflePersonaArcanaRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatShufflePersonaArcanaRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RankID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PersonaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 prob;
    
    XRD777_API FDatShufflePersonaArcanaRecord();
};

