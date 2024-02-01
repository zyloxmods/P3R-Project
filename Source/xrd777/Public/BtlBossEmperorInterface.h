#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlBossEmperorInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlBossEmperorInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlBossEmperorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StandingAlwaysWithPersona();
    
};

