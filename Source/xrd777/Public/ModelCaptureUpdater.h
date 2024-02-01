#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "ModelCaptureUpdater.generated.h"

class AActor;
class APreviewWorldUpdater;
class UAssetLoader;
class UMaterialParameterCollection;
class UObject;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AModelCaptureUpdater : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APreviewWorldUpdater* PreviewWorldUpdater_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* LightSource_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* BlueprintClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
public:
    AModelCaptureUpdater();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSetTargetActor(AActor* AActor);
    
};

