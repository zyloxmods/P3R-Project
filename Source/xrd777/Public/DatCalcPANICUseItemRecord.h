#pragma once
#include "CoreMinimal.h"
#include "DatCalcPANICUseItemRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatCalcPANICUseItemRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId;
    
    XRD777_API FDatCalcPANICUseItemRecord();
};

