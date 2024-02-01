#pragma once
#include "CoreMinimal.h"
#include "BaseCurveAnimation.h"
#include "CurveLinearColorAnimation.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FCurveLinearColorAnimation : public FBaseCurveAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* m_pCurveLinearColor;
    
public:
    XRD777_API FCurveLinearColorAnimation();
};

