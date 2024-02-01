#include "TitleLogoActor.h"

bool ATitleLogoActor::IsGameClear() {
    return false;
}

float ATitleLogoActor::GetAlpha() {
    return 0.0f;
}

ATitleLogoActor::ATitleLogoActor() {
    this->FadeInFrame = 6;
    this->FadeOutFrame = 6;
}

