#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlEvtPlayParameter.h"
#include "AtlEvtPlayObject.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable, NotPlaceable)
class AAtlEvtPlayObject : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtPlayParameter EvtPlayParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventRank;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    AAtlEvtPlayObject();
    UFUNCTION(BlueprintCallable)
    void OnPlayEventSequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadLevelStreaming();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadFieldLevelStreaming_WaitUnpaused();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadFieldLevelStreaming_DelayCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadFieldLevelStreaming();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadEvtLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedReplaceCharactersCostume();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedReplaceCharacters();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedMovieTrack();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSceneChange();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedEventSequencer();
    
};

