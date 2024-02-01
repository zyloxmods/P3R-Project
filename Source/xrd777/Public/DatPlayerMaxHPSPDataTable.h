#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatPlayerMaxHPSPDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatPlayerMaxHPSPDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxHp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxSp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    XRD777_API FDatPlayerMaxHPSPDataTable();
};

