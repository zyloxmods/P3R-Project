#include "BtlCountdown.h"

void ABtlCountdown::SetVisible(bool Visible) {
}

void ABtlCountdown::PullTime_Implementation(float Time) {
}

ABtlCountdown::ABtlCountdown() {
    this->Timer = 0.00f;
    this->Speed = 1.00f;
    this->IsPlay = false;
    this->IsVisible = true;
    this->IsAnimation = false;
    this->AnimationLerp = 0.00f;
    this->AnimationStartTime = 0.00f;
    this->AnimationEndTime = 0.00f;
}

