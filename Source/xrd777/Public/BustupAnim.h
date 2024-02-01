#pragma once
#include "CoreMinimal.h"
#include "BustupAnim.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FBustupAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Random;
    
    FBustupAnim();
};

