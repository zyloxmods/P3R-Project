#include "FldLinkAnimHitBase.h"
#include "Components/SceneComponent.h"

void AFldLinkAnimHitBase::OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFldLinkAnimHitBase::OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFldLinkAnimHitBase::AFldLinkAnimHitBase() {
    this->RootComp_ = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->HitComp_ = NULL;
    this->mOneshotFlag_ = false;
    this->mFlag_ = 0;
}

