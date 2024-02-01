#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOneAnimType.h"
#include "CampParamTableHologRow.generated.h"

USTRUCT(BlueprintType)
struct FCampParamTableHologRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOneAnimType HologAnimType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HologTransFrame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HologTransWait;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HologColorWait;
    
    XRD777_API FCampParamTableHologRow();
};

