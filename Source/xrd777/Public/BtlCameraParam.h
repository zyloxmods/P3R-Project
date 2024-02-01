#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BtlCameraParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlCameraParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideOtherProcCylinderRatio;
    
    XRD777_API FBtlCameraParam();
};

