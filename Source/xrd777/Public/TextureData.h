#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "TextureData.generated.h"

class USprAsset;
class UTexture;

UCLASS(Blueprintable)
class XRD777_API ATextureData : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* Sprite;
    
    ATextureData();
};

