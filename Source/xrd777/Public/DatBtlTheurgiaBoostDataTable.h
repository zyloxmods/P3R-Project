#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatBtlTheurgiaBoostDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatBtlTheurgiaBoostDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Value[10];
    
    XRD777_API FDatBtlTheurgiaBoostDataTable();
};

