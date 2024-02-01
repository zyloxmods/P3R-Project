#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatShuffleCommonRationDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleCommonRationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    XRD777_API FDatShuffleCommonRationDataTable();
};

