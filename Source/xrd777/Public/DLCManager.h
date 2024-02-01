#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "DLCManager.generated.h"

class UAddContentEntitlementDataAsset;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ADLCManager : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAddContentEntitlementDataAsset* mAddContentEntitlementData;
    
public:
    ADLCManager();
};

