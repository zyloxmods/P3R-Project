#include "TitleActor.h"

void ATitleActor::OnLoaded() {
}

ATitleActor::ATitleActor() {
    this->CurrentTitleState = NULL;
    this->DefaultCamera = NULL;
    this->TitleCamera = NULL;
    this->m_GamerTagWidget = NULL;
    this->m_GamerTagWidgetClass = NULL;
    this->TitleAssetLoader = NULL;
    this->TitleDataTable = NULL;
    this->TitleSelectDataTable = NULL;
    this->LogoActor = NULL;
    this->LogoActorSC = NULL;
    this->LayoutDataTable = NULL;
    this->UILayoutLayoutDataTable = NULL;
    this->TitleSpr = NULL;
    this->CautionTex = NULL;
    this->PhotosensitiveCautionTex = NULL;
    this->McaCameraAsset = NULL;
    this->MainCamera = NULL;
    this->OldCamera = NULL;
    this->PressAnyButtonMat = NULL;
    this->PressAnyButtonMID = NULL;
}

