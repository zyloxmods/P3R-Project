#include "BtlCoreComponent.h"

void UBtlCoreComponent::ToggleSkillEditMode() {
}

void UBtlCoreComponent::TheurgiaDebugSetup() {
}

bool UBtlCoreComponent::SyncReadyIndependentBattle() {
    return false;
}

bool UBtlCoreComponent::SyncInfoGameover() {
    return false;
}

void UBtlCoreComponent::SpawnCharacters(bool initialHiding) {
}

void UBtlCoreComponent::ShowDebugData() {
}

FBtlEncountParam UBtlCoreComponent::SetupIndependentBattle(const FBtlEncountParam& EncountParam) {
    return FBtlEncountParam{};
}

void UBtlCoreComponent::SetupDebugKill(bool& RejectDebugKillRequest) {
}

void UBtlCoreComponent::SetRushMode(bool Enable) {
}

void UBtlCoreComponent::SetRushDisable(bool disable) {
}

void UBtlCoreComponent::SetPhase(ABtlPhase* NextPhase) {
}

void UBtlCoreComponent::SetPersonaStatusMode(bool Enable) {
}

void UBtlCoreComponent::SetEncountParam(FBtlEncountParam Encount) {
}

void UBtlCoreComponent::SetDebugStateString(const FString& str) {
}

void UBtlCoreComponent::SetDebugLatestCamera(const FString& str) {
}

void UBtlCoreComponent::SetBGMTheurgiaMode(bool Enable) {
}

void UBtlCoreComponent::SetBattleTimeDilation(float Rate) {
}

void UBtlCoreComponent::SetAnalyzeMode(bool Enable) {
}

void UBtlCoreComponent::RestoreGameCondition() {
}

void UBtlCoreComponent::RequestSummonEnemies() {
}

void UBtlCoreComponent::RequestSituationHelp(ABtlActor* pEmploy, EBtlJyokyohelpType Type) {
}

void UBtlCoreComponent::RequestRushMode(bool Enable) {
}

void UBtlCoreComponent::RequestPartyPanelVisible(bool Visible) {
}

bool UBtlCoreComponent::RequestEncountProcess() {
    return false;
}

void UBtlCoreComponent::RequestCutinAging(bool Enable) {
}

void UBtlCoreComponent::RequestClearUtensilEffectWithRelocation() {
}

void UBtlCoreComponent::RequestBGM(EBtlBGMType Type) {
}

void UBtlCoreComponent::RemoveUtensilEffect(AAppActor* Target) {
}

void UBtlCoreComponent::RelocationRequestOnBCDPlay(bool Enable) {
}

void UBtlCoreComponent::RelocationCustom(EBtlRelocationType Type) {
}

void UBtlCoreComponent::Relocation(bool PlayerOnly) {
}

void UBtlCoreComponent::RegisterTakeoverCharacter(ABtlActor* Target, ABtlActor* takeoverFrom) {
}

void UBtlCoreComponent::ProgressOrder() {
}

void UBtlCoreComponent::ProcessBeforeStartNextTurn() {
}

void UBtlCoreComponent::ProcBeforeLoad() {
}

void UBtlCoreComponent::ProcAheadOfRetrySequence() {
}

void UBtlCoreComponent::ProcAfterLoad() {
}

void UBtlCoreComponent::ProcAfterAllCharacterSpawned() {
}

void UBtlCoreComponent::PlayInfoGameover() {
}

void UBtlCoreComponent::PlayInfoFukaCutin() {
}

void UBtlCoreComponent::PlayInfoAlloutAttackSuggestion() {
}

void UBtlCoreComponent::PlayHighAnalyzeEvent() {
}

void UBtlCoreComponent::MarkAsUICommand() {
}

void UBtlCoreComponent::MarkAsPlayedShadowExChantCam() {
}

void UBtlCoreComponent::MarkAsPlayedFukaCutin() {
}

void UBtlCoreComponent::LoadResidentData(const FBtlEncountParam& EncountParam) {
}

void UBtlCoreComponent::LoadEnemyData(const FBtlEncountParam& EncountParam) {
}

void UBtlCoreComponent::LoadDataForSerialEncount() {
}

void UBtlCoreComponent::LoadData(const FBtlEncountParam& EncountParam) {
}

bool UBtlCoreComponent::IsNeedToFinale() const {
    return false;
}

bool UBtlCoreComponent::IsEventResult(bool& IsCaptureResult) const {
    return false;
}

bool UBtlCoreComponent::IsEventBattle() const {
    return false;
}

bool UBtlCoreComponent::IsDisableSequenceCamera() const {
    return false;
}

void UBtlCoreComponent::InitProcessBeforeFirstTurn() {
}

void UBtlCoreComponent::InitializeOrder() {
}

void UBtlCoreComponent::InitializeBattleForNextBattle() {
}

void UBtlCoreComponent::InitializeBattle() {
}

ABtlActor* UBtlCoreComponent::GetResultMainPlayer() {
    return NULL;
}

TArray<ABtlActor*> UBtlCoreComponent::GetPlayerList() {
    return TArray<ABtlActor*>();
}

EBtlPhaseType UBtlCoreComponent::GetPhaseType() const {
    return EBtlPhaseType::None;
}

ABtlPhase* UBtlCoreComponent::GetPhase() {
    return NULL;
}

ABtlActor* UBtlCoreComponent::GetNextAction(int32 Index) {
    return NULL;
}

ABtlActor* UBtlCoreComponent::GetHero() {
    return NULL;
}

ABtlActor* UBtlCoreComponent::GetEventMainAction() {
    return NULL;
}

TArray<ABtlActor*> UBtlCoreComponent::GetEnemyList() {
    return TArray<ABtlActor*>();
}

FString UBtlCoreComponent::GetEnemyFormationName() {
    return TEXT("");
}

FBtlEncountParam UBtlCoreComponent::GetEncountParamForBP() {
    return FBtlEncountParam{};
}

float UBtlCoreComponent::GetElapsedTime() const {
    return 0.0f;
}

float UBtlCoreComponent::GetDeltaTime() const {
    return 0.0f;
}

FString UBtlCoreComponent::GetDebugStateString() const {
    return TEXT("");
}

FString UBtlCoreComponent::GetDebugModeName() const {
    return TEXT("");
}

FString UBtlCoreComponent::GetDebugLatestCamera() const {
    return TEXT("");
}

int32 UBtlCoreComponent::GetDebugCalcFlag() const {
    return 0;
}

UDataTable* UBtlCoreComponent::GetBossCameraTable() {
    return NULL;
}

TArray<ABtlActor*> UBtlCoreComponent::GetAllCharacterList() {
    return TArray<ABtlActor*>();
}

ABtlActor* UBtlCoreComponent::GetAction() {
    return NULL;
}

void UBtlCoreComponent::FinishLoadingRecord(EBtlLoadingTimeCategory Category) {
}

void UBtlCoreComponent::FinalProcessAfterGameover() {
}

void UBtlCoreComponent::FinalizeActionTurn() {
}

void UBtlCoreComponent::FadeoutBGM(int32 FadeFrame) {
}

void UBtlCoreComponent::DoInterruptProcessEscape() {
}

void UBtlCoreComponent::DestroyAllBattleActor() {
}

void UBtlCoreComponent::DeleteCapture() {
}

void UBtlCoreComponent::DebugSetCustomDamage(int32 Damage) {
}

int32 UBtlCoreComponent::DebugGetCustomDamage() const {
    return 0;
}

void UBtlCoreComponent::DebugAllCharacterToDying() {
}

void UBtlCoreComponent::DebugAllCharacterToDown() {
}

FBtlEncountParam UBtlCoreComponent::CoordinateEncountParam(FBtlEncountParam Encount) {
    return FBtlEncountParam{};
}

void UBtlCoreComponent::CoordinateBattleCondition(const FBtlEncountParam& EncountParam) {
}

void UBtlCoreComponent::ClearUtensilEffect() {
}

void UBtlCoreComponent::ClearUIForSerialEncount() {
}

bool UBtlCoreComponent::CheckValidFukaTheurgia() const {
    return false;
}

bool UBtlCoreComponent::CheckUseQuickEncount() const {
    return false;
}

bool UBtlCoreComponent::CheckUsableRetry() const {
    return false;
}

bool UBtlCoreComponent::CheckUsableFukaTheurgia() const {
    return false;
}

bool UBtlCoreComponent::CheckSuspendTurnProgress() const {
    return false;
}

bool UBtlCoreComponent::CheckShuffleTimeOccurrence() const {
    return false;
}

bool UBtlCoreComponent::CheckShaffleTimeAllowed() const {
    return false;
}

bool UBtlCoreComponent::CheckShadowExChantCamMustPlay() const {
    return false;
}

bool UBtlCoreComponent::CheckRushSwitchable() const {
    return false;
}

bool UBtlCoreComponent::CheckRushDisable() const {
    return false;
}

bool UBtlCoreComponent::CheckRequestRushMode() const {
    return false;
}

bool UBtlCoreComponent::CheckPlayingEventScript() const {
    return false;
}

bool UBtlCoreComponent::CheckPlayableDesignedCommonAttackCamera() const {
    return false;
}

bool UBtlCoreComponent::CheckNeedTurningTable() const {
    return false;
}

bool UBtlCoreComponent::CheckNeedResult() const {
    return false;
}

bool UBtlCoreComponent::CheckLineFormation() const {
    return false;
}

bool UBtlCoreComponent::CheckKnockedoutHero() {
    return false;
}

bool UBtlCoreComponent::CheckIsSerialEncountBattle() const {
    return false;
}

bool UBtlCoreComponent::CheckInterruptProcessEscape() const {
    return false;
}

bool UBtlCoreComponent::CheckInRush() const {
    return false;
}

bool UBtlCoreComponent::CheckInAllout() const {
    return false;
}

bool UBtlCoreComponent::CheckIgnoreShowingCharacterAtPreAct() const {
    return false;
}

bool UBtlCoreComponent::CheckHighAnalyzeUnlocked() const {
    return false;
}

bool UBtlCoreComponent::CheckHighAnalyzeEnable() const {
    return false;
}

bool UBtlCoreComponent::CheckHasHighAnalyzeEvent() const {
    return false;
}

bool UBtlCoreComponent::CheckEventBattleFinish() {
    return false;
}

bool UBtlCoreComponent::CheckEnemyLoadFinished() const {
    return false;
}

bool UBtlCoreComponent::CheckEnableRelocationClosedFormation() const {
    return false;
}

bool UBtlCoreComponent::CheckEnableFukaCutin() const {
    return false;
}

bool UBtlCoreComponent::CheckEnableActEndProc() const {
    return false;
}

bool UBtlCoreComponent::CheckEnableActEndEvent() const {
    return false;
}

bool UBtlCoreComponent::CheckDecideRetry() const {
    return false;
}

bool UBtlCoreComponent::CheckCutinAging() const {
    return false;
}

bool UBtlCoreComponent::CheckBattleProgressToNextBattle() {
    return false;
}

bool UBtlCoreComponent::CheckBattleInProgress() {
    return false;
}

bool UBtlCoreComponent::CheckAnyInterruptProcessBetweenTurn() const {
    return false;
}

bool UBtlCoreComponent::CheckAllowEnemyAttackBackshotCamera() const {
    return false;
}

bool UBtlCoreComponent::CheckAlloutResult() const {
    return false;
}

void UBtlCoreComponent::CallResultCapture() {
}

void UBtlCoreComponent::CallInfoForSerialEncount() {
}

void UBtlCoreComponent::CallDebugWindow() {
}

void UBtlCoreComponent::CallDebugSkillSelect() {
}

void UBtlCoreComponent::CallDebugMonitor() {
}

void UBtlCoreComponent::CallCapture() {
}

void UBtlCoreComponent::BeginLoadingRecord(EBtlLoadingTimeCategory Category) {
}

bool UBtlCoreComponent::BattleFadeOutSync() {
    return false;
}

void UBtlCoreComponent::BattleFadeOut(bool ForceRapid, bool White) {
}

void UBtlCoreComponent::BattleFadeIn(bool ForceRapid) {
}

void UBtlCoreComponent::AffectRetry() {
}

void UBtlCoreComponent::AffectHighAnalyze(ABtlActor* pTarget) {
}

void UBtlCoreComponent::AddUtensilEffect(AAppActor* Target) {
}

UBtlCoreComponent::UBtlCoreComponent() {
    this->FormationTable = NULL;
    this->BtlCutscene = NULL;
    this->Boss = NULL;
    this->Countdown = NULL;
    this->BtlEventController = NULL;
    this->ResidentData = NULL;
    this->PlayerLocationRoot = NULL;
    this->EnemyLocationRoot = NULL;
    this->EnemyAttachRoot = NULL;
    this->EnemyTurnTableRotationTargetCharacter = NULL;
    this->BtlEnvironmentComponent = NULL;
    this->FadeManager = NULL;
    this->ShakeManager = NULL;
    this->SummonEnemyCount = 0;
    this->BattleElapsedTime = 0.00f;
    this->BattleDeltaTime = 0.00f;
    this->EncountIndex = 0;
    this->BattleResult = EBtlFinishResult::None;
    this->CurrentAction = NULL;
    this->EventMainAction = NULL;
    this->LatestAction = NULL;
    this->ActionRequestedEscape = NULL;
    this->DebugMonitorData = NULL;
    this->Compensation = NULL;
    this->Order = NULL;
    this->CurrentPhase = NULL;
    this->RequestChangePhase = false;
    this->RequestedNextPhase = NULL;
    this->ResultResource = NULL;
    this->LoadedResidentData = false;
    this->LoadedBattleData = false;
    this->LoadedAllyData = false;
    this->LoadedEnemyData = false;
    this->LoadedPersonaData = false;
    this->LoadedSummonEnemyData = false;
    this->LoadedAddedPlayerData = false;
    this->LoadedEncSerial = false;
    this->LoadedDebugMonitor = false;
    this->Loader = NULL;
    this->LoaderEnemy = NULL;
    this->LoaderPersona = NULL;
    this->LoaderSummonEnemy = NULL;
    this->LoaderAddedPlayer = NULL;
    this->LoaderSerialEncount = NULL;
    this->LoaderDebugMonitor = NULL;
    this->SupportInfo = NULL;
    this->InitialEquipedPersonaID = 0;
    this->DebugWindow = NULL;
    this->DebugMonitor = NULL;
    this->DebugSkillSelect = NULL;
}

