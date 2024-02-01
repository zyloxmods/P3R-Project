#pragma once
#include "CoreMinimal.h"
#include "BaseCurveAnimation.h"
#include "CurveVectorAnimation.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FCurveVectorAnimation : public FBaseCurveAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_pCurveVector;
    
public:
    XRD777_API FCurveVectorAnimation();
};

