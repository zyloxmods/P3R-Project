#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DungeonUIPosAnimData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUIPosAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsPos;
    
    XRD777_API FDungeonUIPosAnimData();
};

