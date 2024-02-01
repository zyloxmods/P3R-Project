#include "AppCharFootstepsTriggerVolume.h"

void AAppCharFootstepsTriggerVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAppCharFootstepsTriggerVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

AAppCharFootstepsTriggerVolume::AAppCharFootstepsTriggerVolume() {
    this->mTimeNoon_ = true;
    this->mTimeAfternoon_ = true;
    this->mTimeNight_ = true;
    this->mTimeShadow_ = true;
}

