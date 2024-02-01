#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlEvtPlayUnstreamObject.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable, NotPlaceable)
class AAtlEvtPlayUnstreamObject : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    AAtlEvtPlayUnstreamObject();
    UFUNCTION(BlueprintCallable)
    void OnFinishedUnloadLevelStreaming();
    
};

