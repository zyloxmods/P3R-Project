#include "ManaMovie.h"

bool UManaMovie::Validate() const {
    return false;
}

FString UManaMovie::GetUrl() const {
    return TEXT("");
}

UManaMovie::UManaMovie() {
    this->NumSubtitleChannels = 0;
    this->MaxSubtitleSize = 0;
    this->bIsAlpha = false;
}

