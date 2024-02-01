#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DungeonUIDrawData.h"
#include "DungeonUIDrawDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUIDrawDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDungeonUIDrawData> DrawData;
    
    XRD777_API FDungeonUIDrawDataTable();
};

