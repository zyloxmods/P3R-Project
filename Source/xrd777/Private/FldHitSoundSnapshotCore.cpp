#include "FldHitSoundSnapshotCore.h"

void AFldHitSoundSnapshotCore::OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFldHitSoundSnapshotCore::OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFldHitSoundSnapshotCore::AFldHitSoundSnapshotCore() {
    this->mOffInEvent_ = true;
    this->HitComp = NULL;
}

