#pragma once
#include "CoreMinimal.h"
#include "GenSelDrawInfo.generated.h"

class UGenericSelectSystemBase;

USTRUCT(BlueprintType)
struct XRD777_API FGenSelDrawInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericSelectSystemBase* System;
    
    FGenSelDrawInfo();
};

