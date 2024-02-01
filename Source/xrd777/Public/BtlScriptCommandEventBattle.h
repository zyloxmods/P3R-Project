#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlScriptCommandEventBattle.generated.h"

UCLASS(Blueprintable)
class XRD777_API ABtlScriptCommandEventBattle : public AAppActor {
    GENERATED_BODY()
public:
    ABtlScriptCommandEventBattle();
    UFUNCTION(BlueprintCallable)
    void FieldBattleWait();
    
    UFUNCTION(BlueprintCallable)
    void FieldBattleSetup();
    
    UFUNCTION(BlueprintCallable)
    void FieldBattlePlay();
    
    UFUNCTION(BlueprintCallable)
    void FieldBattleLoad();
    
    UFUNCTION(BlueprintCallable)
    void FieldBattleInit();
    
    UFUNCTION(BlueprintCallable)
    void FieldBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void EventBattleWait();
    
    UFUNCTION(BlueprintCallable)
    void EventBattleSetup();
    
    UFUNCTION(BlueprintCallable)
    void EventBattlePlay();
    
    UFUNCTION(BlueprintCallable)
    void EventBattleLoad();
    
    UFUNCTION(BlueprintCallable)
    void EventBattleInit();
    
    UFUNCTION(BlueprintCallable)
    void EventBattleEventWait();
    
    UFUNCTION(BlueprintCallable)
    void EventBattleEventInit();
    
    UFUNCTION(BlueprintCallable)
    void EventBattleEnd();
    
};

