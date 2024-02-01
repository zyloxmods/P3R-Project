#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatEnemyDataRecord.h"
#include "DatEnemyTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatEnemyTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatEnemyDataRecord> Data;
    
    UDatEnemyTable();
};

