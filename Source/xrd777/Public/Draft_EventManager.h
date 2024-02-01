#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEventManagerMessageState.h"
#include "EEventManagerSeqControllerState.h"
#include "EvtLocalData.h"
#include "Draft_EventManager.generated.h"

class UBmdAsset;
class UMovieSceneSequencePlayer;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class XRD777_API ADEPRECATED_Draft_EventManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* mpBmdAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExecutingMessageNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventManagerMessageState MessageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequencePlayer* EventSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestedSeqClosedEventMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventManagerSeqControllerState SeqControllerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvtLocalData EvtLocalData;
    
public:
    ADEPRECATED_Draft_EventManager();
    UFUNCTION(BlueprintCallable)
    void SetLocalData(int32 Index, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void ResumeEventSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void ForcedRemoveMessage();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 ExecuteSelectScript();
    
    UFUNCTION(BlueprintCallable)
    int32 ExecuteMsgScript();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecuteMessageWithSelect(UBmdAsset* InAsset, int32 InMessageNo, int32 InSelectNo, int32 InEventMessageID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteMessage(UBmdAsset* InAsset, int32 InMessageNo, int32 InEventMessageID);
    
    UFUNCTION(BlueprintCallable)
    void CloseMessage();
    
};

