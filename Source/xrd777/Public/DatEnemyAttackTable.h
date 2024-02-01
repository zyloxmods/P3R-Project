#pragma once
#include "CoreMinimal.h"
#include "DatEnemyAttackTable.generated.h"

USTRUCT(BlueprintType)
struct FDatEnemyAttackTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 attr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Hit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 power;
    
    XRD777_API FDatEnemyAttackTable();
};

