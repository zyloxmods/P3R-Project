#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TitleLogoActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API ATitleLogoActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeInFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeOutFrame;
    
    ATitleLogoActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlpha();
    
};

