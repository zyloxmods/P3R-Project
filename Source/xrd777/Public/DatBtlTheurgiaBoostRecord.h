#pragma once
#include "CoreMinimal.h"
#include "DatBtlTheurgiaBoostRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatBtlTheurgiaBoostRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Value[10];
    
    XRD777_API FDatBtlTheurgiaBoostRecord();
};

