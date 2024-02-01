#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UmgDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class XRD777_API UUmgDialog : public UUserWidget {
    GENERATED_BODY()
public:
    UUmgDialog();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetEndFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamingTouch();
    
    UFUNCTION(BlueprintCallable)
    bool IsInputBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeScreenSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcScreenScale();
    
};

