#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_UIPaint.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBFL_UIPaint : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFL_UIPaint();
private:
    UFUNCTION(BlueprintCallable)
    static void DrawTest();
    
};

