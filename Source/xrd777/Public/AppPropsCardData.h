#pragma once
#include "CoreMinimal.h"
#include "AppPropsCardParam.h"
#include "AppPropsCardData.generated.h"

class AAppPropsCore;

USTRUCT(BlueprintType)
struct FAppPropsCardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppPropsCardParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppPropsCore* Card;
    
    XRD777_API FAppPropsCardData();
};

