#pragma once
#include "CoreMinimal.h"
#include "APCommandParam.h"
#include "APStartRecordParam.generated.h"

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPStartRecordParam : public FAPCommandParam {
    GENERATED_BODY()
public:
    FAPStartRecordParam();
};

