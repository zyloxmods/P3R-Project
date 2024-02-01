#pragma once
#include "CoreMinimal.h"
#include "CmpMenuBase.h"
#include "CmpCommu.generated.h"

class ACmpCommuModelController;
class AUICmpCommu;
class UAssetLoader;
class UTexture2D;

UCLASS(Blueprintable)
class XRD777_API UCmpCommu : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* pCommuBustupAry[28];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmpCommu* Actor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpCommuModelController* pModelController;
    
public:
    UCmpCommu();
};

