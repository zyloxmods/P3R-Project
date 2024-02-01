#pragma once
#include "CoreMinimal.h"
#include "ldCameraRotParam.h"
#include "ldCameraCorrectionParam.generated.h"

USTRUCT(BlueprintType)
struct FldCameraCorrectionParam : public FldCameraRotParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Margin;
    
    XRD777_API FldCameraCorrectionParam();
};

