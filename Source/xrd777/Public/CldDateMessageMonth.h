#pragma once
#include "CoreMinimal.h"
#include "CldDateMessage.h"
#include "CldDateMessageMonth.generated.h"

USTRUCT(BlueprintType)
struct FCldDateMessageMonth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCldDateMessage> Data;
    
    XRD777_API FCldDateMessageMonth();
};

