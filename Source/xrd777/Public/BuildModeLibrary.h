#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuildModeLibrary.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBuildModeLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildModeLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebug();
    
};

