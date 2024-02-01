#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "EMobWalkStartState.h"
#include "MobWalkRoutePoint.h"
#include "MobWalkCharaBaseCore.generated.h"

class AActor;

UCLASS(Blueprintable)
class CHARACTERBASE_API AMobWalkCharaBaseCore : public ACharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mBpIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOpacityCore_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMobWalkRoutePoint> mPointList_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPointIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mStartLocation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWaitTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mFollowParent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mFollowRelativeLocation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMobWalkStartState mStartState_;
    
public:
    AMobWalkCharaBaseCore();
    UFUNCTION(BlueprintCallable)
    void SetWaitTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStartLocation(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetPointIndex(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacityCore(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowRelativeLocation(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowParent(AActor* InParent);
    
    UFUNCTION(BlueprintCallable)
    void SetBpIndex(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void InitPointList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStartLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointListMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMobWalkRoutePoint GetPointList_START() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMobWalkRoutePoint GetPointList_LAST() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMobWalkRoutePoint GetPointList(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpacityCore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFollowRelativeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFollowParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBpIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPointList(FMobWalkRoutePoint InPoint);
    
};

