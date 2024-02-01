#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyWidget_CustomEventDelegate.h"
#include "EventSkipWidgetDelegate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class XRD777_API UEventSkipWidgetDelegate : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMyWidget_CustomEvent OnEventDispather;
    
public:
    UEventSkipWidgetDelegate();
    UFUNCTION(BlueprintCallable)
    void CallDelegate(bool InSetEffect);
    
};

