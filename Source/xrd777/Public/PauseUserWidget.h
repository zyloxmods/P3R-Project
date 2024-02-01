#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class XRD777_API UPauseUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickEvenWhenPaused;
    
    UPauseUserWidget();
    UFUNCTION(BlueprintCallable)
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    bool GetTickableWhenPaused();
    
};

