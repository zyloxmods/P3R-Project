#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GeneralCoefficientRow.generated.h"

USTRUCT(BlueprintType)
struct FGeneralCoefficientRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Coefficient;
    
    XRD777_API FGeneralCoefficientRow();
};

