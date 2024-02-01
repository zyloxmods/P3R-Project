#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UmgDebugLogWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class XRD777_API UUmgDebugLogWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UUmgDebugLogWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& InText);
    
};

