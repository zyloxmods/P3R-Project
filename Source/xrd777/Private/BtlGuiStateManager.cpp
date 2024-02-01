#include "BtlGuiStateManager.h"

void ABtlGuiStateManager::UpdateLayoutDebugMenu() {
}

void ABtlGuiStateManager::SetState(EBtlGuiState State, bool sendFlag, int32 sendNumber) {
}

void ABtlGuiStateManager::SetPrevState(EBtlGuiState State) {
}

void ABtlGuiStateManager::ResetPrevState() {
}

bool ABtlGuiStateManager::OnDebugRushStopMaskVisible() {
    return false;
}

bool ABtlGuiStateManager::OnDebugRushStopMaskAnimPause() {
    return false;
}

bool ABtlGuiStateManager::OnDebugRushDraw() {
    return false;
}

bool ABtlGuiStateManager::IsLayoutDebugMenuOpen() {
    return false;
}

EBtlGuiState ABtlGuiStateManager::GetState() {
    return EBtlGuiState::BTL_STATE_NONE;
}

EBtlGuiState ABtlGuiStateManager::GetPrevState() {
    return EBtlGuiState::BTL_STATE_NONE;
}

int32 ABtlGuiStateManager::GetDebugSkillNamePanelID() {
    return 0;
}

int32 ABtlGuiStateManager::GetDebugJyokyoHelpID() {
    return 0;
}

int32 ABtlGuiStateManager::GetDebugDamageTextIdx() {
    return 0;
}

void ABtlGuiStateManager::ClearState() {
}

void ABtlGuiStateManager::ChangePrevState(bool sendFlag, int32 sendNumber) {
}

ABtlGuiStateManager::ABtlGuiStateManager() {
    this->nowState = EBtlGuiState::BTL_STATE_NONE;
    this->prevState = EBtlGuiState::BTL_STATE_NONE;
    this->StateList.AddDefaulted(1);
}

