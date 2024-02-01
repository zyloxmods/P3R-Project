#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "AppActor.h"
#include "AtlEvtEventManagerMovieSceneOperator.h"
#include "EEventManagerEventRank.h"
#include "EEventManagerMessageState.h"
#include "EEventManagerSeqControllerState.h"
#include "Templates/SubclassOf.h"
#include "AtlEvtEventManager.generated.h"

class AActor;
class AAtlEvtEventManager_PauseActor;
class AScrActor;
class AUIBackLog;
class AUIVoiceAnswer;
class UAtlEvtMoviePlayManager;
class UBfAsset;
class UBmdAsset;
class UEventSkipWidgetDelegate;
class UMovieSceneSequencePlayer;

UCLASS(Blueprintable)
class XRD777_API AAtlEvtEventManager : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* FieldCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MovieSceneCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventManagerEventRank EventRank;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventSkipWidgetDelegate* EventSkipWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventSkipWidgetDelegate> EventSkipWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtEventManagerMovieSceneOperator MovieSceneOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* mpBmdAsset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> MsgUniqIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BmdAssetMsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExecutingMessageNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventManagerMessageState MessageState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScrActor* ScrActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackLog* UIBackLogActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIVoiceAnswer* UINetAnswerActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequencePlayer* EventSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestedSeqClosedEventMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventManagerSeqControllerState SeqControllerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlEvtEventManager_PauseActor* PauseControllerActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlEvtMoviePlayManager* MoviePlayManager;
    
public:
    AAtlEvtEventManager();
    UFUNCTION(BlueprintCallable)
    void SetLocalData(int32 Index, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void ResumeEventSequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAtlScr(int32 ExitType);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventRankA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void ForcedStopScript();
    
    UFUNCTION(BlueprintCallable)
    void ForcedRemoveMessage();
    
    UFUNCTION(BlueprintCallable)
    void ForceClick(FKey Key, TEnumAsByte<EInputEvent> EventType);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 ExecuteSelectScript();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecuteScript(UBfAsset* InAsset, int32 InProcNo, bool bUseBmdAssetInBfAsset, UBmdAsset* InBmdAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 ExecuteMsgScript();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecuteMessageWithSelect(UBmdAsset* InAsset, int32 InMessageNo, int32 InSelectNo, int32 InSelectResponceToLocalDataID, int32 InSeqEventMessageID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteMessage(UBmdAsset* InAsset, int32 InMessageNo, int32 InEventMessageID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteBmdMessageWithSelect(UBmdAsset* InAsset, int32 InMessageMajorID, int32 InMessageMinorID, int32 InMessageSubID, int32 InMessagePageID, int32 InSelectMessageMajorID, int32 InSelectMessageMinorID, int32 InSelectMessageSubID, int32 InSelectResponceToLocalDataID, bool bInEnableMessageRef, int32 InEventMessageID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteBmdMessageSubtitleWithSelect(UBmdAsset* InAsset, int32 InMessageMajorID, int32 InMessageMinorID, int32 InMessageSubID, int32 InMessagePageID, int32 InDrawFrame, int32 InSelectMessageMajorID, int32 InSelectMessageMinorID, int32 InSelectMessageSubID, int32 InSelectResponceToLocalDataID, bool bInEnableMessageRef, int32 InSeqEventMessageID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteBmdMessageSubtitleSelect(UBmdAsset* InAsset, int32 InSelectMessageMajorID, int32 InSelectMessageMinorID, int32 InSelectMessageSubID, int32 InSelectResponceToLocalDataID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteBmdMessageSubtitle(UBmdAsset* InAsset, int32 InMessageMajorID, int32 InMessageMinorID, int32 InMessageSubID, int32 InMessagePageID, int32 InDrawFrame, bool bInEnableMessageRef, int32 InSeqEventMessageID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteBmdMessage(UBmdAsset* InAsset, int32 InMessageMajorID, int32 InMessageMinorID, int32 InMessageSubID, int32 InMessagePageID, bool bInEnableMessageRef, int32 InSeqEventMessageID);
    
    UFUNCTION(BlueprintCallable)
    void CloseMessage();
    
    UFUNCTION(BlueprintCallable)
    void BackLogFinishDelegte();
    
    UFUNCTION(BlueprintCallable)
    void AtlEvt_ResumeEventSequencer();
    
};

