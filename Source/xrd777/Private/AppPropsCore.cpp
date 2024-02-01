#include "AppPropsCore.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AAppPropsCore::PlayAnimationPack(int32 AnimePackIndex, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate, FName AnimSlotName) {
}

void AAppPropsCore::CompareToHiddenCharacter(int32 LocalDataIndex, int32 ConditionalValue, EEvtConditionalBranchCompType CompareType) {
}

AAppPropsCore::AAppPropsCore() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeltalMesh0"));
    this->mAnimePackAsset_ = NULL;
}

