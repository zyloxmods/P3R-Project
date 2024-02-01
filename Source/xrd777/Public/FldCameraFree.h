#pragma once
#include "CoreMinimal.h"
#include "FldCameraBase.h"
#include "FldCameraFree.generated.h"

class UFldCameraBehaviorFree;

UCLASS(Blueprintable)
class XRD777_API AFldCameraFree : public AFldCameraBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldCameraBehaviorFree* Behavior;
    
public:
    AFldCameraFree();
};

