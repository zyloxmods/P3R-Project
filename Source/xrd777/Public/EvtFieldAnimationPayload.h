#pragma once
#include "CoreMinimal.h"
#include "EvtFieldAnimationPayload.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FEvtFieldAnimationPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    FEvtFieldAnimationPayload();
};

