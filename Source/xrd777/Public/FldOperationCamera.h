#pragma once
#include "CoreMinimal.h"
#include "FldOperationBase.h"
#include "FldOperationCamera.generated.h"

class AFldCameraHitBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldOperationCamera : public UFldOperationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldCameraHitBase* CurrentHitRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLock;
    
public:
    UFldOperationCamera();
};

