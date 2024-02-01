#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "UIClearSaveActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AUIClearSaveActor : public AAppActor {
    GENERATED_BODY()
public:
    AUIClearSaveActor();
    UFUNCTION(BlueprintCallable)
    void CallStatePatternEndDelicate();
    
};

