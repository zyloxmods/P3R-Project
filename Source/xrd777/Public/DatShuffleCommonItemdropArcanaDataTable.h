#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatShuffleCommonItemdropArcanaDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleCommonItemdropArcanaDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RankID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Num;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 prob;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ItemtID;
    
    XRD777_API FDatShuffleCommonItemdropArcanaDataTable();
};

