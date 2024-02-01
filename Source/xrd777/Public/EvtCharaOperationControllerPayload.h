#pragma once
#include "CoreMinimal.h"
#include "EEvtCharaOperationFootStepLabelType.h"
#include "EEvtCharaOperationType.h"
#include "EvtCharaOperationControllerPayload.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FEvtCharaOperationControllerPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtCharaOperationType OperationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtCharaOperationFootStepLabelType FootStepLabelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootStepLabelName;
    
    FEvtCharaOperationControllerPayload();
};

