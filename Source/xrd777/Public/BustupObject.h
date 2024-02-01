#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BustupObject.generated.h"

class UAssetLoader;
class UBustupAnimDataAsset;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USupportBustupDataAsset;
class UTexture;

UCLASS(Blueprintable)
class XRD777_API UBustupObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BaseMaterial_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DrawableMaterial_[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* BaseTex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ShadowMask_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* RimLightMask_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* EyeTex_[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* MouthTex_[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* BlushTex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* SweatTex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* BaseMask_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* DropMask_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupAnimDataAsset* BustupAnim_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USupportBustupDataAsset* SupportBustupOffset_;
    
public:
    UBustupObject();
};

