#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatShuffleChoiceMajorArcanaDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleChoiceMajorArcanaDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ArcanaID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RankInPhase[8];
    
    XRD777_API FDatShuffleChoiceMajorArcanaDataTable();
};

