#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "CldSchedulerActor.generated.h"

class AUIVoiceConnect;
class AUtlProcActor;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ACldSchedulerActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIVoiceConnect* mVoiceConnect_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mAssetLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* mBpClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUtlProcActor* mProcActor_;
    
    ACldSchedulerActor();
    UFUNCTION(BlueprintCallable)
    void SetBpObjEnd();
    
};

