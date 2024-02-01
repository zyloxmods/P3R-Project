#pragma once
#include "CoreMinimal.h"
#include "EFldCrowdRoutePtn.h"
#include "FldCrowdWalkRouteTimer.generated.h"

USTRUCT(BlueprintType)
struct FFldCrowdWalkRouteTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLoopTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldCrowdRoutePtn mRoutePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mPointList;
    
    XRD777_API FFldCrowdWalkRouteTimer();
};

