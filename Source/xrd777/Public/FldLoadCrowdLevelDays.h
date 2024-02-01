#pragma once
#include "CoreMinimal.h"
#include "FldLoadCrowdLevelDays.generated.h"

USTRUCT(BlueprintType)
struct FFldLoadCrowdLevelDays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndDay;
    
    XRD777_API FFldLoadCrowdLevelDays();
};

