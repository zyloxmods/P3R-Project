#pragma once
#include "CoreMinimal.h"
#include "GetUIParameter.generated.h"

class UAssetLoader;
class UUIParameterAsset;

USTRUCT(BlueprintType)
struct XRD777_API FGetUIParameter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIParameterAsset* ParameterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> ParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader;
    
public:
    FGetUIParameter();
};

