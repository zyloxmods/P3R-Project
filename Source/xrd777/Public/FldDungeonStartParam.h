#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FldDungeonStartParam.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFldDungeonStartParam : public UObject {
    GENERATED_BODY()
public:
    UFldDungeonStartParam();
    UFUNCTION(BlueprintCallable)
    static void SetStartParam(int32 major, int32 Minor, int32 idx, bool bScript);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckStartParam();
    
};

