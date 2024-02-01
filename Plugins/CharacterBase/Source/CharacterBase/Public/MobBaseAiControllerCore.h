#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "MobWalkRoutePoint.h"
#include "MobBaseAiControllerCore.generated.h"

class AMobWalkCharaBaseCore;

UCLASS(Blueprintable)
class CHARACTERBASE_API AMobBaseAiControllerCore : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTurnSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWalkMaxSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWalkStopTurnSpeedRatio_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWalkInterpTurnSpeedMIN_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWalkInterpTurnSpeedMAX_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mShiftDirectionDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mShiftDirectionMinInterpSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mShiftDirectionMaxInterpSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mShiftDirectionTimeOut_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFollowWarpDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDeleteInterval_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDeleteMoveMin_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDeleteTime_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMobWalkCharaBaseCore* mOwnerActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mNowDeltaTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mAnimeRatio_;
    
public:
    AMobBaseAiControllerCore();
    UFUNCTION(BlueprintCallable)
    void UpdateProc(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateActorBlueprint(float WalkSpeedRatio, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartAiCtrl();
    
    UFUNCTION(BlueprintCallable)
    void SetPointIndex(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ReStartAiCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMobWalkRoutePoint GetRoutePointNOW() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMobWalkRoutePoint GetRoutePointNEXT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointIndexLAST();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMobWalkCharaBaseCore* GetOwnerActor() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPointIndex(int32 Value);
    
};

