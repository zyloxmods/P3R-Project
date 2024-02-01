#pragma once
#include "CoreMinimal.h"
#include "CoefficientInfo.h"
#include "UniqCoefficient.generated.h"

USTRUCT(BlueprintType)
struct FUniqCoefficient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCoefficientInfo> DataMap;
    
    XRD777_API FUniqCoefficient();
};

