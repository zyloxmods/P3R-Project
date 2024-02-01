#pragma once
#include "CoreMinimal.h"
#include "DatShuffleCommonCoefficientArcanaRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleCommonCoefficientArcanaRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    XRD777_API FDatShuffleCommonCoefficientArcanaRecord();
};

