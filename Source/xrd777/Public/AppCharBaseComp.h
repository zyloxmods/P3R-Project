#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AppCharBaseCompDelegateDelegate.h"
#include "AppCharTransparency.h"
#include "EAnimPackID.h"
#include "EAppCharAnimSlot.h"
#include "EAppCharBagAnimType.h"
#include "EAppCharCategoryType.h"
#include "EAppCharFaceAnimID.h"
#include "EAppCharState.h"
#include "EAppCharWeaponType.h"
#include "AppCharBaseComp.generated.h"

class AActor;
class AAppCharWeaponBase;
class AAppPropsCore;
class UAnimMontage;
class UAnimSequenceBase;
class UAppCharAnimDataAsset;
class UAppCharFaceAnimDataAsset;
class UAppCharFootstepsAtom;
class UMaterialInterface;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UAppCharBaseComp : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mMotionAttached_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mMotionAttachedSocketName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mMotionAttachedTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mMotionDetachPrepared_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionDetachPreparedTransKeep_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionDetachPreparedRelativeTrans_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator mMotionDetachPreparedRelativeRotator_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mMotionDetachPreparedRelativeLocation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFadeType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFadeFrame_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFadePattern_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDelayPauseAnimReq_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDelayPauseAnimFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDelayPauseAnimSpeedRate_;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAppPropsCore> mBagClassPtr_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mBagAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mBagAnimSlotName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAppCharBagAnimType, UAnimSequenceBase*> mBagAnims_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppPropsCore* mBagActor_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLockedLookAt_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 mLockedLookAtType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mLockedLookAtSpeed_;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CostumeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HairMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharFootstepsAtom* FootstepsAtom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage_DefaultSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage_FacialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage_NeckSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage_TurnSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage_HavBagSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharCategoryType CategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPackID AnimPackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharAnimDataAsset* AnimPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharFaceAnimDataAsset* FaceAnimPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAppCharWeaponBase*> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBagEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShoesID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransparencyEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharTransparency Transparency;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharBaseCompDelegate ResetIkDelegate;
    
public:
    UAppCharBaseComp();
    UFUNCTION(BlueprintCallable)
    void StopTurnAnimation(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopNeckAnimation(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopHaveBagAnimation(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopFaceAnimation(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAnim_DefaultSlot(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponType(const EAppCharWeaponType& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponId(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetupHaveBag_AfterSetCostume();
    
    UFUNCTION(BlueprintCallable)
    void SetShoesId(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetShoes(const bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionAttachedActorCore(AActor* AttachedActor, FName AttachedSocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionAttachedActor(AActor* AttachedActor);
    
    UFUNCTION(BlueprintCallable)
    void SetIndexID(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeSettingFromMotion(int32 FadeType, int32 FadeFrame, int32 FadePattern);
    
    UFUNCTION(BlueprintCallable)
    void SetCostumeID(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCostume();
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryID(EAppCharCategoryType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBag(const bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimPackID(EAnimPackID Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimMontageDefaultSlot(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void ResetIK();
    
    UFUNCTION(BlueprintCallable)
    void RequestPauseAnimFromMotionIMD(bool IsLookAt);
    
    UFUNCTION(BlueprintCallable)
    void RequestLoadWeapons();
    
    UFUNCTION(BlueprintCallable)
    void RequestDelayPauseAnimFromMotion();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayTurnAnimation(int32 AnimIndex, const bool IsLoop, const float InBlendInTime, const float InBlendOutTime, const float InPlayRate, const float InBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayNeckAnimation(int32 AnimIndex, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayHaveBagAnimation(EAppCharBagAnimType AnimType, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayFaceAnimIndex(int32 AnimIndex, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayFaceAnimation(EAppCharFaceAnimID FaceAnimID, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnimBagSlot_Pack(const int32 AnimId, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationPackMotionAttachedProps(int32 InAnimePackIndex, const int32 InPlayType, const float InBlendInTime, const float InBlendOutTime, const float InPlayRate, FName InAnimSlotName);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnim_TurnSlot(const UAnimSequenceBase* Anim, const bool IsLoop, const float InBlendInTime, const float InBlendOutTime, const float InPlayRate, const float InBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnim_Pack(const int32 ID, const bool Loop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnim_NeckSlot(const UAnimSequenceBase* Anim, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnim_HaveBagSlot(const UAnimSequenceBase* Anim, const FName& SetSlotName, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnim_FacialSlot(const UAnimSequenceBase* Anim, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnim_DefaultSlot(const UAnimSequenceBase* Anim, const bool Loop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnim(const UAnimSequenceBase* Anim, const EAppCharAnimSlot Slot, const bool Loop, const float BlendInTime, const float BlendOutTime, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PauseAnim(bool bPause, UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteTransformMotionAttachedActor(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void Movement(const FVector Location, const float Speed);
    
    UFUNCTION(BlueprintCallable)
    bool IsTurnAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayAnim_DefaultSlot();
    
    UFUNCTION(BlueprintCallable)
    bool IsNeckAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadWeapons();
    
    UFUNCTION(BlueprintCallable)
    bool IsDelayPauseAnimFromMotion();
    
    UFUNCTION(BlueprintCallable)
    bool IsCostumeChenged();
    
    UFUNCTION(BlueprintCallable)
    bool IsBag();
    
    UFUNCTION(BlueprintCallable)
    TArray<AAppCharWeaponBase*> GetWeapons();
    
    UFUNCTION(BlueprintCallable)
    bool GetWeaponEnable();
    
    UFUNCTION(BlueprintCallable)
    AAppCharWeaponBase* GetWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetHairMesh() const;
    
    UFUNCTION(BlueprintCallable)
    UAppCharFootstepsAtom* GetFootstepsAtom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetFaceMesh() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AAppCharWeaponBase*> GetEffectWeapons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCostumeMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostumeID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAppCharCategoryType GetCategoryID() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<AAppPropsCore> GetBagClassPtr();
    
    UFUNCTION(BlueprintCallable)
    FName GetBagAttachSocketName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimPackID GetAnimPackID() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetAnimMontageDefaultSlot();
    
    UFUNCTION(BlueprintCallable)
    TArray<UMaterialInterface*> GetAllMaterial();
    
    UFUNCTION(BlueprintCallable)
    void ClearDelayPauseAnimFromMotion();
    
};

