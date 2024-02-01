#pragma once
#include "CoreMinimal.h"
#include "EvtManagerStateBase.h"
#include "EvtManagerStateBacklog.generated.h"

class AUIBackLog;

UCLASS(Blueprintable, NonTransient)
class XRD777_API UEvtManagerStateBacklog : public UEvtManagerStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackLog* UIBackLogActor;
    
public:
    UEvtManagerStateBacklog();
private:
    UFUNCTION(BlueprintCallable)
    void OnBackLogFinishDelegte();
    
};

