#pragma once
#include "CoreMinimal.h"
#include "APCommandParam.h"
#include "APScreenShotParam.generated.h"

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPScreenShotParam : public FAPCommandParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FAPScreenShotParam();
};

