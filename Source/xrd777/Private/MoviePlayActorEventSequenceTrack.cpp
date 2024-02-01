#include "MoviePlayActorEventSequenceTrack.h"

bool AMoviePlayActorEventSequenceTrack::SyncInstance() {
    return false;
}

void AMoviePlayActorEventSequenceTrack::SetPause_Main220040(bool flag) {
}

void AMoviePlayActorEventSequenceTrack::OnTextureUpdated(int32 InFrameNumber, UManaComponent* InManaComponent) {
}

void AMoviePlayActorEventSequenceTrack::OnSequenceUpdate(FQualifiedFrameTime InCurrentTime, FQualifiedFrameTime InPreviousTime) {
}

void AMoviePlayActorEventSequenceTrack::OnSeekCompleted(int32 InFrameNumber, UManaComponent* InManaComponent) {
}

void AMoviePlayActorEventSequenceTrack::OnBeginPlay(UManaComponent* InManaComponent) {
}

bool AMoviePlayActorEventSequenceTrack::IsPause_Main220040() {
    return false;
}

AMoviePlayActorEventSequenceTrack* AMoviePlayActorEventSequenceTrack::GetInstance() {
    return NULL;
}

void AMoviePlayActorEventSequenceTrack::CreateInstance() {
}

bool AMoviePlayActorEventSequenceTrack::CheckInstance() {
    return false;
}

AMoviePlayActorEventSequenceTrack::AMoviePlayActorEventSequenceTrack() {
    this->CuePointManager = NULL;
}

