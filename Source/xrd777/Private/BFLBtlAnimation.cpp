#include "BFLBtlAnimation.h"

void UBFLBtlAnimation::StopMontageAnimation(USkeletalMeshComponent* InSkeletalMeshComponent) {
}

void UBFLBtlAnimation::SetMontagePositionInSection(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, FName SectionName, float PositionInSection) {
}

void UBFLBtlAnimation::SetMontageAnimationSpeed(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate) {
}

float UBFLBtlAnimation::GetRemainingTimeFromCurrentSection(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* AnimMontage) {
    return 0.0f;
}

float UBFLBtlAnimation::GetMontageSectionLength(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* AnimMontage, FName SectionName) {
    return 0.0f;
}

bool UBFLBtlAnimation::GetMontageNextSectionName(UAnimMontage* AnimMontage, FName SectionName, FName& NextSectionName) {
    return false;
}

bool UBFLBtlAnimation::GetMontageAlignedNextSectionName(UAnimMontage* AnimMontage, FName SectionName, FName& NextSectionName) {
    return false;
}

FName UBFLBtlAnimation::GetCurrentSectionName(USkeletalMeshComponent* InSkeletalMeshComponent) {
    return NAME_None;
}

void UBFLBtlAnimation::ForcePoseUpdate(USkeletalMeshComponent* SkeletalMesh) {
}

void UBFLBtlAnimation::CoordinateDefaultAnimPose(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimSequence* AnimSequence) {
}

bool UBFLBtlAnimation::CheckMontageSectionIsLoop(UAnimMontage* AnimMontage, FName SectionName) {
    return false;
}

UBFLBtlAnimation::UBFLBtlAnimation() {
}

