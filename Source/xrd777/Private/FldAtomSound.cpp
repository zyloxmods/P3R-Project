#include "FldAtomSound.h"
#include "AtomComponent.h"

void AFldAtomSound::stopSound_IMD() {
}

void AFldAtomSound::stopSound() {
}

void AFldAtomSound::PlaySound() {
}

void AFldAtomSound::FadeOutSound(float FadeOutDuration) {
}

void AFldAtomSound::FadeInSound(float FadeInDuration) {
}

bool AFldAtomSound::CheckEnablePlay() {
    return false;
}

AFldAtomSound::AFldAtomSound() {
    this->mSeasonSpring_ = true;
    this->mSeasonSummer_ = true;
    this->mSeasonAutumn_ = true;
    this->mSeasonWinter_ = true;
    this->mTimeNoon_ = false;
    this->mTimeAfternoon_ = false;
    this->mTimeNight_ = false;
    this->mTimeShadow_ = false;
    this->mOffInEvent_ = false;
    this->AtomComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
}

