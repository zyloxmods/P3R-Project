#include "BtlResultUIBase.h"

void ABtlResultUIBase::UpdatePersonaStatus() {
}

void ABtlResultUIBase::StartResultUI_Implementation(UBtlResultViewData* InViewData) {
}

void ABtlResultUIBase::StartPersona() {
}

void ABtlResultUIBase::StartHeroStatus() {
}

void ABtlResultUIBase::ReleaseResource_Implementation() {
}

void ABtlResultUIBase::PrevDebugPersonaTexutreID() {
}

void ABtlResultUIBase::ObtainItems() {
}

void ABtlResultUIBase::NextDebugPersonaTexutreID() {
}

void ABtlResultUIBase::LoadResource() {
}

bool ABtlResultUIBase::IsLayoutDebugMenuOpen() {
    return false;
}

bool ABtlResultUIBase::IsDrawComma(int32 digCount) {
    return false;
}

bool ABtlResultUIBase::InputTrigDecideButton() {
    return false;
}

bool ABtlResultUIBase::InputRepRUButton() {
    return false;
}

bool ABtlResultUIBase::InputDebugButtonR() {
    return false;
}

bool ABtlResultUIBase::InputDebugButtonL() {
    return false;
}

bool ABtlResultUIBase::InputDebugButton() {
    return false;
}

FVector2D ABtlResultUIBase::GetTextCollision(EBtlResultTextLayout InLayoutId) {
    return FVector2D{};
}

USprAsset* ABtlResultUIBase::GetSprAsset() {
    return NULL;
}

UBmdAsset* ABtlResultUIBase::GetResultBmd() {
    return NULL;
}

TArray<FBtlResultPersonaParam> ABtlResultUIBase::GetPersonaLevelupParam() {
    return TArray<FBtlResultPersonaParam>();
}

FVector2D ABtlResultUIBase::GetOkNextLayoutPosition(EOkNextLayout InLayoutId, FVector2D InDefaultPos) {
    return FVector2D{};
}

TArray<FBtlResultItemParam> ABtlResultUIBase::GetItemParams() {
    return TArray<FBtlResultItemParam>();
}

int32 ABtlResultUIBase::GetItemMsgID() {
    return 0;
}

FBtlResultHeroInfo ABtlResultUIBase::GetHeroInfo() {
    return FBtlResultHeroInfo{};
}

void ABtlResultUIBase::GetHeroHumanLvupParam(bool& isLvup, int32& Level) {
}

UTexture* ABtlResultUIBase::GetEquipPersonaTexture() {
    return NULL;
}

int32 ABtlResultUIBase::GetDebugPersonaTexutreID() {
    return 0;
}

TArray<FBtlResultAllyLvupParam> ABtlResultUIBase::GetAllyLevelupParam() {
    return TArray<FBtlResultAllyLvupParam>();
}

FVector2D ABtlResultUIBase::GetAdjustedLayoutPosition(EBtlResultLayout InLayoutId, FVector2D InDefaultPos) {
    return FVector2D{};
}

void ABtlResultUIBase::DrawMsg(int32 ID) {
}

void ABtlResultUIBase::CreateMsg() {
}

int32 ABtlResultUIBase::ConvertItemSprID(int32 ItemId) {
    return 0;
}

void ABtlResultUIBase::CloseMsg() {
}

void ABtlResultUIBase::CloseHeroStatus() {
}

bool ABtlResultUIBase::CheckSKillGetPersona() {
    return false;
}

bool ABtlResultUIBase::CheckShowMsg(int32 ID) {
    return false;
}

bool ABtlResultUIBase::CheckPersonaStatus() {
    return false;
}

bool ABtlResultUIBase::CheckHeroStatus() {
    return false;
}

bool ABtlResultUIBase::CheckEndResultUI_Implementation() {
    return false;
}

bool ABtlResultUIBase::CheckCompleteLoadResource() {
    return false;
}

EBtlResultHeroPersonaUpEvent ABtlResultUIBase::CalcStockUp() {
    return EBtlResultHeroPersonaUpEvent::No;
}

ABtlResultUIBase::ABtlResultUIBase() {
    this->_ViewData = NULL;
    this->isShowPlusWindos = false;
    this->isCreateMsgWindow = false;
    this->ShowingPersonaNum = 0;
    this->ShowingPlayerNum = 0;
    this->IsEndPersonaStatus = false;
    this->isEndHeroPersona = false;
    this->isEndAllyPersona = false;
    this->_PersonaStatusActor = NULL;
    this->Loader = NULL;
    this->SprResult = NULL;
    this->BmdResult = NULL;
    this->EquipPersonaTexture = NULL;
    this->ResultResource = NULL;
    this->isEndPrepare = false;
    this->LayoutData = NULL;
    this->LayoutDataTable = NULL;
    this->TextLayoutData = NULL;
    this->TextLayoutDataTable = NULL;
    this->OkNextLayoutData = NULL;
    this->OkNextLayoutDataTable = NULL;
}

