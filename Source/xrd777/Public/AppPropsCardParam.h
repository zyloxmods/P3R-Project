#pragma once
#include "CoreMinimal.h"
#include "EAppPropsCardType.h"
#include "AppPropsCardParam.generated.h"

USTRUCT(BlueprintType)
struct FAppPropsCardParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppPropsCardType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    XRD777_API FAppPropsCardParam();
};

