#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoviePlayActorBase.h"
#include "MoviePlayActorEventSequenceTrack.generated.h"

class AMoviePlayActorEventSequenceTrack;
class UManaComponent;
class UMovieCuePointManager;

UCLASS(Blueprintable)
class XRD777_API AMoviePlayActorEventSequenceTrack : public AMoviePlayActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieCuePointManager* CuePointManager;
    
public:
    AMoviePlayActorEventSequenceTrack();
    UFUNCTION(BlueprintCallable)
    static bool SyncInstance();
    
    UFUNCTION(BlueprintCallable)
    void SetPause_Main220040(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void OnTextureUpdated(int32 InFrameNumber, UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceUpdate(FQualifiedFrameTime InCurrentTime, FQualifiedFrameTime InPreviousTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSeekCompleted(int32 InFrameNumber, UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginPlay(UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPause_Main220040();
    
    UFUNCTION(BlueprintCallable)
    static AMoviePlayActorEventSequenceTrack* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    static void CreateInstance();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckInstance();
    
};

