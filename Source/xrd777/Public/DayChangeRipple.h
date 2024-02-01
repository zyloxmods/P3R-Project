#pragma once
#include "CoreMinimal.h"
#include "CurveLinearColorAnimation.h"
#include "DayChangeRipple.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FDayChangeRipple {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveLinearColorAnimation curveRipple;
    
public:
    FDayChangeRipple();
};

