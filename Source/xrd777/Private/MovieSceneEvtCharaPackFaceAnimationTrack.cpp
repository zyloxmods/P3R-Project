#include "MovieSceneEvtCharaPackFaceAnimationTrack.h"

UMovieSceneEvtCharaPackFaceAnimationTrack::UMovieSceneEvtCharaPackFaceAnimationTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EAtlCharaFaceAnimFireEventsAtPosition::AfterSpawn;
}

