#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BtlCalcCameraPosParam.h"
#include "BtlCalcCameraData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FBtlCalcCameraData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlCalcCameraPosParam Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlCalcCameraPosParam Goal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RefleshEachFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    XRD777_API FBtlCalcCameraData();
};

