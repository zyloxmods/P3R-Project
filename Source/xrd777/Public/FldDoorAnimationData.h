#pragma once
#include "CoreMinimal.h"
#include "FldDoorAnimationData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FFldDoorAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mActionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mWaitAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCharaMotionID;
    
    XRD777_API FFldDoorAnimationData();
};

