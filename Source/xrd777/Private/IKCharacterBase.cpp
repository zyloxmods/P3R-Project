#include "IKCharacterBase.h"

void AIKCharacterBase::UpdateInterpRotator(FRotator& Value, FRotator Target, float InterpSpeed, float DeltaSeconds) {
}

void AIKCharacterBase::UpdateInterpFloat(float& Value, float Target, float InterpSpeed, float DeltaSeconds) {
}

void AIKCharacterBase::UpdateCapsuleHalfHeight(float HipOffset, bool bResetCapsule, float DeltaSeconds) {
}

void AIKCharacterBase::UpdateAnimInstanceParams() {
}

void AIKCharacterBase::TickUpdateIK(float DeltaSeconds) {
}

void AIKCharacterBase::InitializeIKSetup(bool bEnable, USkeletalMeshComponent* InTargetMesh, UIKAnimInstanceBase* InIKAnimInstance) {
}

void AIKCharacterBase::EnableIK() {
}

void AIKCharacterBase::DisableIK() {
}

AIKCharacterBase::AIKCharacterBase() {
    this->IKMeshComp = NULL;
    this->IKAnimInstance = NULL;
    this->DefaultCapsuleHalfHeight = 88.00f;
    this->TestLeg = 0.00f;
}

