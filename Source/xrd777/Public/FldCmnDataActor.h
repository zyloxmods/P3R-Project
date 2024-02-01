#pragma once
#include "CoreMinimal.h"
#include "FldLocalActor.h"
#include "FldCmnDataActor.generated.h"

class UArcAsset;
class UAssetLoader;
class UFldCommonData;

UCLASS(Blueprintable)
class XRD777_API AFldCmnDataActor : public AFldLocalActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFldCommonData* mParent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mAssetLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArcAsset* mArcAsset_;
    
public:
    AFldCmnDataActor();
};

