#include "FldOperationPlayer.h"

UFldOperationPlayer::UFldOperationPlayer() {
    this->HitUI = false;
    this->Timer = 0.00f;
    this->StackTimer = 0.00f;
    this->CameraChanged = false;
    this->Clamp = 0.06f;
}

