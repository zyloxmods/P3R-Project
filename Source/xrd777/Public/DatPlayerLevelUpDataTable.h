#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatPlayerLevelUpDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatPlayerLevelUpDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Exp;
    
    XRD777_API FDatPlayerLevelUpDataTable();
};

