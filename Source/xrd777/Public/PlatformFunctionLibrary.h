#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlatformName.h"
#include "PlatformFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class XRD777_API UPlatformFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlatformFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static EPlatformName Platform();
    
    UFUNCTION(BlueprintCallable)
    static float GetFPS();
    
};

