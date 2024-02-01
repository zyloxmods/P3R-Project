#pragma once
#include "CoreMinimal.h"
#include "DatAffinityDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatAffinityDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 attr[19];
    
    XRD777_API FDatAffinityDataRecord();
};

