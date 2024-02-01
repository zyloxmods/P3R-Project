#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlBossFortuneInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlBossFortuneInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlBossFortuneInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StrengthFlowerLoopEffectFadeout(float AnimTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FortuneFlowerLoopEffectFadeout(float AnimTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FortuneFlowerLoopEffectFadein(float AnimTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FortuneFadeout(float AnimTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FortuneFadein(float AnimTime);
    
};

