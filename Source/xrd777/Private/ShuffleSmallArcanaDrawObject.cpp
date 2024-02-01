#include "ShuffleSmallArcanaDrawObject.h"

FShuffleSmallArcanaDrawObject::FShuffleSmallArcanaDrawObject() {
    this->Card = NULL;
    this->Shine1 = NULL;
    this->Shine2 = NULL;
    this->Frame = NULL;
    this->BonusShine = NULL;
    this->Glow = NULL;
    this->GetEffect = NULL;
    this->isNewGetArcana = false;
    this->GlowAlpha = 0.00f;
    this->GlowWaitAnimeTime = 0.00f;
    this->isStartGlowWaitAnime = false;
}

