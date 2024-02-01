#include "SuzukiDrawTestDraw.h"

void ASuzukiDrawTestDraw::Update(const float inDeltaTime) {
}

bool ASuzukiDrawTestDraw::SyncModelCapture(const FTransform modelTransform, const FVector NewGazeOffset) {
    return false;
}

void ASuzukiDrawTestDraw::FromBPDraw(float X, float Y, float Angle) {
}

ASuzukiDrawTestDraw::ASuzukiDrawTestDraw() {
    this->pMaterial = NULL;
    this->pParamMateDynamic = NULL;
    this->pPlgAsset = NULL;
    this->pCaptureMaterial = NULL;
    this->pBackgroundMaterial = NULL;
    this->pCaptureTexture = NULL;
    this->pModelCaptureTex = NULL;
    this->PWorldUpdater_ = NULL;
    this->State = 0;
    this->captureBackGround = NULL;
}

