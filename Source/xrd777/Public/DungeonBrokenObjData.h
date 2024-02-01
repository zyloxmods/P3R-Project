#pragma once
#include "CoreMinimal.h"
#include "DungeonBrokenObjData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonBrokenObjData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FragmentProbability;
    
    XRD777_API FDungeonBrokenObjData();
};

