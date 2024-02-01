#include "AppCharWeaponBase.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AAppCharWeaponBase::PlayAnimSequence(UAnimSequenceBase* pSequence, bool Loop, float BlendInTime, float BlendOutTime, float InPlayRate) {
}

void AAppCharWeaponBase::PlayAnim(int32 animNo, bool Loop, float BlendInTime, float BlendOutTime, float InPlayRate) {
}

int32 AAppCharWeaponBase::GetWaitAnimNo() const {
    return 0;
}


AAppCharWeaponBase::AAppCharWeaponBase() {
    this->PlayerId = 0;
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->HideMaterialID = -1;
    this->AnimPack = NULL;
}

