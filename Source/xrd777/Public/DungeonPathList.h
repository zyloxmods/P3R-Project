#pragma once
#include "CoreMinimal.h"
#include "DungeonPathData.h"
#include "DungeonPathList.generated.h"

USTRUCT(BlueprintType)
struct FDungeonPathList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonPathData> PathData;
    
    XRD777_API FDungeonPathList();
};

