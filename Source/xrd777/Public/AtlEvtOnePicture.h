#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtlEvtOnePicture.generated.h"

class UAssetLoader;
class UEvtTextureForOnePicture;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class XRD777_API AAtlEvtOnePicture : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEvtTextureForOnePicture*> TextureArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader;
    
public:
    AAtlEvtOnePicture();
};

