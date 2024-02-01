#pragma once
#include "CoreMinimal.h"
#include "UAppCharFootstepsLabel.generated.h"

USTRUCT(BlueprintType)
struct FUAppCharFootstepsLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Run;
    
    XRD777_API FUAppCharFootstepsLabel();
};

