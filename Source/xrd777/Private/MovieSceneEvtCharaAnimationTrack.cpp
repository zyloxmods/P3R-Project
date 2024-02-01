#include "MovieSceneEvtCharaAnimationTrack.h"

UMovieSceneEvtCharaAnimationTrack::UMovieSceneEvtCharaAnimationTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EAtlCharaAnimFireEventsAtPosition::AfterSpawn;
}

