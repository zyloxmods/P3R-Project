#pragma once
#include "CoreMinimal.h"
#include "FldCrowdTarget.h"
#include "FldCrowdTarget_STOP.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldCrowdTarget_STOP : public AFldCrowdTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mStopRatio_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStopTime_;
    
public:
    AFldCrowdTarget_STOP();
};

