#pragma once
#include "CoreMinimal.h"
#include "DungeonFloorFlagsIDData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonFloorFlagsIDData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    XRD777_API FDungeonFloorFlagsIDData();
};

