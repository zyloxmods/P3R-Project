#pragma once
#include "CoreMinimal.h"
#include "UIDrawBaseActor.h"
#include "TheurgiaDraw.generated.h"

UCLASS(Blueprintable)
class XRD777_API ATheurgiaDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    ATheurgiaDraw();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTimes(const float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrsorIndex(int32 No);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenSkillHelp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTheurgiaListMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTheurgiaCursorIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DrawTheurgiaName(float X, float Y, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DrawTheurgiaHelp(float X, float Y, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DrawRiseTrend(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void DrawCharaName(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void DrawCharacteristicName(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void DrawCharacteristicHelp(float X, float Y);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSkillHelp();
    
};

