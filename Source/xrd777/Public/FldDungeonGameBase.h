#pragma once
#include "CoreMinimal.h"
#include "FldDungeonBase.h"
#include "FldDungeonGameBase.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonGameBase : public AFldDungeonBase {
    GENERATED_BODY()
public:
    AFldDungeonGameBase();
    UFUNCTION(BlueprintCallable)
    void NotifyLevelUnLoadedNavMesh();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelUnLoadedMap();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelUnLoadedEnv();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelLoadedNavMesh();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelLoadedFloorBase();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelLoadedFloor();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelLoadedFixedFloor();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelLoadedEnvironment();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelLoadedDesignMap();
    
};

