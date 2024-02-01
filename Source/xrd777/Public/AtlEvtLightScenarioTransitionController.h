#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlEvtLightScenarioDelegateDelegate.h"
#include "AtlEvtLightScenarioSublevelParam.h"
#include "AtlEvtLightScenarioTransitionController.generated.h"

class AAtlEvtLightScenarioLoader;
class AAtlEvtLightScenarioUnloader;
class UAssetLoader;

UCLASS(Blueprintable)
class AAtlEvtLightScenarioTransitionController : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtLightScenarioDelegate OnUnloadCompletedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtLightScenarioSublevelParam> LightScenarioSublevelParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlEvtLightScenarioLoader* LoaderActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlEvtLightScenarioUnloader* UnloaderActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
public:
    AAtlEvtLightScenarioTransitionController();
    UFUNCTION(BlueprintCallable)
    void TransitionLightScenario(int32 InNextLightScenarioIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllLightScenarioParam();
    
    UFUNCTION(BlueprintCallable)
    void OnUnloadFinished(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadFinished(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedPreload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoingTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLightScenarioNum() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddLightScenario(FName LevelName);
    
};

