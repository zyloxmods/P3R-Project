#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlBossHangedManInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlBossHangedManInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlBossHangedManInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeoutStatueEffect(float AnimTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeoutHangedManEffect(float AnimTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeinHangedManEffect(float AnimTime);
    
};

