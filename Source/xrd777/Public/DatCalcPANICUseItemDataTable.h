#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatCalcPANICUseItemDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatCalcPANICUseItemDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId;
    
    XRD777_API FDatCalcPANICUseItemDataTable();
};

