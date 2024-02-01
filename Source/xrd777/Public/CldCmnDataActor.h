#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "CldCmnDataActor.generated.h"

class UArcAsset;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ACldCmnDataActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mAssetLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArcAsset* mArcAsset_;
    
public:
    ACldCmnDataActor();
};

