#include "FldManagerSubsystem.h"
#include "Templates/SubclassOf.h"

void UFldManagerSubsystem::SetPlayerKeyEnable(bool KeyEnable) {
}

void UFldManagerSubsystem::SetPlayerEnable(bool Visible, bool KeyEnable) {
}

void UFldManagerSubsystem::SetParamDebug(int32 FieldMajorID, int32 FieldMinorID) {
}

void UFldManagerSubsystem::SetFieldCameraShakeActor(AFldMiscCameraShake* InActor) {
}

void UFldManagerSubsystem::ProcLevelBluePrint(TSubclassOf<ACharacterBaseCore> DefaultPlayerClass, TSubclassOf<ACharacterBaseCore> DungeonPlayerClass, TSubclassOf<AFldCameraBase> DefaultCameraClass, TSubclassOf<AFldCameraBase> DungeonCameraClass, TSubclassOf<AFldCamera> TransCameraClass, TSubclassOf<ACharacterBaseCore> FollowerClass, TSubclassOf<ACharacterBaseCore> FollowerKoromaruClass, const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UFldManagerSubsystem::LoadFieldSubLevelDebug(int32 FieldMajorID, int32 FieldMinorID, int32 TotalDay, ECldTimeZone TimeZone, EFldLoadPattern Pattern, const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

bool UFldManagerSubsystem::IsProcFldEvent() {
    return false;
}

bool UFldManagerSubsystem::IsProcField() {
    return false;
}

bool UFldManagerSubsystem::IsLoadingField() {
    return false;
}

bool UFldManagerSubsystem::IsKeyFreeEvent() {
    return false;
}

bool UFldManagerSubsystem::IsEnablePartyChange() {
    return false;
}

AFldMiscCameraShake* UFldManagerSubsystem::GetFieldCameraShakeActor() {
    return NULL;
}

bool UFldManagerSubsystem::CheckKeyFree() {
    return false;
}

void UFldManagerSubsystem::ChangeFieldSubLevelDebug(int32 FieldMajorID, int32 FieldMinorID, int32 TotalDay, ECldTimeZone TimeZone, EFldLoadPattern Pattern, const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

UFldManagerSubsystem::UFldManagerSubsystem() {
    this->mLevelManager_ = NULL;
    this->mPlayerComp_ = NULL;
    this->mOparetator_ = NULL;
    this->mInitScrManager_ = NULL;
    this->mKeyFreeAnnounceActor_ = NULL;
    this->mKeyFreeEventActor_ = NULL;
    this->mFieldEventActor_ = NULL;
    this->mLargeMapActor_ = NULL;
    this->mSoundManager_ = NULL;
    this->mMiniMapManager_ = NULL;
    this->mDungeonMenuScript_ = NULL;
    this->mDailyMenuScript_ = NULL;
    this->mSaveMenu_ = NULL;
    this->mBackLogDisp_ = NULL;
    this->mVoiceActionDisp_ = NULL;
    this->mKeyLockedActor_ = NULL;
    this->mAutoRecoverMenuScript_ = NULL;
    this->mCharBaseReload_ = NULL;
    this->mCameraShake_ = NULL;
    this->mKeyHelpDelayTimer_ = 0.00f;
    this->mMoveFloorTimer_ = 0.00f;
    this->mDefaultPlayerClass_ = NULL;
    this->mDungeonPlayerClass_ = NULL;
    this->mDefaultCameraClass_ = NULL;
    this->mDungeonCameraClass_ = NULL;
    this->mTransCameraClass_ = NULL;
    this->mFollowerClass_ = NULL;
    this->mFollowerKoromaruClass_ = NULL;
    this->mWorldContextObject_ = NULL;
    this->mMoveActor_ = NULL;
    this->mCameraLock_ = false;
    this->mCameraMoveActor_ = NULL;
    this->mDebugMenu_ = NULL;
}

