#pragma once
#include "CoreMinimal.h"
#include "DatUnitSupport.generated.h"

USTRUCT(BlueprintType)
struct FDatUnitSupport {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 valid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 appointment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Point[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Turn[10];
    
    XRD777_API FDatUnitSupport();
};

