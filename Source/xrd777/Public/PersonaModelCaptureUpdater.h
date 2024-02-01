#pragma once
#include "CoreMinimal.h"
#include "ModelCaptureUpdater.h"
#include "PersonaModelCaptureUpdater.generated.h"

class UModelCaptureLayoutDataAsset;

UCLASS(Blueprintable)
class APersonaModelCaptureUpdater : public AModelCaptureUpdater {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UModelCaptureLayoutDataAsset*> DataAssets_;
    
public:
    APersonaModelCaptureUpdater();
};

