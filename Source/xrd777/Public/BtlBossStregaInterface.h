#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlBossStregaInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlBossStregaInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlBossStregaInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTakayaTheurgiaMode(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayJinDrugLoopEffect(bool isFadeIn, float FadeTime);
    
};

