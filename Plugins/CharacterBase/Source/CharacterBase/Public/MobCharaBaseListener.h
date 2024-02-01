#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MobCharaBaseListener.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMobCharaBaseListener : public UInterface {
    GENERATED_BODY()
};

class IMobCharaBaseListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMobChara(float DeltaTime);
    
};

