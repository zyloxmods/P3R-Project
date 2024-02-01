#include "FadePlayer.h"

void UFadePlayer::SetColor(float R, float G, float B) {
}

void UFadePlayer::OnTick(float DeltaTime) {
}

bool UFadePlayer::IsFilled() const {
    return false;
}

bool UFadePlayer::IsFading() const {
    return false;
}

bool UFadePlayer::IsExistNextFade() const {
    return false;
}

float UFadePlayer::GetRemainDuration() const {
    return 0.0f;
}

float UFadePlayer::GetProgressRate(bool Inverse) const {
    return 0.0f;
}

EFadingState UFadePlayer::GetFadingState() const {
    return EFadingState::Blank;
}

EFadeMode UFadePlayer::GetFadeMode() const {
    return EFadeMode::Idle;
}

float UFadePlayer::GetFadeDuration() const {
    return 0.0f;
}

FFadeProperties UFadePlayer::GetDefaultProperties(int32 Type) {
    return FFadeProperties{};
}

float UFadePlayer::GetCurrentStateTime() const {
    return 0.0f;
}

FColor UFadePlayer::GetColor() const {
    return FColor{};
}

void UFadePlayer::FadeOut(int32 Type, const FFadeProperties& Props) {
}

void UFadePlayer::FadeIn(int32 Type, const FFadeProperties& Props) {
}

UFadePlayer::UFadePlayer() {
    this->Programs_.AddDefaulted(11);
}

