#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GenSelItemLineupTable.generated.h"

USTRUCT(BlueprintType)
struct FGenSelItemLineupTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VisibleFlag;
    
    XRD777_API FGenSelItemLineupTable();
};

