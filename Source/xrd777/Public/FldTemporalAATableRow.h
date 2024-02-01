#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldTemporalAATableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldTemporalAATableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldMajorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldMinorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SamplesValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameWeight;
    
    XRD777_API FFldTemporalAATableRow();
};

