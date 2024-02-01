#pragma once
#include "CoreMinimal.h"
#include "GenSelItemLineupItem.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FGenSelItemLineupItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VisibleFlag;
    
    FGenSelItemLineupItem();
};

