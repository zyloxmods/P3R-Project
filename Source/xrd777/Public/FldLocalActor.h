#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldLocalActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldLocalActor : public AAppActor {
    GENERATED_BODY()
public:
    AFldLocalActor();
    UFUNCTION(BlueprintCallable)
    void CallStatePatternEndDelicate();
    
};

