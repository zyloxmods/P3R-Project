#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "FldMiscCameraMove.generated.h"

class AFldMiscCameraMove;

UCLASS(Blueprintable)
class XRD777_API AFldMiscCameraMove : public ACameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldMiscCameraMove* mPrevCamera_;
    
public:
    AFldMiscCameraMove();
};

