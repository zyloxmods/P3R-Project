#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatEncountEnemyBadPercentRecord.h"
#include "DatEncountEnemyBadPercentTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatEncountEnemyBadPercentTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatEncountEnemyBadPercentRecord> Data;
    
    UDatEncountEnemyBadPercentTable();
};

