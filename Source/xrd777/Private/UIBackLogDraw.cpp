#include "UIBackLogDraw.h"

void AUIBackLogDraw::Update() {
}

AUIBackLogDraw::AUIBackLogDraw() {
    this->CursorMoveSpeed = 3.00f;
    this->IconWaveMoveSpeed = 2.00f;
    this->AnimFinishTime = 5.00f;
    this->SelMsgInterval = 20.00f;
    this->MingMsgInterval = 20.00f;
    this->SoundPlusPosX = 0.00f;
    this->SoundPlusPosY = 0.00f;
    this->tex = NULL;
    this->captureBackGround = NULL;
    this->pLayoutDataTable = NULL;
}

