#pragma once
#include "CoreMinimal.h"
#include "BaseCurveAnimation.generated.h"

class UAssetLoader;
class UCurveBase;

USTRUCT(BlueprintType)
struct FBaseCurveAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveBase* m_pCurve;
    
public:
    XRD777_API FBaseCurveAnimation();
};

