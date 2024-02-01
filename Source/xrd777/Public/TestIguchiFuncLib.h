#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestIguchiFuncLib.generated.h"

UCLASS(Blueprintable)
class XRD777_API UTestIguchiFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTestIguchiFuncLib();
    UFUNCTION(BlueprintCallable)
    static void StartReplaceCostumeID();
    
};

