#pragma once
#include "CoreMinimal.h"
#include "DatEnemyItemTable.generated.h"

USTRUCT(BlueprintType)
struct FDatEnemyItemTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 prob;
    
    XRD777_API FDatEnemyItemTable();
};

