#pragma once
#include "CoreMinimal.h"
#include "APCommandLog.generated.h"

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPCommandLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FAPCommandLog();
};

