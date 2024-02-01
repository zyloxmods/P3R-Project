#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatTheurgia.generated.h"

class UAssetLoader;
class UBmdAsset;
class UDataAsset;

UCLASS(Blueprintable)
class XRD777_API UDatTheurgia : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* TableTheurgiaBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* TableTheurgiaBoostBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* TableMixraidRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* TheurgiaFlavorText;
    
public:
    UDatTheurgia();
};

