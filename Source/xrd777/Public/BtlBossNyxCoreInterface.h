#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlBossNyxCoreInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlBossNyxCoreInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlBossNyxCoreInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadHeroAnimationForNyxCore();
    
};

