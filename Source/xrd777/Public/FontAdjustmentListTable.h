#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "FontAdjustmentList.h"
#include "FontAdjustmentListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFontAdjustmentListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFontAdjustmentList> Data;
    
    UFontAdjustmentListTable();
};

