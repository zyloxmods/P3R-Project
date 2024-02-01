#pragma once
#include "CoreMinimal.h"
#include "APCommandParam.h"
#include "APNopParam.generated.h"

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPNopParam : public FAPCommandParam {
    GENERATED_BODY()
public:
    FAPNopParam();
};

