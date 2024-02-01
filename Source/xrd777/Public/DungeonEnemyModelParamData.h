#pragma once
#include "CoreMinimal.h"
#include "DungeonEnemyModelParamData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonEnemyModelParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleZ;
    
    XRD777_API FDungeonEnemyModelParamData();
};

