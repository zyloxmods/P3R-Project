#include "MoviePlayActor.h"

void AMoviePlayActor::VisibleKeyHelp_Implementation(bool bIsVisible) {
}

bool AMoviePlayActor::SyncInstance() {
    return false;
}

void AMoviePlayActor::ReserveDestroy() {
}

void AMoviePlayActor::Pause_Implementation(bool NewIsPause) {
}

bool AMoviePlayActor::IsReserveDestroy() {
    return false;
}

bool AMoviePlayActor::IsPause() {
    return false;
}

bool AMoviePlayActor::IsBattleWipe() {
    return false;
}

AMoviePlayActor* AMoviePlayActor::GetInstance() {
    return NULL;
}

bool AMoviePlayActor::GetBGMFlg() {
    return false;
}

void AMoviePlayActor::CreateInstance() {
}

bool AMoviePlayActor::CheckInstance() {
    return false;
}

bool AMoviePlayActor::CanDestroy() {
    return false;
}

AMoviePlayActor::AMoviePlayActor() {
    this->IsMaterialMovie = false;
    this->CuePointManager = NULL;
}

