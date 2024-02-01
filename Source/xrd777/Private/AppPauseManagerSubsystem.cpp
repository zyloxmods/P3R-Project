#include "AppPauseManagerSubsystem.h"

void UAppPauseManagerSubsystem::UnPause() {
}

void UAppPauseManagerSubsystem::Pause(EAppPauseType InPauseType) {
}

bool UAppPauseManagerSubsystem::IsPause(EAppPauseType& PauseType) {
    return false;
}

UAppPauseManagerSubsystem::UAppPauseManagerSubsystem() {
    this->AppPauseables = NULL;
    this->AppPaused[0] = NULL;
    this->AppPaused[1] = NULL;
    this->AppPaused[2] = NULL;
    this->AppPaused[3] = NULL;
}

