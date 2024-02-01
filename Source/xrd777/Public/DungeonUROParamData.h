#pragma once
#include "CoreMinimal.h"
#include "DungeonUROParamData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUROParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ThresholdSizeList;
    
    XRD777_API FDungeonUROParamData();
};

