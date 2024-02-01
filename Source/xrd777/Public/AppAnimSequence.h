#pragma once
#include "CoreMinimal.h"
#include "AppAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct XRD777_API FAppAnimSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* pAnimSequence;
    
    FAppAnimSequence();
};

