#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatNameTable.generated.h"

USTRUCT(BlueprintType)
struct FDatNameTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    XRD777_API FDatNameTable();
};

