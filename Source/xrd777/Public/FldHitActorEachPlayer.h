#pragma once
#include "CoreMinimal.h"
#include "FldHitActor.h"
#include "FldHitActorEachPlayerProc.h"
#include "FldHitActorEachPlayer.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldHitActorEachPlayer : public AFldHitActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldHitActorEachPlayerProc> mProcList_;
    
public:
    AFldHitActorEachPlayer();
};

