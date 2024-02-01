#pragma once
#include "CoreMinimal.h"
#include "EFldCrowdRoutePtn.h"
#include "FldCrowdWalkRouteParam.generated.h"

USTRUCT(BlueprintType)
struct FFldCrowdWalkRouteParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldCrowdRoutePtn mRoutePattern_;
    
    XRD777_API FFldCrowdWalkRouteParam();
};

