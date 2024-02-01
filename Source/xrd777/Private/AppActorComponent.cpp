#include "AppActorComponent.h"

EAppPauseObjectFlag UAppActorComponent::GetAppPauseFlags() const {
    return EAppPauseObjectFlag::Unknown;
}

void UAppActorComponent::EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UAppActorComponent::BeginPlay() {
}

UObject* UAppActorComponent::AsUObject() {
    return NULL;
}

AActor* UAppActorComponent::AsAActor() {
    return NULL;
}

UAppActorComponent::UAppActorComponent() {
    this->AppPauseFlags = EAppPauseObjectFlag::Unknown;
}

