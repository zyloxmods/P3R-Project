#include "FldAnimalHit.h"
#include "Components/SphereComponent.h"

void AFldAnimalHit::OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFldAnimalHit::OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFldAnimalHit::AFldAnimalHit() {
    this->mOwner_ = NULL;
    this->mHitRadius_ = 300.00f;
    this->mHitComp_ = CreateDefaultSubobject<USphereComponent>(TEXT("Hit"));
}

