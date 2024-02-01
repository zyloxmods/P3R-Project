#include "AtlEvtSubsystem.h"

void UAtlEvtSubsystem::TransitionLightScenarioSublevel(int32 NextLightScenarioIndex) {
}

void UAtlEvtSubsystem::SetShowCinemaScope(bool bShow) {
}

void UAtlEvtSubsystem::SetOT(FColor Color) {
}

void UAtlEvtSubsystem::SetLocalData(int32 Index, int32 Data) {
}

void UAtlEvtSubsystem::SetEventPlayMode(EAtlEvtPlayMode InPlayMode) {
}

void UAtlEvtSubsystem::ResetLocalData() {
}

void UAtlEvtSubsystem::OnActorSpawnedEventSublevel(AActor* SpawnedActor) {
}

TArray<FString> UAtlEvtSubsystem::MakeFieldSublevelPathListField(const UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param) {
    return TArray<FString>();
}

TArray<FString> UAtlEvtSubsystem::MakeFieldSublevelPathListEvent(const UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param) {
    return TArray<FString>();
}

TArray<FString> UAtlEvtSubsystem::MakeFieldSublevelPathListCmmu(const UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param) {
    return TArray<FString>();
}

TArray<FString> UAtlEvtSubsystem::MakeFieldSublevelPathList(const UObject* WorldContextObject, EAtlEvtEventCategoryType CategoryType, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param) {
    return TArray<FString>();
}

bool UAtlEvtSubsystem::IsShowCinemaScope() const {
    return false;
}

bool UAtlEvtSubsystem::IsPlayingEventOrEditHelperMode() const {
    return false;
}

bool UAtlEvtSubsystem::IsPlayingEvent() const {
    return false;
}

bool UAtlEvtSubsystem::IsHighSpeed() const {
    return false;
}

bool UAtlEvtSubsystem::IsFinishedPreloadLightScenarioSublevels() const {
    return false;
}

bool UAtlEvtSubsystem::IsEventPlayModeEditHelper() const {
    return false;
}

bool UAtlEvtSubsystem::IsDoingTransitionLightScenarioSublevel() const {
    return false;
}

bool UAtlEvtSubsystem::IsConditionalBranchFromLocalData(EEvtConditionalBranchCompType CompType, int32 LHS, int32 Index) {
    return false;
}

void UAtlEvtSubsystem::InitScriptFinishFunction(int32 ExitType) {
}

FAtlEvtVisibleEventInfo UAtlEvtSubsystem::GetPlayingVisibleEventInfo(const UObject* WorldContextObject) const {
    return FAtlEvtVisibleEventInfo{};
}

int32 UAtlEvtSubsystem::GetLocalData(int32 Index) const {
    return 0;
}

TArray<FAtlEvtPlayLoadSublevelInfo> UAtlEvtSubsystem::GetLoadedEventSublevelInfos() const {
    return TArray<FAtlEvtPlayLoadSublevelInfo>();
}

AActor* UAtlEvtSubsystem::GetFirstAppEventCharacterByLipUniqueID(int32 LipUniqueID) const {
    return NULL;
}

AActor* UAtlEvtSubsystem::GetFirstAppEventCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID) const {
    return NULL;
}

uint32 UAtlEvtSubsystem::GetEvtPreDataHash(EAtlEvtEventCategoryType CategoryType, int32 EventMajorID, int32 EventMinorID) const {
    return 0;
}

FAtlEvtPreData UAtlEvtSubsystem::GetEvtPreData(EAtlEvtEventCategoryType CategoryType, int32 EventMajorID, int32 EventMinorID) const {
    return FAtlEvtPreData{};
}

EAtlEvtPlayMode UAtlEvtSubsystem::GetEventPlayMode() const {
    return EAtlEvtPlayMode::PlayingGameMode;
}

uint32 UAtlEvtSubsystem::GetAppEvtCharactersHash(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID) const {
    return 0;
}

FAtlEvtPlayingCharacterInfo UAtlEvtSubsystem::GetAppEventCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID) const {
    return FAtlEvtPlayingCharacterInfo{};
}

void UAtlEvtSubsystem::EvtPlay(const UObject* WorldContextObject, const FString& EvtName, const FString& InEventRank, const FAtlEvtPlayParameter& Param) {
}

void UAtlEvtSubsystem::DateOffDelegate(int32 idx) {
}

void UAtlEvtSubsystem::CallEventField(UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param) {
}

void UAtlEvtSubsystem::CallEventCmmu(UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param) {
}

AAtlEvtPlayObject* UAtlEvtSubsystem::CallEvent_SpawnLoadSublevelActor(UWorld* World, FName& StreamTargetLevelName, const FAtlEvtPlayParameter& Param, FAtlEvtPreData& PreData, EAtlEvtSublevelType SublevelType, FLatentActionInfo& LatentInfo, UObject* WorldContextObject) {
    return NULL;
}

bool UAtlEvtSubsystem::CallEvent_IsCompleteFieldLoadingSublevel() const {
    return false;
}

void UAtlEvtSubsystem::CallEvent_InternalFinishedEvent(int32 Value) {
}

void UAtlEvtSubsystem::CallEvent_DecrementFieldLoadingCount() {
}

void UAtlEvtSubsystem::CallEvent(UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param) {
}

void UAtlEvtSubsystem::CallCategoryEvent(UObject* WorldContextObject, EAtlEvtEventCategoryType CategoryType, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param) {
}

UAtlEvtSubsystem::UAtlEvtSubsystem() {
    this->LightScenarioTransitionController = NULL;
    this->pLSAssetLoader = NULL;
    this->LevelSequenceObject = NULL;
    this->EvtPreDataAsset = NULL;
    this->AssetOverrideLoader = NULL;
    this->AssetOverrideSubClass = NULL;
    this->BagActor = NULL;
    this->OnePicture = NULL;
}

