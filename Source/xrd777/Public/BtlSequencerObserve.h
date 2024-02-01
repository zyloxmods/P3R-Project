#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlSequencerObserve.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable)
class XRD777_API ABtlSequencerObserve : public AAppActor {
    GENERATED_BODY()
public:
    ABtlSequencerObserve();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetParam(ALevelSequenceActor* InSequenceActor, bool InStart);
    
};

