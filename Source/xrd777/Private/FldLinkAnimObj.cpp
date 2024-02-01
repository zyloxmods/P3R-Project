#include "FldLinkAnimObj.h"

void AFldLinkAnimObj::InitializeArray(TArray<USkeletalMeshComponent*> SkeleTalMeshList) {
}

void AFldLinkAnimObj::Initialize(USkeletalMeshComponent* SkeletalMesh) {
}

AFldLinkAnimObj::AFldLinkAnimObj() {
    this->mAnimeLoopFlag_ = false;
    this->mFlag_ = 0;
    this->mLoopIndex_ = 0;
}

