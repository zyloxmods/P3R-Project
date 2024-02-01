#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatBtlCommon.generated.h"

class UAssetLoader;
class UDataAsset;

UCLASS(Blueprintable)
class XRD777_API UDatBtlCommon : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* TableCalcPANICDropItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* TableCalcPANICUseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* TableEncountEnemyBadPercent;
    
public:
    UDatBtlCommon();
};

