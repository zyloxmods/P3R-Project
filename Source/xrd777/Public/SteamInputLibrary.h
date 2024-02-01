#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESteamControllerType.h"
#include "SteamInputLibrary.generated.h"

UCLASS(Blueprintable)
class XRD777_API USteamInputLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamInputLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_RightUp();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_RightRight();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_RightLeft();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_RightDown();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_R3();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_R2();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_R1();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_LeftUp();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_LeftRight();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_LeftLeft();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_LeftDown();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_L3();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_L2();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputPadPress_L1();
    
    UFUNCTION(BlueprintCallable)
    static bool SteamInputInitialize();
    
    UFUNCTION(BlueprintCallable)
    static void SteamInitializeLanguage();
    
    UFUNCTION(BlueprintCallable)
    static ESteamControllerType GetInputTypeName(int32 nIndex);
    
};

