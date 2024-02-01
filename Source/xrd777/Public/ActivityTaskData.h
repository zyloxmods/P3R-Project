#pragma once
#include "CoreMinimal.h"
#include "ActivityTaskData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FActivityTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndFloorNo;
    
    FActivityTaskData();
};

