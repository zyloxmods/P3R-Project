#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UIDrawGamerTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class XRD777_API UUIDrawGamerTag : public UUserWidget {
    GENERATED_BODY()
public:
    UUIDrawGamerTag();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScale(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNameText(const FString& nameText);
    
    UFUNCTION(BlueprintCallable)
    void DebugOnDestroy();
    
};

