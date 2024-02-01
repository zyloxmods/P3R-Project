#pragma once
#include "CoreMinimal.h"
#include "FldCharSpeed.h"
#include "FldCharMinorBgData.generated.h"

USTRUCT(BlueprintType)
struct FFldCharMinorBgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldCharSpeed Speed;
    
    XRD777_API FFldCharMinorBgData();
};

