#pragma once
#include "CoreMinimal.h"
#include "AppCharTransparency.generated.h"

USTRUCT(BlueprintType)
struct FAppCharTransparency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLarge;
    
    XRD777_API FAppCharTransparency();
};

