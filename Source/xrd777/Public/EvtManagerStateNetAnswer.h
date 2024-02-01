#pragma once
#include "CoreMinimal.h"
#include "EvtManagerStateBase.h"
#include "EvtManagerStateNetAnswer.generated.h"

class AUIVoiceAnswer;

UCLASS(Blueprintable, NonTransient)
class XRD777_API UEvtManagerStateNetAnswer : public UEvtManagerStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIVoiceAnswer* UINetAnswerActor;
    
public:
    UEvtManagerStateNetAnswer();
private:
    UFUNCTION(BlueprintCallable)
    void OnNetAnswerFinishDelegte();
    
};

