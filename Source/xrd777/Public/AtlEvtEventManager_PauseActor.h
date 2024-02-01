#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlEvtEventManager_PauseActorDelegateDelegate.h"
#include "EEvtManagerState.h"
#include "AtlEvtEventManager_PauseActor.generated.h"

class AAtlEvtEventManager;
class AUIBackLog;
class UEvtManagerStateBase;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AAtlEvtEventManager_PauseActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlEvtEventManager* OwnerManagerActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEvtManagerStateBase* CurrentAtlEventState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEvtManagerState, UEvtManagerStateBase*> AtlEventStates;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackLog* UIBackLogActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtEventManager_PauseActorDelegate OnFinishedBackLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtEventManager_PauseActorDelegate OnFinishedNetAnswer;
    
    AAtlEvtEventManager_PauseActor();
};

