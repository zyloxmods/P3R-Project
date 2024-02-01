#include "FldHitSoundCore.h"

void AFldHitSoundCore::OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFldHitSoundCore::OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFldHitSoundCore::AFldHitSoundCore() {
    this->HitComp = NULL;
    this->mFlag_ = 0;
    this->mTimer_ = 0.00f;
}

