#include "CharacterSimpleLipsAnimAppComponent.h"

void UCharacterSimpleLipsAnimAppComponent::OnChangeLipsState(ECharacterSimpleLipsAnimAppStateType LipSyncAppStateType, const FCharacterSimpleLipsAnimAppListener& LipsyncParam) {
}

UCharacterSimpleLipsAnimAppSubsystem* UCharacterSimpleLipsAnimAppComponent::GetLipsSubsystem() const {
    return NULL;
}

void UCharacterSimpleLipsAnimAppComponent::FindPropsPtr() {
}

UCharacterSimpleLipsAnimAppComponent::UCharacterSimpleLipsAnimAppComponent() {
    this->CurrentTotalLipDeltaTime = 0.00f;
    this->CurrentTotalTime = 0.00f;
    this->RequestedTotalEndTime = 0.00f;
    this->LipsPlayRate = 0.00f;
    this->StartLipsDelaySec = 0.00f;
    this->LipACustomCurve = NULL;
    this->PlayerMajorID = 0;
    this->PlayerMinorID = 0;
    this->OwnerMesh = NULL;
    this->AppCharacterComponent = NULL;
}

