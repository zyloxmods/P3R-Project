#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UniqCoefficientRow.generated.h"

USTRUCT(BlueprintType)
struct FUniqCoefficientRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Coefficient;
    
    XRD777_API FUniqCoefficientRow();
};

