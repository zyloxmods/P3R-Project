#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UICombineCalcFunction.generated.h"

UCLASS(Blueprintable)
class XRD777_API UUICombineCalcFunction : public UObject {
    GENERATED_BODY()
public:
    UUICombineCalcFunction();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSuccessionIncense(int32 IncenseParam, int32 SuccessionParam, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNormalSpreadLevel(int32 LevelA, int32 LevelB);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetFoolAccidentLevel(int32 PlayerLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBookDrawOut(int32 power, int32 Magic, int32 Endurance, int32 Quick, int32 Luck, int32 CommuLevel, int32 MaxSkillLevel);
    
};

