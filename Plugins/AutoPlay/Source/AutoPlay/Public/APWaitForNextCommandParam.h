#pragma once
#include "CoreMinimal.h"
#include "APCommandParam.h"
#include "APWaitForNextCommandParam.generated.h"

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPWaitForNextCommandParam : public FAPCommandParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float time_limit;
    
    FAPWaitForNextCommandParam();
};

