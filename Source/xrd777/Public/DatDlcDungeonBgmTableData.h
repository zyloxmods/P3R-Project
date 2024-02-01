#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatDlcDungeonBgmTableData.generated.h"

USTRUCT(BlueprintType)
struct FDatDlcDungeonBgmTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BandleID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SerialNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Title;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CueId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ControlNumber;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Sort;
    
    XRD777_API FDatDlcDungeonBgmTableData();
};

