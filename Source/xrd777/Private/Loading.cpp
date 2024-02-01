#include "Loading.h"

void ULoading::Start(ECldTimeZone Time) {
}

void ULoading::SpawnDrawActor(ALoadingDraw* LoadingDraw) {
}

void ULoading::End() {
}

ULoading::ULoading() {
    this->pLoadingDraw = NULL;
    this->LoadingDrawClass = NULL;
    this->pAssetLoader = NULL;
}

