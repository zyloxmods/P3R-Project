#include "AppCharBaseComp.h"

void UAppCharBaseComp::StopTurnAnimation(float InBlendOutTime) {
}

void UAppCharBaseComp::StopNeckAnimation(float InBlendOutTime) {
}

void UAppCharBaseComp::StopHaveBagAnimation(float InBlendOutTime) {
}

void UAppCharBaseComp::StopFaceAnimation(float InBlendOutTime) {
}

void UAppCharBaseComp::StopAnim_DefaultSlot(float InBlendOutTime) {
}

void UAppCharBaseComp::SetWeaponType(const EAppCharWeaponType& Value) {
}

void UAppCharBaseComp::SetWeaponId(int32 Value) {
}

void UAppCharBaseComp::SetupHaveBag_AfterSetCostume() {
}

void UAppCharBaseComp::SetShoesId(const int32 ID) {
}

void UAppCharBaseComp::SetShoes(const bool Enable) {
}

void UAppCharBaseComp::SetMotionAttachedActorCore(AActor* AttachedActor, FName AttachedSocketName) {
}

void UAppCharBaseComp::SetMotionAttachedActor(AActor* AttachedActor) {
}

void UAppCharBaseComp::SetIndexID(int32 Value) {
}

void UAppCharBaseComp::SetFadeSettingFromMotion(int32 FadeType, int32 FadeFrame, int32 FadePattern) {
}

void UAppCharBaseComp::SetCostumeID(int32 Value) {
}

void UAppCharBaseComp::SetCostume() {
}

void UAppCharBaseComp::SetCategoryID(EAppCharCategoryType Value) {
}

void UAppCharBaseComp::SetBag(const bool Enable) {
}

void UAppCharBaseComp::SetAnimPackID(EAnimPackID Value) {
}

void UAppCharBaseComp::SetAnimMontageDefaultSlot(UAnimMontage* AnimMontage) {
}

void UAppCharBaseComp::ResetIK() {
}

void UAppCharBaseComp::RequestPauseAnimFromMotionIMD(bool IsLookAt) {
}

void UAppCharBaseComp::RequestLoadWeapons() {
}

void UAppCharBaseComp::RequestDelayPauseAnimFromMotion() {
}

UAnimMontage* UAppCharBaseComp::PlayTurnAnimation(int32 AnimIndex, const bool IsLoop, const float InBlendInTime, const float InBlendOutTime, const float InPlayRate, const float InBlendWeight) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayNeckAnimation(int32 AnimIndex, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayHaveBagAnimation(EAppCharBagAnimType AnimType, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayFaceAnimIndex(int32 AnimIndex, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayFaceAnimation(EAppCharFaceAnimID FaceAnimID, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayAnimBagSlot_Pack(const int32 AnimId, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

void UAppCharBaseComp::PlayAnimationPackMotionAttachedProps(int32 InAnimePackIndex, const int32 InPlayType, const float InBlendInTime, const float InBlendOutTime, const float InPlayRate, FName InAnimSlotName) {
}

UAnimMontage* UAppCharBaseComp::PlayAnim_TurnSlot(const UAnimSequenceBase* Anim, const bool IsLoop, const float InBlendInTime, const float InBlendOutTime, const float InPlayRate, const float InBlendWeight) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayAnim_Pack(const int32 ID, const bool Loop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayAnim_NeckSlot(const UAnimSequenceBase* Anim, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayAnim_HaveBagSlot(const UAnimSequenceBase* Anim, const FName& SetSlotName, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayAnim_FacialSlot(const UAnimSequenceBase* Anim, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayAnim_DefaultSlot(const UAnimSequenceBase* Anim, const bool Loop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

UAnimMontage* UAppCharBaseComp::PlayAnim(const UAnimSequenceBase* Anim, const EAppCharAnimSlot Slot, const bool Loop, const float BlendInTime, const float BlendOutTime, const float InPlayRate) {
    return NULL;
}

void UAppCharBaseComp::PauseAnim(bool bPause, UAnimMontage* InMontage) {
}

void UAppCharBaseComp::OverwriteTransformMotionAttachedActor(FTransform Transform) {
}

void UAppCharBaseComp::Movement(const FVector Location, const float Speed) {
}

bool UAppCharBaseComp::IsTurnAnimation() {
    return false;
}

bool UAppCharBaseComp::IsPlayAnim_DefaultSlot() {
    return false;
}

bool UAppCharBaseComp::IsNeckAnimation() {
    return false;
}

bool UAppCharBaseComp::IsLoadWeapons() {
    return false;
}

bool UAppCharBaseComp::IsDelayPauseAnimFromMotion() {
    return false;
}

bool UAppCharBaseComp::IsCostumeChenged() {
    return false;
}

bool UAppCharBaseComp::IsBag() {
    return false;
}

TArray<AAppCharWeaponBase*> UAppCharBaseComp::GetWeapons() {
    return TArray<AAppCharWeaponBase*>();
}

bool UAppCharBaseComp::GetWeaponEnable() {
    return false;
}

AAppCharWeaponBase* UAppCharBaseComp::GetWeapon() {
    return NULL;
}

USkeletalMeshComponent* UAppCharBaseComp::GetMesh() const {
    return NULL;
}

int32 UAppCharBaseComp::GetIndexID() const {
    return 0;
}

USkeletalMeshComponent* UAppCharBaseComp::GetHairMesh() const {
    return NULL;
}

UAppCharFootstepsAtom* UAppCharBaseComp::GetFootstepsAtom() {
    return NULL;
}

USkeletalMeshComponent* UAppCharBaseComp::GetFaceMesh() const {
    return NULL;
}

TArray<AAppCharWeaponBase*> UAppCharBaseComp::GetEffectWeapons() {
    return TArray<AAppCharWeaponBase*>();
}

USkeletalMeshComponent* UAppCharBaseComp::GetCostumeMesh() const {
    return NULL;
}

int32 UAppCharBaseComp::GetCostumeID() const {
    return 0;
}

EAppCharCategoryType UAppCharBaseComp::GetCategoryID() const {
    return EAppCharCategoryType::None;
}

TSoftClassPtr<AAppPropsCore> UAppCharBaseComp::GetBagClassPtr() {
    return NULL;
}

FName UAppCharBaseComp::GetBagAttachSocketName() {
    return NAME_None;
}

EAnimPackID UAppCharBaseComp::GetAnimPackID() const {
    return EAnimPackID::None;
}

UAnimMontage* UAppCharBaseComp::GetAnimMontageDefaultSlot() {
    return NULL;
}

TArray<UMaterialInterface*> UAppCharBaseComp::GetAllMaterial() {
    return TArray<UMaterialInterface*>();
}

void UAppCharBaseComp::ClearDelayPauseAnimFromMotion() {
}

UAppCharBaseComp::UAppCharBaseComp() {
    this->mMotionAttached_ = NULL;
    this->mMotionDetachPrepared_ = false;
    this->bMotionDetachPreparedTransKeep_ = false;
    this->bMotionDetachPreparedRelativeTrans_ = false;
    this->mFadeType_ = 0;
    this->mFadeFrame_ = 0;
    this->mFadePattern_ = 0;
    this->mDelayPauseAnimReq_ = false;
    this->mDelayPauseAnimFlag_ = false;
    this->mDelayPauseAnimSpeedRate_ = 1.00f;
    this->mBagAnimSlotName_ = TEXT("Arm L");
    this->mBagActor_ = NULL;
    this->bIsLockedLookAt_ = false;
    this->mLockedLookAtType_ = 0;
    this->mLockedLookAtSpeed_ = 5.00f;
    this->CostumeMesh = NULL;
    this->HairMesh = NULL;
    this->FaceMesh = NULL;
    this->FootstepsAtom = NULL;
    this->AnimMontage_DefaultSlot = NULL;
    this->AnimMontage_FacialSlot = NULL;
    this->AnimMontage_NeckSlot = NULL;
    this->AnimMontage_TurnSlot = NULL;
    this->AnimMontage_HavBagSlot = NULL;
    this->CategoryID = EAppCharCategoryType::None;
    this->IndexID = 0;
    this->CostumeID = 0;
    this->AnimPackID = EAnimPackID::None;
    this->AnimPack = NULL;
    this->FaceAnimPack = NULL;
    this->WeaponType = EAppCharWeaponType::None;
    this->WeaponId = -1;
    this->bBagEnable = false;
    this->ShoesID = 0;
    this->State = EAppCharState::None;
    this->MoveSpeed = 0.00f;
    this->bTransparencyEnable = false;
}

