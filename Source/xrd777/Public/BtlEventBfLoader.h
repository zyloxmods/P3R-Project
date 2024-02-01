#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlEventBfLoader.generated.h"

class UAssetLoader;
class UBfAsset;
class UBmdAsset;

UCLASS(Blueprintable)
class XRD777_API ABtlEventBfLoader : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* pBfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* pBmdAsset;
    
public:
    ABtlEventBfLoader();
};

