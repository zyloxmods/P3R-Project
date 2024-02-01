#pragma once
#include "CoreMinimal.h"
#include "FldDungeonGameBase.h"
#include "FldDungeonGameInit.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonGameInit : public AFldDungeonGameBase {
    GENERATED_BODY()
public:
    AFldDungeonGameInit();
    UFUNCTION(BlueprintCallable)
    void NAVMESH_LOAD_WAIT();
    
    UFUNCTION(BlueprintCallable)
    void LOAD_WAIT_LEVEL();
    
    UFUNCTION(BlueprintCallable)
    void LOAD_START();
    
    UFUNCTION(BlueprintCallable)
    void INIT_FLOOR_LEVEL();
    
    UFUNCTION(BlueprintCallable)
    void INIT_FIXED_FLOOR();
    
    UFUNCTION(BlueprintCallable)
    void INIT_END();
    
    UFUNCTION(BlueprintCallable)
    void INIT_DESIGIN_MAP();
    
    UFUNCTION(BlueprintCallable)
    void FloorInit();
    
    UFUNCTION(BlueprintCallable)
    void DungeonInit();
    
    UFUNCTION(BlueprintCallable)
    void CREATE_LAYOUT();
    
    UFUNCTION(BlueprintCallable)
    void CREATE_END();
    
    UFUNCTION(BlueprintCallable)
    void ATTACH_OBJ_WAIT();
    
    UFUNCTION(BlueprintCallable)
    void ADVANCE_PROCESS_WAIT();
    
    UFUNCTION(BlueprintCallable)
    void ADVANCE_PROCESS();
    
    UFUNCTION(BlueprintCallable)
    void ADVANCE_LOAD();
    
};

