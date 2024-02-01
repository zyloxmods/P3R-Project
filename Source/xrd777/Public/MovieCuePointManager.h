#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MovieCuePointManager.generated.h"

class UAssetLoader;
class UBmdAsset;

UCLASS(Blueprintable)
class XRD777_API UMovieCuePointManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* BmdAsset;
    
public:
    UMovieCuePointManager();
};

