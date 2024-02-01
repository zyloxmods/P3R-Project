#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldDungeonTBoxPacDataTable.generated.h"

USTRUCT(BlueprintType)
struct FFldDungeonTBoxPacDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 pacID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 tboxID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Probability;
    
    XRD777_API FFldDungeonTBoxPacDataTable();
};

