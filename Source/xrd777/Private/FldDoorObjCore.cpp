#include "FldDoorObjCore.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "FldDoorPointComp.h"

void AFldDoorObjCore::PlayDoorOpenWithFade(EFldDoorOpenType OpenType, int32 FadeType, int32 FadeFrame, int32 FadePattern) {
}

void AFldDoorObjCore::PlayDoorOpen(EFldDoorOpenType OpenType) {
}

bool AFldDoorObjCore::IsPlayingOpen() {
    return false;
}

void AFldDoorObjCore::CallStateEndDelicate() {
}

AFldDoorObjCore::AFldDoorObjCore() {
    this->mWalkSpeed_ = 200.00f;
    this->mDoorCloseRange_ = 50.00f;
    this->mWaitAsset_CLOSE_ = NULL;
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeltalMesh"));
    this->FrontPoint = CreateDefaultSubobject<UFldDoorPointComp>(TEXT("FrontPoint"));
    this->BackPoint = CreateDefaultSubobject<UFldDoorPointComp>(TEXT("BackPoint"));
    this->mFlag_ = 0;
}

