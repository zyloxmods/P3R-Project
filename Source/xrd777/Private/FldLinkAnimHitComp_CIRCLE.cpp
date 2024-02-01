#include "FldLinkAnimHitComp_CIRCLE.h"

void UFldLinkAnimHitComp_CIRCLE::OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFldLinkAnimHitComp_CIRCLE::OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UFldLinkAnimHitComp_CIRCLE::UFldLinkAnimHitComp_CIRCLE() {
    this->mOneshotFlag_ = false;
    this->mFlag_ = 0;
}

