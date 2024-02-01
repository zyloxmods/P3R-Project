#pragma once
#include "CoreMinimal.h"
#include "BustupAnim.h"
#include "BustupMouthAnim.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FBustupMouthAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBustupAnim> Anim;
    
    FBustupMouthAnim();
};

