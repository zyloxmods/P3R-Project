#pragma once
#include "CoreMinimal.h"
#include "UtlBpObj.h"
#include "CldSchedulerBpObject.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCldSchedulerBpObject : public UUtlBpObj {
    GENERATED_BODY()
public:
    UCldSchedulerBpObject();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Shadow();
    
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

