#pragma once
#include "CoreMinimal.h"
#include "DatBtlCommonName.generated.h"

USTRUCT(BlueprintType)
struct FDatBtlCommonName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    XRD777_API FDatBtlCommonName();
};

