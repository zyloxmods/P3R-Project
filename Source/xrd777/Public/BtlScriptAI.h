#pragma once
#include "CoreMinimal.h"
#include "BtlAI.h"
#include "BtlScriptAI.generated.h"

class UAssetLoader;
class UBfAsset;

UCLASS(Blueprintable)
class XRD777_API ABtlScriptAI : public ABtlAI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* pBfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssetLoaded;
    
public:
    ABtlScriptAI();
};

