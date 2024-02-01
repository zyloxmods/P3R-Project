#pragma once
#include "CoreMinimal.h"
#include "CoefficientInfo.generated.h"

USTRUCT(BlueprintType)
struct FCoefficientInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Coefficient;
    
    XRD777_API FCoefficientInfo();
};

