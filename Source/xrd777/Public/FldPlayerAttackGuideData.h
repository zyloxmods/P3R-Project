#pragma once
#include "CoreMinimal.h"
#include "FldPlayerAttackGuideData.generated.h"

USTRUCT(BlueprintType)
struct FFldPlayerAttackGuideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuideAngle;
    
    XRD777_API FFldPlayerAttackGuideData();
};

