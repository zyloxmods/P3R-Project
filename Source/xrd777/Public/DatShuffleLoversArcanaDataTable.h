#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatShuffleLoversArcanaDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleLoversArcanaDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 CommuBonus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LoversBonus;
    
    XRD777_API FDatShuffleLoversArcanaDataTable();
};

