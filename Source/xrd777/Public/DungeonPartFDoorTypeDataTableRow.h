#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DungeonPartVariationData.h"
#include "DungeonPartFDoorTypeDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FDungeonPartFDoorTypeDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonPartVariationData> TypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VarNo;
    
    XRD777_API FDungeonPartFDoorTypeDataTableRow();
};

