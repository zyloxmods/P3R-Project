#pragma once
#include "CoreMinimal.h"
#include "DungeonAssignFlagsData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonAssignFlagsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlagName;
    
    XRD777_API FDungeonAssignFlagsData();
};

