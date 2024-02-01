#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "ModelCaptureEnvironment.h"
#include "ModelCaptureLayoutItem.h"
#include "ModelCaptureLayoutDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UModelCaptureLayoutDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModelCaptureEnvironment Environment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModelCaptureLayoutItem> Data;
    
    UModelCaptureLayoutDataAsset();
};

