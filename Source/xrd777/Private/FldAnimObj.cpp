#include "FldAnimObj.h"

void AFldAnimObj::PlayAnimation(int32 AnimeID, bool LoopFlag) {
}

bool AFldAnimObj::IsPlayingAnimation() {
    return false;
}

void AFldAnimObj::InitializeArray(TArray<USkeletalMeshComponent*> SkeleTalMeshList, int32 AnimeID) {
}

void AFldAnimObj::Initialize(USkeletalMeshComponent* SkeletalMesh, int32 AnimeID) {
}

int32 AFldAnimObj::GetNowAnimeID() {
    return 0;
}

int32 AFldAnimObj::GetAnimationNum() {
    return 0;
}

void AFldAnimObj::DebugSetting() {
}

void AFldAnimObj::ChangeAnimationDEBUG() {
}

AFldAnimObj::AFldAnimObj() {
    this->mIndex_ = 0;
    this->mNotPausedInLoop_ = false;
    this->mAnimeMesh_ = NULL;
    this->mNiagaraComp_ = NULL;
    this->mAnimIndex_ = 0;
    this->bIsInit_ = false;
    this->mLoopAnimIndex_ = -1;
    this->mIsHide_ = false;
}

