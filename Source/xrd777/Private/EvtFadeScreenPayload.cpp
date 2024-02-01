#include "EvtFadeScreenPayload.h"

FEvtFadeScreenPayload::FEvtFadeScreenPayload() {
    this->FadeScreenType = EEvtFadeScreenType::EVT_FADESCREEN_FADE_IN;
    this->FadeType = 0;
    this->FadeFrame = 0;
    this->ColorR = 0;
    this->ColorG = 0;
    this->ColorB = 0;
}

