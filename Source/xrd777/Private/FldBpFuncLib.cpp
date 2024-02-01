#include "FldBpFuncLib.h"

void UFldBpFuncLib::SyncFade(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UFldBpFuncLib::StartFadeOUT(int32 Type, int32 Frame, const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UFldBpFuncLib::StartFadeIN(int32 Type, int32 Frame, const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

bool UFldBpFuncLib::ShowSubLevellOrigin(const UObject* WorldContextObject, const FString& LevelAssetPath) {
    return false;
}

void UFldBpFuncLib::SetSkelMeshCompUpdateAnimationInEditor(USkeletalMeshComponent* Component, const bool NewUpdateState) {
}

void UFldBpFuncLib::SetLocalFlag(FName FlagName, bool OnOff) {
}

void UFldBpFuncLib::SetLocalCounter(FName CntName, int32 Value) {
}

void UFldBpFuncLib::RequestUnloadSubLevellOrigin(const UObject* WorldContextObject, const FString& LevelAssetPath) {
}

void UFldBpFuncLib::RequestLoadSubLevelOrigin(const UObject* WorldContextObject, const FString& LevelAssetPath) {
}

bool UFldBpFuncLib::HideSubLevellOrigin(const UObject* WorldContextObject, const FString& LevelAssetPath) {
    return false;
}

EFldLoadPersistentType UFldBpFuncLib::GetPersistentType(int32 FieldMajorID, int32 FieldMinorID) {
    return EFldLoadPersistentType::Daily;
}

void UFldBpFuncLib::GetLocalFlag(FName FlagName, EFldBpRetFlag& RetFlag) {
}

int32 UFldBpFuncLib::GetLocalCounter(FName CntName) {
    return 0;
}

void UFldBpFuncLib::FldSoundManagerSetAisacValue_FRONT_VELVETROOM(float ControlValue) {
}

void UFldBpFuncLib::FldSetDisableNpcActor(int32 NpcMajorID, int32 NpcMinorID, bool ToHide) {
}

void UFldBpFuncLib::FldLibUpdateNpcLayoutTable(UDataTable* SubLevelTable, UDataTable* DataTable) {
}

void UFldBpFuncLib::FldLibUpdateCmmNpcLayoutTable(UDataTable* SubLevelTable, UDataTable* DataTable) {
}

AActor* UFldBpFuncLib::FldGetPlayerActor() {
    return NULL;
}

void UFldBpFuncLib::FldDispCriAtomExDebugResourcesInfo() {
}

void UFldBpFuncLib::FldCommitViewports() {
}

void UFldBpFuncLib::CheckRegistedSubLevel(const UObject* WorldContextObject, const FString& LevelName, EFldBpRetBool& Result) {
}

void UFldBpFuncLib::CheckLoadedCommonDataSyncBlock() {
}

void UFldBpFuncLib::CheckLoadedCommonData(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UFldBpFuncLib::CallFieldLevel(int32 FieldMajorID, int32 FieldMinorID, int32 TotalDay, ECldTimeZone TimeZone, int32 StartID) {
}

void UFldBpFuncLib::CallFieldKeyFreeEventLevel(int32 FieldMajorID, int32 FieldMinorID, int32 TotalDay, ECldTimeZone TimeZone, int32 eventId, int32 PlayerStartID) {
}

UFldBpFuncLib::UFldBpFuncLib() {
}

