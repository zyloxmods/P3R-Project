#pragma once
#include "CoreMinimal.h"
#include "ldCameraRotParam.h"
#include "ldCameraSlopeParam.generated.h"

USTRUCT(BlueprintType)
struct FldCameraSlopeParam : public FldCameraRotParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    XRD777_API FldCameraSlopeParam();
};

