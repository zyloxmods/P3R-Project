#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FldCharAreaParam.generated.h"

USTRUCT(BlueprintType)
struct FFldCharAreaParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    XRD777_API FFldCharAreaParam();
};

