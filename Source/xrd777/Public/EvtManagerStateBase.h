#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EvtManagerStateBase.generated.h"

class AAtlEvtEventManager_PauseActor;

UCLASS(Blueprintable, Transient)
class XRD777_API UEvtManagerStateBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlEvtEventManager_PauseActor* EvtPauseActor;
    
public:
    UEvtManagerStateBase();
};

