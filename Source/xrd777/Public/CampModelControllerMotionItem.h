#pragma once
#include "CoreMinimal.h"
#include "CampModelControllerMotionItem.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct XRD777_API FCampModelControllerMotionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* pAnimSequence;
    
    FCampModelControllerMotionItem();
};

