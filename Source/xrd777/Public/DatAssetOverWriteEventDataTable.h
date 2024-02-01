#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatAssetOverWriteEventDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatAssetOverWriteEventDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Minor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ProcNo;
    
    XRD777_API FDatAssetOverWriteEventDataTable();
};

