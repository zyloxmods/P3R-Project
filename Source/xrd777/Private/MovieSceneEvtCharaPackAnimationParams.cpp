#include "MovieSceneEvtCharaPackAnimationParams.h"

FMovieSceneEvtCharaPackAnimationParams::FMovieSceneEvtCharaPackAnimationParams() {
    this->EventAnimID = EEventAnimID::BLANK;
    this->CommonAnimID = ECommonAnimID::BLANK;
    this->DungeonAnimID = EDungeonAnimID::BLANK;
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->BlendIn = 0.00f;
    this->BlendOut = 0.00f;
    this->PlayRate = 0.00f;
}

