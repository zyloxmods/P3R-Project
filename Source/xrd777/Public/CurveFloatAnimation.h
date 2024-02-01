#pragma once
#include "CoreMinimal.h"
#include "BaseCurveAnimation.h"
#include "CurveFloatAnimation.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FCurveFloatAnimation : public FBaseCurveAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pCurveFloat;
    
public:
    XRD777_API FCurveFloatAnimation();
};

