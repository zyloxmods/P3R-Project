#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatRaceDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatRaceDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    XRD777_API FDatRaceDataTable();
};

