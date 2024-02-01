#pragma once
#include "CoreMinimal.h"
#include "DungeonEnemyModelIDData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonEnemyModelIDData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 majorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 minorId;
    
    XRD777_API FDungeonEnemyModelIDData();
};

