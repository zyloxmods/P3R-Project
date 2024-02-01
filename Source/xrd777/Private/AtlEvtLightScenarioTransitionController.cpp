#include "AtlEvtLightScenarioTransitionController.h"

void AAtlEvtLightScenarioTransitionController::TransitionLightScenario(int32 InNextLightScenarioIndex) {
}

void AAtlEvtLightScenarioTransitionController::RemoveAllLightScenarioParam() {
}

void AAtlEvtLightScenarioTransitionController::OnUnloadFinished(int32 Index) {
}

void AAtlEvtLightScenarioTransitionController::OnLoadFinished(int32 Index) {
}

void AAtlEvtLightScenarioTransitionController::OnCompletedPreload() {
}

bool AAtlEvtLightScenarioTransitionController::IsDoingTransition() const {
    return false;
}

int32 AAtlEvtLightScenarioTransitionController::GetLightScenarioNum() const {
    return 0;
}

int32 AAtlEvtLightScenarioTransitionController::AddLightScenario(FName LevelName) {
    return 0;
}

AAtlEvtLightScenarioTransitionController::AAtlEvtLightScenarioTransitionController() {
    this->LoaderActor = NULL;
    this->UnloaderActor = NULL;
    this->pAssetLoader = NULL;
}

