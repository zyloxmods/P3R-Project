#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FadePgBattleEventWipeActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFadePgBattleEventWipeActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimation;
    
    AFadePgBattleEventWipeActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestFadeOutForBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestFadeInForBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawForBP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeleteForBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateForBP();
    
};

