#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMobWalkTargetType.h"
#include "MobWalkRoutePoint.generated.h"

USTRUCT(BlueprintType)
struct FMobWalkRoutePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMobWalkTargetType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mTransform;
    
    CHARACTERBASE_API FMobWalkRoutePoint();
};

