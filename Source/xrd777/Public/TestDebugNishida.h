#pragma once
#include "CoreMinimal.h"
#include "CurveFloatAnimation.h"
#include "GetUIParameter.h"
#include "TestDebugNishidaBase.h"
#include "TestDebugNishida.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FTestDebugNishida : public FTestDebugNishidaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUIParameter uip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation curveIceYScale;
    
    FTestDebugNishida();
};

