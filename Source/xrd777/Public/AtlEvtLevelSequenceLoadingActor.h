#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtlEvtLevelSequenceLoadingActor.generated.h"

class AAtlEvtLevelSequenceActor;

UCLASS(Blueprintable, NotPlaceable, Transient)
class AAtlEvtLevelSequenceLoadingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlEvtLevelSequenceActor* OwnerEvtLevelSequenceActor;
    
    AAtlEvtLevelSequenceLoadingActor();
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadingAssets();
    
};

