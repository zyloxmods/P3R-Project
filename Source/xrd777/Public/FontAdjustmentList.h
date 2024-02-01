#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FontAdjustmentList.generated.h"

USTRUCT(BlueprintType)
struct FFontAdjustmentList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Left_Adjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Right_Adjustment;
    
    XRD777_API FFontAdjustmentList();
};

