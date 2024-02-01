#include "BustupObject.h"

UBustupObject::UBustupObject() {
    this->BaseMaterial_ = NULL;
    this->DrawableMaterial_[0] = NULL;
    this->DrawableMaterial_[1] = NULL;
    this->BaseTex_ = NULL;
    this->ShadowMask_ = NULL;
    this->RimLightMask_ = NULL;
    this->EyeTex_[0] = NULL;
    this->EyeTex_[1] = NULL;
    this->EyeTex_[2] = NULL;
    this->MouthTex_[0] = NULL;
    this->MouthTex_[1] = NULL;
    this->MouthTex_[2] = NULL;
    this->BlushTex_ = NULL;
    this->SweatTex_ = NULL;
    this->BaseMask_ = NULL;
    this->DropMask_ = NULL;
    this->Loader_ = NULL;
    this->BustupAnim_ = NULL;
    this->SupportBustupOffset_ = NULL;
}

