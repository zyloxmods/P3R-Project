#pragma once
#include "CoreMinimal.h"
#include "DungeonPartOpenInfoData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonPartOpenInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectPartOpenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeparatelyNextFloorOpenNum;
    
    XRD777_API FDungeonPartOpenInfoData();
};

