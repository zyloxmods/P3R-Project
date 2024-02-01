#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "UITestSpawnActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AUITestSpawnActor : public AAppActor {
    GENERATED_BODY()
public:
    AUITestSpawnActor();
    UFUNCTION(BlueprintCallable)
    void VelvetRoomUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SpawnVelvetRoom();
    
    UFUNCTION(BlueprintCallable)
    void SpawnTownMap();
    
    UFUNCTION(BlueprintCallable)
    void SpawnMoney();
    
    UFUNCTION(BlueprintCallable)
    void SpawnDungeon();
    
    UFUNCTION(BlueprintCallable)
    void SpawnCommunity();
    
    UFUNCTION(BlueprintCallable)
    void SpawnBattle();
    
    UFUNCTION(BlueprintCallable)
    void SpawnAlwayField();
    
    UFUNCTION(BlueprintCallable)
    void MoneyUpdate();
    
    UFUNCTION(BlueprintCallable)
    void DungeonUpdate();
    
    UFUNCTION(BlueprintCallable)
    void CommunityUpdate();
    
    UFUNCTION(BlueprintCallable)
    void AlwayFieldUpdate(float DeltaTime);
    
};

