#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "ldCameraLockAtParam.h"
#include "FldCameraHitBase.generated.h"

class UFldCameraTransBase;

UCLASS(Blueprintable)
class XRD777_API AFldCameraHitBase : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldCameraTransBase* Transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FldCameraLockAtParam LockAtYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FldCameraLockAtParam LockAtPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockAtForward;
    
public:
    AFldCameraHitBase();
};

