#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatShuffleCoinArcanaDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleCoinArcanaDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Max;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Min;
    
    XRD777_API FDatShuffleCoinArcanaDataTable();
};

