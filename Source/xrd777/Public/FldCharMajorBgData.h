#pragma once
#include "CoreMinimal.h"
#include "FldCharMinorBgData.h"
#include "FldCharMajorBgData.generated.h"

USTRUCT(BlueprintType)
struct FFldCharMajorBgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFldCharMinorBgData> Minor;
    
    XRD777_API FFldCharMajorBgData();
};

