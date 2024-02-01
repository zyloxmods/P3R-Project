#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AppActorComponent.h"
#include "AtlEvtNiagaraSystemPool.h"
#include "EAnimPackID.h"
#include "EAppCharShoesID.h"
#include "EAtlEvtHandwritingType.h"
#include "EAtlEvtLocomotionTeleportVelocityType.h"
#include "EEvtConditionalBranchCompType.h"
#include "AtlEvtActorComponent.generated.h"

class AActor;
class ACharacter;
class AHandwritingSpawner;
class ANpcBaseCore;
class UAppCharBaseComp;
class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UAtlEvtActorComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachPropActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EAtlEvtLocomotionTeleportVelocityType LocomotionTeleportVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LocomotionTeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector LocomotionTeleportVelocityConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D LocomotionTeleportVelocityClampMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LipUniqueID;
    
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> HandwritingComp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHandwritingSpawner> HandwritingSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANpcBaseCore* OwnerNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharBaseComp* AppCharaBaseComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtNiagaraSystemPool EvtNiagaraSystemPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPackID OverrideAnimPackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAtlEvtLocomotionVelocitySimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAtlEvtBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharShoesID ShoesID;
    
public:
    UAtlEvtActorComponent();
    UFUNCTION(BlueprintCallable)
    AHandwritingSpawner* SpawnHandwritingAttachedDefaultParam(EAtlEvtHandwritingType Type, bool bAttached);
    
    UFUNCTION(BlueprintCallable)
    AHandwritingSpawner* SpawnHandwritingAttached(EAtlEvtHandwritingType Type, int32 LoopCount, float CameraOffset, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, bool bAttached);
    
    UFUNCTION(BlueprintCallable)
    void SetUseAnimPack(bool bInUseAnimPack);
    
    UFUNCTION(BlueprintCallable)
    void SetupHeroBag();
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimPack();
    
    UFUNCTION(BlueprintCallable)
    void SetShoesId(EAppCharShoesID ID);
    
    UFUNCTION(BlueprintCallable)
    void SetOverwriteDettachPropTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAnimPackID(EAnimPackID InAnimPackID);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotionTeleportVelocityType(EAtlEvtLocomotionTeleportVelocityType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBag(bool bInEnableAtlEvtBag);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAtlEvtLocomotionVelocitySimulation(bool bInEnableAtlEvtLocomotionVelocitySimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachPropActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetVelocitySimulateParam();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseAnimPack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLocomotionVelocitySimulate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableBag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAppCharShoesID GetShoesID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAtlEvtLocomotionTeleportVelocityType GetLocomotionTeleportVelocityType() const;
    
    UFUNCTION(BlueprintCallable)
    void CompareToHiddenCharacter(int32 LocalDataIndex, int32 ConditionalValue, EEvtConditionalBranchCompType CompareType);
    
    UFUNCTION(BlueprintCallable)
    void ClearAttachPropActor();
    
    UFUNCTION(BlueprintCallable)
    FVector CalcEvtLocomotionTeleportVelocity(const FVector& SimVelocity, const FVector& PrevSimVelocity, float VelocityRate);
    
};

