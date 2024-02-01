#pragma once
#include "CoreMinimal.h"
#include "GenSelItemLineupItem.h"
#include "GenSelItemLineup.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FGenSelItemLineup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenSelItemLineupItem> Data;
    
    FGenSelItemLineup();
};

