#pragma once
#include "CoreMinimal.h"
#include "MobWalkTarget.h"
#include "FldCrowdTarget.generated.h"

class AMobWalkCharaBaseCore;

UCLASS(Blueprintable)
class XRD777_API AFldCrowdTarget : public AMobWalkTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMobWalkCharaBaseCore* mMobActor_;
    
public:
    AFldCrowdTarget();
};

