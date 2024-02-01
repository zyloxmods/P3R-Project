#include "SprData.h"

FSprData::FSprData() {
    this->Width = 0.00f;
    this->Height = 0.00f;
    this->U0 = 0.00f;
    this->V0 = 0.00f;
    this->U1 = 0.00f;
    this->v1 = 0.00f;
    this->Texture = NULL;
    this->RGBA[0] = 0;
    this->RGBA[1] = 0;
    this->RGBA[2] = 0;
    this->RGBA[3] = 0;
    this->StretchLen[0] = 0;
    this->StretchLen[1] = 0;
    this->StretchLen[2] = 0;
    this->StretchLen[3] = 0;
    this->ScalingSize[0] = 0;
    this->ScalingSize[1] = 0;
}

