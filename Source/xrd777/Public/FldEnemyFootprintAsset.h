#pragma once
#include "CoreMinimal.h"
#include "FldEnemyFootprintAsset.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FFldEnemyFootprintAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Normal;
    
    XRD777_API FFldEnemyFootprintAsset();
};

