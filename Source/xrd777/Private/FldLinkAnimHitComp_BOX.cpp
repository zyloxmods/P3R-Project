#include "FldLinkAnimHitComp_BOX.h"

void UFldLinkAnimHitComp_BOX::OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFldLinkAnimHitComp_BOX::OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UFldLinkAnimHitComp_BOX::UFldLinkAnimHitComp_BOX() {
    this->mOneshotFlag_ = false;
    this->mFlag_ = 0;
}

