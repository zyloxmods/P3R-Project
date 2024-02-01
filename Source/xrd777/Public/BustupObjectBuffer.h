#pragma once
#include "CoreMinimal.h"
#include "BustupObjectBuffer.generated.h"

class UBustupObject;

USTRUCT(BlueprintType)
struct FBustupObjectBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupObject* BustupObject;
    
    XRD777_API FBustupObjectBuffer();
};

