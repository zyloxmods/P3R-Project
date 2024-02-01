#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatShuffleCommonCoefficientArcanaDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleCommonCoefficientArcanaDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    XRD777_API FDatShuffleCommonCoefficientArcanaDataTable();
};

