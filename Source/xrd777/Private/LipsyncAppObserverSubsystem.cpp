#include "LipsyncAppObserverSubsystem.h"

void ULipsyncAppObserverSubsystem::StopAllSpeakCharacter() {
}

void ULipsyncAppObserverSubsystem::StartSpeakCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, int32 SoundMajorID, int32 SoundMinorID, bool bOverride) {
}

bool ULipsyncAppObserverSubsystem::IsSpeakingCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID) {
    return false;
}

FCriLipsMorphTargetBlendAmountAsJapanese ULipsyncAppObserverSubsystem::getLipsyncLiveInfo(int32 SoundMajorID, int32 SoundMinorID) {
    return FCriLipsMorphTargetBlendAmountAsJapanese{};
}

void ULipsyncAppObserverSubsystem::FinishSpeakCharacterFromSoundID(int32 SoundMajorID, int32 SoundMinorID) {
}

void ULipsyncAppObserverSubsystem::FinishSpeakCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID) {
}

ULipsyncAppObserverSubsystem::ULipsyncAppObserverSubsystem() {
    this->SpeakWatcher = NULL;
}

