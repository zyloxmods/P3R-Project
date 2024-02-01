#include "MoviePlayActorBase.h"

void AMoviePlayActorBase::Start_Implementation() {
}

void AMoviePlayActorBase::SetManaComponent(UManaComponent* InManaComponent) {
}

void AMoviePlayActorBase::RequestMovie(int32 ID) {
}

void AMoviePlayActorBase::Remove_Implementation() {
}

void AMoviePlayActorBase::MoviePlay_Implementation(const FString& OpenedUrl) {
}

void AMoviePlayActorBase::MovieEnd_Implementation() {
}

void AMoviePlayActorBase::Close_Implementation(bool ForceClose) {
}


AMoviePlayActorBase::AMoviePlayActorBase() {
    this->enableAutoFlg = true;
    this->Loader = NULL;
    this->MainActor = NULL;
    this->SubClass = NULL;
    this->ManaComponent = NULL;
}

