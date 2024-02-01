#pragma once
#include "CoreMinimal.h"
#include "APCommandParam.h"
#include "APSlowMotionParam.generated.h"

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPSlowMotionParam : public FAPCommandParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    FAPSlowMotionParam();
};

