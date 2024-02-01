#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "VelvetRoomCardDataAsset.generated.h"

class UVelvetRoomCardTextureDataAsset;
class UVelvetRoomUnimDataAsset;

UCLASS(Blueprintable)
class XRD777_API UVelvetRoomCardDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVelvetRoomCardTextureDataAsset*> TextureDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVelvetRoomUnimDataAsset*> UnimDataAsset;
    
    UVelvetRoomCardDataAsset();
};

