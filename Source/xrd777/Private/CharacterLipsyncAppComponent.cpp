#include "CharacterLipsyncAppComponent.h"

void UCharacterLipsyncAppComponent::OnChangeLipsyncState(ELipSyncAppStateType LipSyncAppStateType, const FLipsyncAppListener& LipsyncParam) {
}

ULipsyncAppObserverSubsystem* UCharacterLipsyncAppComponent::GetLipsyncSubsystem() const {
    return NULL;
}

void UCharacterLipsyncAppComponent::FindLipPropsPtr() {
}

UCharacterLipsyncAppComponent::UCharacterLipsyncAppComponent() {
    this->OwnerMesh = NULL;
    this->AppCharacterComponent = NULL;
    this->mCurrentTotalTime = 0.00f;
}

