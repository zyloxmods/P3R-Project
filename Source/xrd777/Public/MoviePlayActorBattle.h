#pragma once
#include "CoreMinimal.h"
#include "MoviePlayActorBase.h"
#include "MoviePlayActorBattle.generated.h"

class AMoviePlayActorBattle;

UCLASS(Blueprintable)
class XRD777_API AMoviePlayActorBattle : public AMoviePlayActorBase {
    GENERATED_BODY()
public:
    AMoviePlayActorBattle();
    UFUNCTION(BlueprintCallable)
    static bool SyncBattleMovieInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestStopperForBP(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRemoveMaterialsForBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaterialStartForBP();
    
    UFUNCTION(BlueprintCallable)
    static AMoviePlayActorBattle* GetBattleMovieInstance();
    
    UFUNCTION(BlueprintCallable)
    static void CreateBattleMovieInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckPrepareForBP();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBattleMovieInstance();
    
};

