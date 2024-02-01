#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatEncount.generated.h"

class UAssetLoader;
class UDataAsset;

UCLASS(Blueprintable)
class XRD777_API UDatEncount : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* TableEncount;
    
public:
    UDatEncount();
};

