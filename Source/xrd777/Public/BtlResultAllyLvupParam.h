#pragma once
#include "CoreMinimal.h"
#include "BtlResultAllyLvupParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultAllyLvupParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLevelUp;
    
    XRD777_API FBtlResultAllyLvupParam();
};

