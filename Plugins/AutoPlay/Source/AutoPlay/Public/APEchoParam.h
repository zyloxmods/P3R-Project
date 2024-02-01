#pragma once
#include "CoreMinimal.h"
#include "APCommandParam.h"
#include "APEchoParam.generated.h"

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPEchoParam : public FAPCommandParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    FAPEchoParam();
};

