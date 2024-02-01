#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CampParamTableRow.generated.h"

USTRUCT(BlueprintType)
struct FCampParamTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Dummy;
    
    XRD777_API FCampParamTableRow();
};

