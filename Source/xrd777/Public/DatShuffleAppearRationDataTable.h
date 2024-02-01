#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatShuffleAppearRationDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleAppearRationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prob;
    
    XRD777_API FDatShuffleAppearRationDataTable();
};

