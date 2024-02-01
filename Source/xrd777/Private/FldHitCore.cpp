#include "FldHitCore.h"
#include "Components/SceneComponent.h"

void AFldHitCore::RequestKeyPushBluePrint() {
}

void AFldHitCore::OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFldHitCore::OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFldHitCore::CleanupRequest() {
}

AFldHitCore::AFldHitCore() {
    this->mPriority_ = 0;
    this->RootComp_ = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->HitComp_ = NULL;
    this->mOverlapBluePrint_ = NULL;
    this->mOverlapKeyLock_ = false;
    this->mKeyPushBluePrint_ = NULL;
    this->mActionKeyLock_ = true;
    this->mHeroDirectType_ = FFldHitCoreHeroDirectType::None;
    this->mCheckIcon_ = EFldHitCoreCheckIconType::Check;
}

