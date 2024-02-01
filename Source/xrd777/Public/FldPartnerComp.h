#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppCharBaseCompDelegateDelegate.h"
#include "EFldPartnerBehavior.h"
#include "EFldPartnerState.h"
#include "FldCharSpeed.h"
#include "FldLocalActorComp.h"
#include "FldPartnerData.h"
#include "FldPlayerHolder.h"
#include "FldPartnerComp.generated.h"

class AFldPartnerController;
class UAppCharacterComp;
class UCharacterLipsyncAppComponent;
class UCharacterSimpleLipsAnimAppComponent;
class UFldCharPersonalMotionComp;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldPartnerComp : public UFldLocalActorComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharacterComp* AppCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterLipsyncAppComponent* LipComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSimpleLipsAnimAppComponent* SimpleLipComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldPartnerController* ControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPlayerHolder Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPartnerData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldCharSpeed SpeedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStandbyToFinish;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldPartnerState State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldPartnerState NextState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldPartnerBehavior Behavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldPartnerBehavior NextBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackingPointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TrackingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TrackingPlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AvoidLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharBaseCompDelegate UseRootMotionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharBaseCompDelegate EnableRootMotionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharBaseCompDelegate DisableRootMotionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharBaseCompDelegate SetSpeedThresholdDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharBaseCompDelegate EnableForceWaitPoseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharBaseCompDelegate DisableForceWaitPoseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharBaseCompDelegate SetSpeedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldCharPersonalMotionComp* PersonalMotionComp;
    
public:
    UFldPartnerComp();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWalkThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRunThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDashThreshold() const;
    
};

