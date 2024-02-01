#pragma once
#include "CoreMinimal.h"
#include "DatEnemyAnalyzeSyncDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatEnemyAnalyzeSyncDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID[10];
    
    XRD777_API FDatEnemyAnalyzeSyncDataRecord();
};

