#include "TitleStateNewGame.h"

void UTitleStateNewGame::OnCloseDifficultySelection() {
}

void UTitleStateNewGame::OnCanselDifficultySelection() {
}

UTitleStateNewGame::UTitleStateNewGame() {
    this->AddContentCheck = NULL;
    this->Loader = NULL;
    this->DifficultySelection = NULL;
    this->DifficultySelectionSC = NULL;
}

