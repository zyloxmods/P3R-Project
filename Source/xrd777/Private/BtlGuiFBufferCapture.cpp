#include "BtlGuiFBufferCapture.h"





void ABtlGuiFBufferCapture::BtlFBufferCaptureStart(bool NewIs2DCapture, bool isGrayScale, float AnimTime) {
}

ABtlGuiFBufferCapture* ABtlGuiFBufferCapture::BtlFBufferCaptureGetInstance() {
    return NULL;
}

void ABtlGuiFBufferCapture::BtlFBufferCaptureDrawEnd() {
}

void ABtlGuiFBufferCapture::BtlFBufferCaptureDelete() {
}

void ABtlGuiFBufferCapture::BtlFBufferCaptureCreate2D(float GrayScale, float WhiteOut, float AnimTime) {
}

void ABtlGuiFBufferCapture::BtlFBufferCaptureCreate(float GrayScale, float WhiteOut, float AnimTime) {
}

ABtlGuiFBufferCapture::ABtlGuiFBufferCapture() {
    this->LoadClass = NULL;
    this->pLoader = NULL;
    this->isSetupCompleted = false;
    this->isDraw = true;
    this->is2DCapture = false;
    this->animationTime = 0.00f;
    this->endAnimationTime = 0.00f;
    this->endGtayScale = 0.00f;
    this->endWhiteOut = 0.00f;
}

