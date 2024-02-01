#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldDungeonTBoxTypeDataTable.generated.h"

USTRUCT(BlueprintType)
struct FFldDungeonTBoxTypeDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 rareMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 rareMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 jewelryMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 jewelryMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 primFieldMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 primFieldMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal1Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal1Max;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal2Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal2Max;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal3Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal3Max;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal4Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal4Max;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal5Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal5Max;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal6Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal6Max;
    
    XRD777_API FFldDungeonTBoxTypeDataTable();
};

