#include "AppCharacterComp.h"

void UAppCharacterComp::UnlinkPhysics() {
}

void UAppCharacterComp::SetVisibleAttachComponent(bool Visible) {
}

UCharacterMovementComponent* UAppCharacterComp::GetMovement() const {
    return NULL;
}

ACharacterBaseCore* UAppCharacterComp::GetCharacter() const {
    return NULL;
}

UCapsuleComponent* UAppCharacterComp::GetCapsule() const {
    return NULL;
}

UAppCharacterComp::UAppCharacterComp() {
    this->mBagMotionBlendTime_StandToRun_ = 0.15f;
    this->mBagMotionBlendTime_RunToStand_ = 0.15f;
    this->bIsBagSetting_ = false;
    this->bIsBagRun_ = false;
    this->mBagKeyID_ = -1;
    this->mOverwirteBagKeyID_ = -1;
    this->bIsBagInvalidIK_ = false;
    this->Character = NULL;
    this->bNeedInitialize = false;
    this->Loader = NULL;
    this->mSetCostumeID = -1;
    this->mSetWeaponType = -1;
    this->mSetWeaponModelID = -1;
}

