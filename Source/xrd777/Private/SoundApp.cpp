#include "SoundApp.h"

void USoundApp::StopSingleVoice(int32 CueId) {
}

void USoundApp::StopFacilityVoice(int32 CharaIndexID, bool UseAttenuator, int32 BankNum) {
}

void USoundApp::StopEventVoiceWithLipSync(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, int32 BankNum) {
}

void USoundApp::StopEventVoice(int32 BankNum) {
}

void USoundApp::StopEventSE(int32 CueId, int32 BankNum) {
}

void USoundApp::StopComSE(int32 CueId) {
}

void USoundApp::StopBGM_IMD() {
}

void USoundApp::StopBGM() {
}

void USoundApp::StopBattleEventVoice(int32 BankNum) {
}

void USoundApp::StopBackLogVoice(int32 BankNum) {
}

void USoundApp::SetSystemPausePlayerAll(bool bPause) {
}

void USoundApp::SetSelectorLabel(int32 PlayerMajorID, int32 PlayerMinorID, const FString& Selector, const FString& Label) {
}

void USoundApp::SetPausePlayerAll(bool bPause) {
}

void USoundApp::SetPausePlayer(int32 majorId, int32 minorId, bool bPause) {
}

void USoundApp::SetAisacByNameVOICE(float ControlValue) {
}

void USoundApp::SetAisacByNameSE(float ControlValue) {
}

void USoundApp::SetAisacByNameBGM(float ControlValue) {
}

void USoundApp::ResetSelectorLabel(int32 PlayerMajorID, int32 PlayerMinorID) {
}

bool USoundApp::ReqReadFacilityVoiceData(const FString& Filename, int32 BankNum) {
    return false;
}

bool USoundApp::ReqReadEventVoiceData(const FString& Filename, int32 BankNum) {
    return false;
}

bool USoundApp::ReqReadBattleEventVoiceData(const FString& Filename, int32 BankNum, bool UseLipsync) {
    return false;
}

bool USoundApp::ReqReadBackLogVoiceData(const FString& Filename, int32 BankNum) {
    return false;
}

bool USoundApp::ReleaseFacilityVoiceData(UGameInstance* GameInst, int32 BankNum) {
    return false;
}

bool USoundApp::ReleaseEventVoiceData(UGameInstance* GameInst, int32 BankNum) {
    return false;
}

bool USoundApp::ReleaseBattleEventVoiceData(UGameInstance* GameInst, int32 BankNum) {
    return false;
}

bool USoundApp::ReleaseBackLogVoiceData(UGameInstance* GameInst, int32 BankNum) {
    return false;
}

void USoundApp::PlayVoiceWithSimpleLipCustomParam(const FCharacterSimpleLipsAnimAppParam& SimpleLipsParam, int32 CueId, int32 SoundMajorID, int32 BankNum) {
}

void USoundApp::PlayVoiceWithLipsync(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, int32 CueId, int32 SoundMajorID, int32 BankNum) {
}

void USoundApp::PlaySingleVoice(int32 CueId) {
}

void USoundApp::PlayFacilityVoice(int32 CueId, int32 CharaIndexID, bool UseAttenuator, int32 BankNum, bool UseLips) {
}

void USoundApp::PlayEventVoiceWithSimpleLipCustomParam(const FCharacterSimpleLipsAnimAppParam& SimpleLipsParam, int32 CueId, int32 BankNum) {
}

void USoundApp::PlayEventVoiceWithLipsync(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, int32 CueId, int32 BankNum) {
}

void USoundApp::PlayEventVoice(int32 CueId, int32 BankNum) {
}

void USoundApp::PlayEventSE(int32 CueId, int32 BankNum) {
}

void USoundApp::PlayComSE(int32 CueId) {
}

void USoundApp::PlayBGM(int32 CueId) {
}

void USoundApp::PlayBattleEventVoiceWithLipsync(EAppCharCategoryType CategoryType, int32 CharaIndexID, int32 CueId, int32 BankNum) {
}

void USoundApp::PlayBattleEventVoice(int32 CueId, int32 BankNum) {
}

void USoundApp::PlayBattleBGM(int32 CueId) {
}

void USoundApp::PlayBackLogVoice(int32 CueId, int32 BankNum) {
}

void USoundApp::PauseEventVoice(int32 BankNum, bool bPause) {
}

bool USoundApp::IsSetupEndFacilityVoiceData(int32 BankNum) {
    return false;
}

bool USoundApp::IsSetupEndEventVoiceData(int32 BankNum) {
    return false;
}

bool USoundApp::IsSetupEndBattleEventVoiceData(int32 BankNum) {
    return false;
}

bool USoundApp::IsSetupEndBackLogVoiceData(int32 BankNum) {
    return false;
}

bool USoundApp::IsPlayingSingleVoice(int32 BankNum) {
    return false;
}

bool USoundApp::IsPlayingFacilityVoice(bool UseAttenuator, int32 BankNum) {
    return false;
}

bool USoundApp::IsPlayingEventVoice(int32 BankNum) {
    return false;
}

bool USoundApp::IsPlayingComSE(int32 BankNum) {
    return false;
}

bool USoundApp::IsPlayingBattleEventVoice(int32 BankNum) {
    return false;
}

bool USoundApp::IsPlayingBackLogVoice(int32 BankNum) {
    return false;
}

bool USoundApp::IsActiveFacilityVoiceData(int32 BankNum) {
    return false;
}

bool USoundApp::IsActiveEventVoiceData(int32 BankNum) {
    return false;
}

bool USoundApp::IsActiveBattleEventVoiceData(int32 BankNum) {
    return false;
}

bool USoundApp::IsActiveBackLogVoiceData(int32 BankNum) {
    return false;
}

void USoundApp::Init() {
}

float USoundApp::GetTime(int32 majorId, int32 minorId) {
    return 0.0f;
}

int32 USoundApp::GetNowPlayBGMQueID() {
    return 0;
}

FCriLipsMorphTargetBlendAmountAsJapanese USoundApp::getLipsyncLiveInfo(int32 BankNum) {
    return FCriLipsMorphTargetBlendAmountAsJapanese{};
}

float USoundApp::GetLength(int32 majorId, int32 minorId, int32 CueId) {
    return 0.0f;
}

FString USoundApp::GetCurrentAppliedSnapshot() {
    return TEXT("");
}

void USoundApp::FadeOutComSE(int32 FadeOutFrame) {
}

void USoundApp::FadeOutCategoryBGM(int32 FadeOutFrame, float fadeOutVolume) {
}

void USoundApp::FadeoutBGM(int32 FadeOutFrame) {
}

void USoundApp::FadeInCategoryBGM(int32 FadeInFrame, float fadeOutVolume) {
}

void USoundApp::FadeInBGM(int32 FadeOutFrame) {
}

void USoundApp::DetachDspBusSetting() {
}

bool USoundApp::CheckPauseEventVoice(int32 BankNum) {
    return false;
}

void USoundApp::AttachDspBusSetting(const FString& SettingName) {
}

void USoundApp::ApplyDspBusSnapshot(const FString& SnapshotName, int32 Millisecond) {
}

USoundApp::USoundApp() {
}

