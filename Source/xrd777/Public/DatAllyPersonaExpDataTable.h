#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatAllyPersonaExpDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatAllyPersonaExpDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Exp[98];
    
    XRD777_API FDatAllyPersonaExpDataTable();
};

