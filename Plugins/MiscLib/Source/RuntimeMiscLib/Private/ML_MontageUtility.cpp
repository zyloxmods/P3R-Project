#include "ML_MontageUtility.h"

void UML_MontageUtility::SetBlendOut(UAnimMontage* AnimMontage, float Time) {
}

bool UML_MontageUtility::SetBlendInOutAutoWithParam(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* AnimMontage, FName SectionName, float DecreaseBlendTime) {
    return false;
}

bool UML_MontageUtility::SetBlendInAuto(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* AnimMontage, FName SectionName) {
    return false;
}

void UML_MontageUtility::SetBlendIn(UAnimMontage* AnimMontage, float Time) {
}

FName UML_MontageUtility::GetNextSectionName(UAnimMontage* AnimMontage, FName SectionName, bool& Success) {
    return NAME_None;
}

float UML_MontageUtility::GetBlendOut(UAnimMontage* AnimMontage) {
    return 0.0f;
}

float UML_MontageUtility::GetBlendIn(UAnimMontage* AnimMontage) {
    return 0.0f;
}

bool UML_MontageUtility::GetAnimationSequence(UAnimMontage* AnimMontage, FName SlotName, FName SectionName, UAnimSequenceBase*& AnimSequence) {
    return false;
}

UML_MontageUtility::UML_MontageUtility() {
}

