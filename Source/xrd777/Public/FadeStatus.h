#pragma once
#include "CoreMinimal.h"
#include "FadeStatus.generated.h"

class UFadeProgramBase;

USTRUCT(BlueprintType)
struct FFadeStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFadeProgramBase* program;
    
    XRD777_API FFadeStatus();
};

