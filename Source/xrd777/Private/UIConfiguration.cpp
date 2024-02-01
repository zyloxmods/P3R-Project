#include "UIConfiguration.h"

void AUIConfiguration::OnDrawClosed() {
}

void AUIConfiguration::OnDifficultCancel(bool inIsCancel) {
}

void AUIConfiguration::OnConfigInAnimFinished() {
}

void AUIConfiguration::OnConfigCancel(bool inIsCancel) {
}

void AUIConfiguration::OnBgmSetAnimFinished() {
}

void AUIConfiguration::OnBGMInAnimFinished() {
}

bool AUIConfiguration::IsWindowDraw() {
    return false;
}

AUIConfiguration::AUIConfiguration() {
    this->ConfigBGMSelect = NULL;
    this->ConfigDungeonBGMSelect = NULL;
    this->ConfigTable = NULL;
    this->Loader = NULL;
    this->NetWaitDialog = NULL;
    this->DrawActorSC = NULL;
    this->DrawActor = NULL;
    this->pKeySpr = NULL;
    this->LayoutData = NULL;
    this->HelpLayoutData = NULL;
    this->pParamLayoutDataConfigText = NULL;
}

