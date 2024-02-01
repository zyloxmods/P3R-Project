#pragma once
#include "CoreMinimal.h"
#include "FldCrowdWalkBpParam.h"
#include "FldCrowdWalkRouteParam.h"
#include "FldCrowdWalkRouteTimer.h"
#include "FldLocalActor.h"
#include "FldCrowdWalkManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class XRD777_API AFldCrowdWalkManager : public AFldLocalActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldCrowdWalkRouteTimer> mRouteTimers_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMinTimer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxTimer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldCrowdWalkRouteParam> mRouteParam_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldCrowdWalkBpParam> mMobBpList_;
    
    AFldCrowdWalkManager();
    UFUNCTION(BlueprintCallable)
    static void SaveMobWalkInitTable(UDataTable* InitTable);
    
};

