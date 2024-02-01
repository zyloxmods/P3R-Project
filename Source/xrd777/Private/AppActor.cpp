#include "AppActor.h"

EAppPauseObjectFlag AAppActor::GetAppPauseFlags() const {
    return EAppPauseObjectFlag::Unknown;
}

void AAppActor::EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AAppActor::BeginPlay() {
}

UObject* AAppActor::AsUObject() {
    return NULL;
}

AActor* AAppActor::AsAActor() {
    return NULL;
}

AAppActor::AAppActor() {
    this->AppPauseFlags = EAppPauseObjectFlag::Unknown;
}

