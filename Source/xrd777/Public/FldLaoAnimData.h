#pragma once
#include "CoreMinimal.h"
#include "FldLaoAnimData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FFldLaoAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mAsset;
    
    XRD777_API FFldLaoAnimData();
};

