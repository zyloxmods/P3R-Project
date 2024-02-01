#include "FldPostValumeSound.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

void AFldPostValumeSound::OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFldPostValumeSound::OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFldPostValumeSound::AFldPostValumeSound() {
    this->mOutRadius_ = 1.00f;
    this->mInRadius_ = 0.00f;
    this->bXdirOnly_ = false;
    this->bYdirOnly_ = false;
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->HitComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit"));
}

