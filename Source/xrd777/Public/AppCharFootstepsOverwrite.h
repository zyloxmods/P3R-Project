#pragma once
#include "CoreMinimal.h"
#include "UAppCharFootstepsLabel.h"
#include "AppCharFootstepsOverwrite.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAppCharFootstepsOverwrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mOverwriteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUAppCharFootstepsLabel mLable;
    
    XRD777_API FAppCharFootstepsOverwrite();
};

