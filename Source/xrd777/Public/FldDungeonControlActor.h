#pragma once
#include "CoreMinimal.h"
#include "FldDungeonGame.h"
#include "FldDungeonControlActor.generated.h"

class AFldDungeonControlActor;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonControlActor : public AFldDungeonGame {
    GENERATED_BODY()
public:
    AFldDungeonControlActor();
    UFUNCTION(BlueprintCallable)
    static void SetNextFieldFloor();
    
    UFUNCTION(BlueprintCallable)
    static void SetField(int32 major, int32 Minor, int32 idx);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExist();
    
    UFUNCTION(BlueprintCallable)
    static void Delete();
    
    UFUNCTION(BlueprintCallable)
    static void DebugSetPrevFieldFloor();
    
    UFUNCTION(BlueprintCallable)
    static void DebugSetNextFieldFloor();
    
    UFUNCTION(BlueprintCallable)
    static AFldDungeonControlActor* Create();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckReady();
    
};

