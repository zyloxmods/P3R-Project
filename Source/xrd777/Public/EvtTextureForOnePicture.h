#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EvtTextureForOnePicture.generated.h"

class UAssetLoader;
class UTexture2D;

UCLASS(Blueprintable)
class XRD777_API UEvtTextureForOnePicture : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader;
    
    UEvtTextureForOnePicture();
};

