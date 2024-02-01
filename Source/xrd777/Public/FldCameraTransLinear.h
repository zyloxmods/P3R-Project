#pragma once
#include "CoreMinimal.h"
#include "FldCameraTransBase.h"
#include "FldCameraTransLinear.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldCameraTransLinear : public UFldCameraTransBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalTime;
    
    UFldCameraTransLinear();
};

