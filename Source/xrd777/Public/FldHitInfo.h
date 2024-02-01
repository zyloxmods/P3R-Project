#pragma once
#include "CoreMinimal.h"
#include "FldHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FFldHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mArcanaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCmmLevel;
    
    XRD777_API FFldHitInfo();
};

