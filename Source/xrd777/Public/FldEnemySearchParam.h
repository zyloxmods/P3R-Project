#pragma once
#include "CoreMinimal.h"
#include "FldEnemySearchParam.generated.h"

USTRUCT(BlueprintType)
struct FFldEnemySearchParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    XRD777_API FFldEnemySearchParam();
};

