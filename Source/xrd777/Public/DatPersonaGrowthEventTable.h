#pragma once
#include "CoreMinimal.h"
#include "DatPersonaGrowthEventTable.generated.h"

USTRUCT(BlueprintType)
struct FDatPersonaGrowthEventTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 eventId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 skillId;
    
    XRD777_API FDatPersonaGrowthEventTable();
};

