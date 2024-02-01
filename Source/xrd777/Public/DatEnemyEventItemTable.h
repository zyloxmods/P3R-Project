#pragma once
#include "CoreMinimal.h"
#include "DatEnemyEventItemTable.generated.h"

USTRUCT(BlueprintType)
struct FDatEnemyEventItemTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Event;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 prob;
    
    XRD777_API FDatEnemyEventItemTable();
};

