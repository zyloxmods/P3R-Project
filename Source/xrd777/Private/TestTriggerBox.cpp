#include "TestTriggerBox.h"
#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"

void ATestTriggerBox::OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATestTriggerBox::OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATestTriggerBox::ATestTriggerBox() {
    this->Icon = CreateDefaultSubobject<UBillboardComponent>(TEXT("Icon"));
    this->CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
}

