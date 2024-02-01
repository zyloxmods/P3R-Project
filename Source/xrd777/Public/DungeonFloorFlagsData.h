#pragma once
#include "CoreMinimal.h"
#include "DungeonAssignFlagsData.h"
#include "DungeonFloorFlagsData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonFloorFlagsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonAssignFlagsData> AssignFlagList;
    
    XRD777_API FDungeonFloorFlagsData();
};

