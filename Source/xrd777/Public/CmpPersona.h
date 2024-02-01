#pragma once
#include "CoreMinimal.h"
#include "CmpMenuBase.h"
#include "CmpPersona.generated.h"

class AUICmpPersona;
class UAssetLoader;
class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable)
class XRD777_API UCmpPersona : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pDynaMateWaveCausticsAry[24];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* pTexArcanaWordAry[24];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmpPersona* Actor_;
    
public:
    UCmpPersona();
};

