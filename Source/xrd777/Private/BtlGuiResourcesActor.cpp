#include "BtlGuiResourcesActor.h"

void ABtlGuiResourcesActor::RequestAddResources(const FString& ResourcesPath) {
}

void ABtlGuiResourcesActor::InitializeTopLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeTheurgiaTextLayoutData(UDataTable* textData, UDataTable* textRowData, UDataTable* textPosData) {
}

void ABtlGuiResourcesActor::InitializeTheurgiaLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeTargetInfoTextLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeTargetInfoLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeTacticsListTextLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeTacticsLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeRushLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializePromiseLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeOthersLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeItemSkillListTextLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeGuardLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeDamageIconLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeBattleTouchCollLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeAnalyzeTextLayoutData(UDataTable* Data) {
}

void ABtlGuiResourcesActor::InitializeAnalyzeLayoutData(UDataTable* Data) {
}


UObject* ABtlGuiResourcesActor::GetAddResources() {
    return NULL;
}

void ABtlGuiResourcesActor::CallDelegate() {
}

ABtlGuiResourcesActor::ABtlGuiResourcesActor() {
    this->pLoadAsset = NULL;
    this->pLoader = NULL;
    this->pItemSkillListTextDataTable = NULL;
    this->pTargetInfoTextDataTable = NULL;
    this->pTacticsListTextDataTable = NULL;
    this->pTheurgiaDataTable = NULL;
    this->pTacticsDataTable = NULL;
    this->pTopDataTable = NULL;
    this->pGuardDataTable = NULL;
    this->pTheurgiaTextDataTable = NULL;
    this->pTheurgiaTextRowDataTable = NULL;
    this->pTheurgiaTextPosDataTable = NULL;
    this->pTacticsCheckDataTable = NULL;
    this->pPromiseDataTable = NULL;
    this->pAnalyzeDataTable = NULL;
    this->pAnalyzeTextDataTable = NULL;
    this->pDamageIconDataTable = NULL;
    this->pRushDataTable = NULL;
    this->pOthersDataTable = NULL;
    this->pTouchCollDataTable = NULL;
}

