#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlEvtLightScenarioDelegateDelegate.h"
#include "AtlEvtLightScenarioUnloader.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class AAtlEvtLightScenarioUnloader : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtLightScenarioDelegate OnUnloadCompletedDelegate;
    
    AAtlEvtLightScenarioUnloader();
    UFUNCTION(BlueprintCallable)
    void OnUnloadCompleted();
    
};

