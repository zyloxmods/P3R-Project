#include "AtlEvtLevelSequenceActor.h"

void AAtlEvtLevelSequenceActor::PreloadEvtDialogueTime(UMovieSceneSequence* MovieSceneSequence, UMovieSceneSubSection* CurrentSubSceneSection) {
}

void AAtlEvtLevelSequenceActor::OnHighSpeed(bool bEnable) {
}

bool AAtlEvtLevelSequenceActor::IsCompletedLoadSoundAssets() const {
    return false;
}
AAtlEvtLevelSequenceActor::AAtlEvtLevelSequenceActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
}