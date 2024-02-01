#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlEvtLightScenarioDelegateDelegate.h"
#include "AtlEvtLightScenarioLoader.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class AAtlEvtLightScenarioLoader : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtLightScenarioDelegate OnLoadCompletedDelegate;
    
    AAtlEvtLightScenarioLoader();
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleted();
    
};

