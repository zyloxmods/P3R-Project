#pragma once
#include "CoreMinimal.h"
#include "DungeonUIAlphaAnimData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUIAlphaAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    XRD777_API FDungeonUIAlphaAnimData();
};

