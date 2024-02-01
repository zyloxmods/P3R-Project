#pragma once
#include "CoreMinimal.h"
#include "EEvtSeqControllerOperation.h"
#include "EvtSeqControllerPayload.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FEvtSeqControllerPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtSeqControllerOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClosedEventMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpToSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextTransitionLightScenarioIndex;
    
    FEvtSeqControllerPayload();
};

