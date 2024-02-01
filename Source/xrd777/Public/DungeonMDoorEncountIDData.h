#pragma once
#include "CoreMinimal.h"
#include "DungeonMDoorEncountIDData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonMDoorEncountIDData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Minor00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Minor01;
    
    XRD777_API FDungeonMDoorEncountIDData();
};

