#pragma once
#include "CoreMinimal.h"
#include "UtlProcActor.h"
#include "CldSchedulerProcActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API ACldSchedulerProcActor : public AUtlProcActor {
    GENERATED_BODY()
public:
    ACldSchedulerProcActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShadowTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PM();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Noon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Night();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Morning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Midnight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EarlyMorning();
    
public:
    UFUNCTION(BlueprintCallable)
    void CallNextTime();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AM();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfterSchool();
    
};

