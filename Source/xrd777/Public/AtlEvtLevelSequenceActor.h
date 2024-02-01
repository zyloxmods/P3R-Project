#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceActor.h"
#include "AtlEvtLevelSequenceEventSE.h"
#include "AtlEvtLevelSequenceEventVoice.h"
#include "AtlEvtLevelSequenceSound.h"
#include "EAtlLevelSequenceActorType.h"
#include "AtlEvtLevelSequenceActor.generated.h"

class UMovieSceneSequence;
class UMovieSceneSubSection;

UCLASS(Blueprintable)
class XRD777_API AAtlEvtLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTickFromSequenceTickManager, FQualifiedFrameTime, CurrentTime, FQualifiedFrameTime, PreviousTime);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlLevelSequenceActorType AtlSequenceType  = EAtlLevelSequenceActorType::UE4Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EvtDialogueTimeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtLevelSequenceSound> SoundAssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> BankIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtLevelSequenceEventVoice> EventVoiceAssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtLevelSequenceEventSE> EventSEAssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AtlFieldEventIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDOFInCamera;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTickFromSequenceTickManager OnTickFromSequenceTickManager;
    
    UFUNCTION(BlueprintCallable)
    void PreloadEvtDialogueTime(UMovieSceneSequence* MovieSceneSequence, UMovieSceneSubSection* CurrentSubSceneSection);
    
    UFUNCTION(BlueprintCallable)
    void OnHighSpeed(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool IsCompletedLoadSoundAssets() const;
    AAtlEvtLevelSequenceActor(const FObjectInitializer& ObjectInitializer);
};

