#pragma once
#include "CoreMinimal.h"
#include "MobWalkRoutePoint.h"
#include "UObject/NoExportTypes.h"
#include "FldCrowdWalkInitActorData.generated.h"

USTRUCT(BlueprintType)
struct FFldCrowdWalkInitActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BpIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMobWalkRoutePoint> PointArray;
    
    XRD777_API FFldCrowdWalkInitActorData();
};

