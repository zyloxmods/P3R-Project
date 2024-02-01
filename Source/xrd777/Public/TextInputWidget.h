#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextInputWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class XRD777_API UTextInputWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTextInputWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawLetterBoxDirHeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeScreenSize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetText();
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeInputTextPositionRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeInputTextPositionLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcScreenScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcLetterBoxSize(float InTmpScreenSize);
    
};

