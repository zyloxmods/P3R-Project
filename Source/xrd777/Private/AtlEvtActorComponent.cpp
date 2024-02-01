#include "AtlEvtActorComponent.h"

AHandwritingSpawner* UAtlEvtActorComponent::SpawnHandwritingAttachedDefaultParam(EAtlEvtHandwritingType Type, bool bAttached) {
    return NULL;
}

AHandwritingSpawner* UAtlEvtActorComponent::SpawnHandwritingAttached(EAtlEvtHandwritingType Type, int32 LoopCount, float CameraOffset, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, bool bAttached) {
    return NULL;
}

void UAtlEvtActorComponent::SetUseAnimPack(bool bInUseAnimPack) {
}

void UAtlEvtActorComponent::SetupHeroBag() {
}

void UAtlEvtActorComponent::SetupAnimPack() {
}

void UAtlEvtActorComponent::SetShoesId(EAppCharShoesID ID) {
}

void UAtlEvtActorComponent::SetOverwriteDettachPropTransform(const FTransform& Transform) {
}

void UAtlEvtActorComponent::SetOverrideAnimPackID(EAnimPackID InAnimPackID) {
}

void UAtlEvtActorComponent::SetLocomotionTeleportVelocityType(EAtlEvtLocomotionTeleportVelocityType Type) {
}

void UAtlEvtActorComponent::SetEnableBag(bool bInEnableAtlEvtBag) {
}

void UAtlEvtActorComponent::SetEnableAtlEvtLocomotionVelocitySimulation(bool bInEnableAtlEvtLocomotionVelocitySimulation) {
}

void UAtlEvtActorComponent::SetAttachPropActor() {
}

void UAtlEvtActorComponent::ResetVelocitySimulateParam_Implementation() {
}

void UAtlEvtActorComponent::LoadEnded() {
}

bool UAtlEvtActorComponent::IsUseAnimPack() const {
    return false;
}

bool UAtlEvtActorComponent::IsEnableLocomotionVelocitySimulate() const {
    return false;
}

bool UAtlEvtActorComponent::IsEnableBag() const {
    return false;
}

EAppCharShoesID UAtlEvtActorComponent::GetShoesID() const {
    return EAppCharShoesID::None;
}

EAtlEvtLocomotionTeleportVelocityType UAtlEvtActorComponent::GetLocomotionTeleportVelocityType() const {
    return EAtlEvtLocomotionTeleportVelocityType::Default;
}

void UAtlEvtActorComponent::CompareToHiddenCharacter(int32 LocalDataIndex, int32 ConditionalValue, EEvtConditionalBranchCompType CompareType) {
}

void UAtlEvtActorComponent::ClearAttachPropActor() {
}

FVector UAtlEvtActorComponent::CalcEvtLocomotionTeleportVelocity(const FVector& SimVelocity, const FVector& PrevSimVelocity, float VelocityRate) {
    return FVector{};
}

UAtlEvtActorComponent::UAtlEvtActorComponent() {
    this->AttachPropActor = NULL;
    this->LocomotionTeleportVelocityType = EAtlEvtLocomotionTeleportVelocityType::Default;
    this->LocomotionTeleportDistanceThreshold = 300.00f;
    this->LipUniqueID = 0;
    this->OwnerCharacter = NULL;
    this->OwnerNpc = NULL;
    this->AppCharaBaseComp = NULL;
    this->bUseAnimPack = false;
    this->OverrideAnimPackID = EAnimPackID::None;
    this->bEnableAtlEvtLocomotionVelocitySimulation = false;
    this->bEnableAtlEvtBag = false;
    this->ShoesID = EAppCharShoesID::Shoes;
}

