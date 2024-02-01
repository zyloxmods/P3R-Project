#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DungeonPartVariationData.h"
#include "DungeonPartVariationDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FDungeonPartVariationDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonPartVariationData> VarNoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonPartVariationData> FixedVarNoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonPartVariationData> MonadVarNoList;
    
    XRD777_API FDungeonPartVariationDataTableRow();
};

