#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DungeonFloorFlagsData.h"
#include "DungeonFloorFlagsDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FDungeonFloorFlagsDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonFloorFlagsData> Data;
    
    XRD777_API FDungeonFloorFlagsDataTableRow();
};

