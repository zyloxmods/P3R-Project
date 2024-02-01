#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatShufflePersonaArcanaDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatShufflePersonaArcanaDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RankID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PersonaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 prob;
    
    XRD777_API FDatShufflePersonaArcanaDataTable();
};

