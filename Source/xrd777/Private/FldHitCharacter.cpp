#include "FldHitCharacter.h"
#include "Components/CapsuleComponent.h"

int32 AFldHitCharacter::GetCharaModelNum() {
    return 0;
}

UFldNpcComp* AFldHitCharacter::GetCharaModelNpcComp(int32 ModelIndex) {
    return NULL;
}

void AFldHitCharacter::EndDelicate_SyncMotion() {
}

void AFldHitCharacter::EndDelicate_RotationToPlayer() {
}

void AFldHitCharacter::EndDelicate_ReturnBaseRotator() {
}

void AFldHitCharacter::EndDelicate_ProcHeroPrevAction() {
}

AFldHitCharacter::AFldHitCharacter() {
    this->CollisionComp_ = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->mCharaModelParam_.AddDefaulted(1);
    this->mIconType_ = EFldHitCharaIconType::Normal;
    this->mIconPlural_ = false;
    this->mIconAttachedType_ = EFldHitCharaIconAttachedType::Auto;
    this->bIconDirectLocationMODEL_ = false;
    this->mFloorIndex_ = 0;
    this->mLookHeroOverlap_ = true;
    this->mSpeakMotionKeyPush_ = true;
    this->mLookHeroKeyPush_ = true;
    this->mFaceingHeroKeyPush_ = true;
    this->mHeroMotionKeyPush_ = EFldHitCharaHeroMotion::Speak;
    this->mReturnBaseRotator_ = false;
    this->mCharaBaseClass_ = NULL;
    this->mNpcBaseClass_ = NULL;
    this->mIconActor_ = NULL;
    this->mMoveActor_ = NULL;
    this->mHeroProcActor_ = NULL;
    this->bChangedRotator_ = false;
    this->mIdleTalkComp_ = NULL;
    this->mIdleBehaviorComp_ = NULL;
    this->bIsIdleBehaviorCreated_ = false;
    this->bGetAwayPrevAction_ = false;
}

