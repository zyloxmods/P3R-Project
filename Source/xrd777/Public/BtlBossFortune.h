#pragma once
#include "CoreMinimal.h"
#include "BtlBoss.h"
#include "BtlBossFortune.generated.h"

class UBtlCoreComponent;

UCLASS(Blueprintable)
class XRD777_API UBtlBossFortune : public UBtlBoss {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlCoreComponent* pSavedCore;
    
public:
    UBtlBossFortune();
private:
    UFUNCTION(BlueprintCallable)
    void ProcAfterReturnRoulette();
    
};

