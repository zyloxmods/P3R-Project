#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "UISceneCapture.generated.h"

UCLASS(Blueprintable)
class XRD777_API AUISceneCapture : public ASceneCapture2D {
    GENERATED_BODY()
public:
    AUISceneCapture();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoopAnimationStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InAnimationStart();
    
};

