#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "CampSceneCapture.generated.h"

UCLASS(Blueprintable)
class XRD777_API ACampSceneCapture : public ASceneCapture2D {
    GENERATED_BODY()
public:
    ACampSceneCapture();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoopAnimationStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InAnimationStart();
    
};

