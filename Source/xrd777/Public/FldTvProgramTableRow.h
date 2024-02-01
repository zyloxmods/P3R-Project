#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldTvProgramTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldTvProgramTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcID;
    
    XRD777_API FFldTvProgramTableRow();
};

