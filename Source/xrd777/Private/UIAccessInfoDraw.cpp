#include "UIAccessInfoDraw.h"

void AUIAccessInfoDraw::OnFinishedScr(int32 ExitType) {
}

AUIAccessInfoDraw::AUIAccessInfoDraw() {
    this->m_pMiniMapSpr = NULL;
    this->m_pPlaceSpr = NULL;
    this->m_pMiniMap = NULL;
    this->m_pLoader = NULL;
    this->m_pScrActor = NULL;
    this->m_pBfAsset = NULL;
    this->m_pBmdAsset = NULL;
    this->m_pLocationSelect = NULL;
    this->m_pPlacePlg = NULL;
    this->LayoutData = NULL;
    this->LayoutDataTable = NULL;
    this->LayoutParamData = NULL;
    this->PlaceNameLayoutData = NULL;
    this->PlaceNameLayoutDataTable = NULL;
    this->MapNameLayoutData = NULL;
    this->MapNameLayoutDataTable = NULL;
    this->IwatodaiFloorNoLayoutData = NULL;
    this->IwatodaiFloorNoLayoutDataTable = NULL;
    this->MallFloorNoLayoutData = NULL;
    this->MallFloorNoLayoutDataTable = NULL;
    this->SchoolFloorNoLayoutData = NULL;
    this->SchoolFloorNoLayoutDataTable = NULL;
    this->DormitoryFloorNoLayoutData = NULL;
    this->DormitoryFloorNoLayoutDataTable = NULL;
    this->RyokanFloorNoLayoutData = NULL;
    this->RyokanFloorNoLayoutDataTable = NULL;
    this->HotelFloorNoLayoutData = NULL;
    this->HotelFloorNoLayoutDataTable = NULL;
    this->ThebelFloorNoLayoutData = NULL;
    this->ThebelFloorNoLayoutDataTable = NULL;
    this->ArqaFloorNoLayoutData = NULL;
    this->ArqaFloorNoLayoutDataTable = NULL;
    this->YabbashahFloorNoLayoutData = NULL;
    this->YabbashahFloorNoLayoutDataTable = NULL;
    this->TziahFloorNoLayoutData = NULL;
    this->TziahFloorNoLayoutDataTable = NULL;
    this->HarabahFloorNoLayoutData = NULL;
    this->HarabahFloorNoLayoutDataTable = NULL;
    this->AdamahFloorNoLayoutData = NULL;
    this->AdamahFloorNoLayoutDataTable = NULL;
}

