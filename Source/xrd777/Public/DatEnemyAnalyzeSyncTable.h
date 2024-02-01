#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatEnemyAnalyzeSyncDataRecord.h"
#include "DatEnemyAnalyzeSyncTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatEnemyAnalyzeSyncTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatEnemyAnalyzeSyncDataRecord> Data;
    
    UDatEnemyAnalyzeSyncTable();
};

