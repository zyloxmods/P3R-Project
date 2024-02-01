#pragma once
#include "CoreMinimal.h"
#include "DatEnemyItemTable.h"
#include "DatCalcPANICDropItemRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatCalcPANICDropItemRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable Item[5];
    
    XRD777_API FDatCalcPANICDropItemRecord();
};

