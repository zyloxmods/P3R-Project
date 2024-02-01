#include "LoadingDraw.h"

void ALoadingDraw::SetVisible(bool on) {
}

void ALoadingDraw::SetTimeZone(ECldTimeZone inTimeShifting) {
}

void ALoadingDraw::Draw() {
}

ALoadingDraw::ALoadingDraw() {
    this->CloudMoveFlameSlow = 120.00f;
    this->CloudMoveFlameFast = 60.00f;
    this->WhetherToStart = 3.00f;
    this->FadeTime = 120.00f;
    this->earlyWaitTime = 1.00f;
}

