#pragma once
#include "CoreMinimal.h"
#include "BtlBoss.h"
#include "BtlBossPriestess.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlBossPriestess : public UBtlBoss {
    GENERATED_BODY()
public:
    UBtlBossPriestess();
    UFUNCTION(BlueprintCallable)
    void TimeoverEventEndCallback();
    
};

