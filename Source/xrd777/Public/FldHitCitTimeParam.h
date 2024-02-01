#pragma once
#include "CoreMinimal.h"
#include "FldHitCitTimeParam.generated.h"

USTRUCT(BlueprintType)
struct FFldHitCitTimeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxTime;
    
    XRD777_API FFldHitCitTimeParam();
};

