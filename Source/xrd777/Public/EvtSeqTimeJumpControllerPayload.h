#pragma once
#include "CoreMinimal.h"
#include "EEvtSeqTimeJumpControllerOperation.h"
#include "EvtSeqTimeJumpControllerPayload.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FEvtSeqTimeJumpControllerPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtSeqTimeJumpControllerOperation Operation;
    
    FEvtSeqTimeJumpControllerPayload();
};

