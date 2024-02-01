#pragma once
#include "CoreMinimal.h"
#include "FldDungeonGameInit.h"
#include "FldDungeonGame.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonGame : public AFldDungeonGameInit {
    GENERATED_BODY()
public:
    AFldDungeonGame();
    UFUNCTION(BlueprintCallable)
    bool IsBattle();
    
    UFUNCTION(BlueprintCallable)
    void ForceEncount();
    
    UFUNCTION(BlueprintCallable)
    void BattleSync();
    
};

