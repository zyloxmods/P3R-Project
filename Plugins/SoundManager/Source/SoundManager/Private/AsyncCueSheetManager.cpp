#include "AsyncCueSheetManager.h"

void UAsyncCueSheetManager::LoadAsync(FSoftObjectPath PathForCueSheet) {
}

USoundAtomCueSheet* UAsyncCueSheetManager::GetAtomCueSheet() {
    return NULL;
}

UAsyncCueSheetManager::UAsyncCueSheetManager() {
    this->CueSheet = NULL;
}

