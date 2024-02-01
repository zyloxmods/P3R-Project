#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AtlEvtPlayParameter.h"
#include "FinishedEvtSeqencerDelegateDelegate.h"
#include "AtlEvtSubsystemDraft.generated.h"

class UObject;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_AtlEvtSubsystemDraft : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedEvtSeqencerDelegate OnFinishedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalCount;
    
public:
    UDEPRECATED_AtlEvtSubsystemDraft();
    UFUNCTION(BlueprintCallable)
    void ResetGlobalCount();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void EvtPlay(const UObject* WorldContextObject, const FString& EvtName, const FAtlEvtPlayParameter& Param);
    
};

