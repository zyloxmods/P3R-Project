#pragma once
#include "CoreMinimal.h"
#include "UAppCharFootstepsCue.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FUAppCharFootstepsCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Common;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, USoundAtomCue*> Costume;
    
    XRD777_API FUAppCharFootstepsCue();
};

