#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFLBtlManager.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBFLBtlManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFLBtlManager();
    UFUNCTION(BlueprintCallable)
    static void MarkAsBattleMainSetup();
    
    UFUNCTION(BlueprintCallable)
    static void MarkAsBattleCoreSetup();
    
    UFUNCTION(BlueprintCallable)
    static void ClearBattleManagerSetupFlags();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBattleMainLoaded();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBattleCoreLoaded();
    
};

