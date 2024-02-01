#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DungeonSoundDataAssets.generated.h"

class UAssetLoader;
class UDataAsset;

UCLASS(Blueprintable)
class XRD777_API UDungeonSoundDataAssets : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* pDlcDungeonBgm;
    
public:
    UDungeonSoundDataAssets();
};

