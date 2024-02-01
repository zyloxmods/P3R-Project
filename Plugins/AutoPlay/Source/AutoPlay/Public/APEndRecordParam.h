#pragma once
#include "CoreMinimal.h"
#include "APCommandParam.h"
#include "APEndRecordParam.generated.h"

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPEndRecordParam : public FAPCommandParam {
    GENERATED_BODY()
public:
    FAPEndRecordParam();
};

