#pragma once
#include "CoreMinimal.h"
#include "ldCameraLockAtParam.generated.h"

USTRUCT(BlueprintType)
struct FldCameraLockAtParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLimitAngle;
    
    XRD777_API FldCameraLockAtParam();
};

