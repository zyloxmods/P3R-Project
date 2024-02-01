#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlBossNyxAvatarInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlBossNyxAvatarInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlBossNyxAvatarInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleWeaponEffect(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFeatherAnim(float AnimSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeoutWeaponEffect(float AnimSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeoutFeatherAnim(float AnimSeconds);
    
};

