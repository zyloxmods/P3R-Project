#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "VelvetRoomCardTextureDataAsset.generated.h"

class UTexture;

UCLASS(Blueprintable)
class XRD777_API UVelvetRoomCardTextureDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> Textures;
    
    UVelvetRoomCardTextureDataAsset();
};

