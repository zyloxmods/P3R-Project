#pragma once
#include "CoreMinimal.h"
#include "UAppCharFootstepsLabel.h"
#include "UAppCharFootstepsMajor.generated.h"

USTRUCT(BlueprintType)
struct FUAppCharFootstepsMajor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUAppCharFootstepsLabel> Minor;
    
    XRD777_API FUAppCharFootstepsMajor();
};

