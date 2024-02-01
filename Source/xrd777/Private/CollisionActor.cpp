#include "CollisionActor.h"
#include "Components/SphereComponent.h"

void UCollisionActor::OnEndOverlapSphere(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UCollisionActor::OnBeginOverlapSphere(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UCollisionActor::UCollisionActor() {
    this->mpSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
}

