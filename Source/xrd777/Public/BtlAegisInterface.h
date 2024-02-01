#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BtlAegisInterface.generated.h"

UINTERFACE(Blueprintable)
class XRD777_API UBtlAegisInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IBtlAegisInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupOverheat(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupOrgiaWaitingEffect(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupOrgiaAttackEffect(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupOrgia(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOrgiaDeadEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearAllAegisEffect();
    
};

