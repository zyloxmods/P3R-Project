#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ApplicationWindowState.generated.h"

UCLASS(Blueprintable)
class XRD777_API AApplicationWindowState : public AActor {
    GENERATED_BODY()
public:
    AApplicationWindowState();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocusChangeBP(const bool IsFocus);
    
};

