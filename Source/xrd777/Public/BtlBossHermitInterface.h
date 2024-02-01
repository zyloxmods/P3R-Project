#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlBossHermitInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlBossHermitInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlBossHermitInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleChargeStartEffect(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleChargeEffectFromLevel(bool Visible, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleChargeEffect(bool Visible, bool StrongEffect);
    
};

