#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatDefineTable.generated.h"

USTRUCT(BlueprintType)
struct FDatDefineTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    XRD777_API FDatDefineTable();
};

