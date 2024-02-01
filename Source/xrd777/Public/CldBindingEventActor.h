#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "CldBindingData.h"
#include "CldBindingEventActor.generated.h"

class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ACldBindingEventActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mAssetLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCldBindingData> mBindList_;
    
public:
    ACldBindingEventActor();
    UFUNCTION(BlueprintCallable)
    void CallStatePatternEndDelicate();
    
};

