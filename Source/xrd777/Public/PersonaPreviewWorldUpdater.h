#pragma once
#include "CoreMinimal.h"
#include "PreviewWorldUpdater.h"
#include "EPersonaStatusModelAnim.h"
#include "PersonaPreviewWorldUpdater.generated.h"

class AActor;

UCLASS(Blueprintable)
class APersonaPreviewWorldUpdater : public APreviewWorldUpdater {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
public:
    APersonaPreviewWorldUpdater();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimation(AActor* Actor, EPersonaStatusModelAnim Anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckPlayAnimation(AActor* Actor);
    
};

