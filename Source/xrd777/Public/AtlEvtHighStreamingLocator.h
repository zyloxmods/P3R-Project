#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AtlEvtHighStreamingLocator.generated.h"

UCLASS(Blueprintable)
class XRD777_API AAtlEvtHighStreamingLocator : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighStreamingLocatorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    AAtlEvtHighStreamingLocator();
    UFUNCTION(BlueprintCallable)
    void SetEnableHighStreaming(bool bEnable);
    
};

