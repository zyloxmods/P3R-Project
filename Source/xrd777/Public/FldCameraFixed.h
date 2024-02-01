#pragma once
#include "CoreMinimal.h"
#include "FldCameraBase.h"
#include "FldCameraFixed.generated.h"

class UFldCameraBehaviorFixed;

UCLASS(Blueprintable)
class XRD777_API AFldCameraFixed : public AFldCameraBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldCameraBehaviorFixed* Behavior;
    
public:
    AFldCameraFixed();
};

