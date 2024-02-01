#include "NpcAnimationBaseCore.h"

void UNpcAnimationBaseCore::SetLookAtWorldLocation(FVector Location) {
}

void UNpcAnimationBaseCore::SetLookAtType(ENpcAnimLookAtType Type) {
}

void UNpcAnimationBaseCore::SetLookAtTargetActorBoneName(const FString& BoneName) {
}

void UNpcAnimationBaseCore::SetLookAtTargetActor(AActor* TargetActor) {
}

void UNpcAnimationBaseCore::SetIdolAnimSequnece(UAnimSequenceBase* Anim) {
}

FVector UNpcAnimationBaseCore::GetLookAtWorldLocation() {
    return FVector{};
}

ENpcAnimLookAtType UNpcAnimationBaseCore::GetLookAtType() {
    return ENpcAnimLookAtType::Disable;
}

FString UNpcAnimationBaseCore::GetLookAtTargetActorBoneName() {
    return TEXT("");
}

AActor* UNpcAnimationBaseCore::GetLookAtTargetActor() {
    return NULL;
}

UAnimSequenceBase* UNpcAnimationBaseCore::GetIdolAnimSequnece() {
    return NULL;
}

UNpcAnimationBaseCore::UNpcAnimationBaseCore() {
    this->LookAtType = ENpcAnimLookAtType::Disable;
    this->LookAtTargetActor = NULL;
    this->LookAtTargetActorBoneName = TEXT("Jnt_C_Head_00");
    this->IdolAnimSequence = NULL;
}

