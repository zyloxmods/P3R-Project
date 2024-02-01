#pragma once
#include "CoreMinimal.h"
#include "RumbleParam.h"
#include "RumbleData.generated.h"

USTRUCT(BlueprintType)
struct FRumbleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRumbleParam Encount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRumbleParam PinchEncount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRumbleParam Broken;
    
    XRD777_API FRumbleData();
};

