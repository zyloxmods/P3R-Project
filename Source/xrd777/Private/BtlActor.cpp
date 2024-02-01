#include "BtlActor.h"

void ABtlActor::UpdatePersonalAnimation() {
}

void ABtlActor::TurnOffOrgia(bool Dead) {
}


bool ABtlActor::SyncSkillTimeline() const {
    return false;
}

bool ABtlActor::SyncModelsForEvent() {
    return false;
}

bool ABtlActor::SyncModelsForAlloutAttack() {
    return false;
}



void ABtlActor::StartHoldup() {
}

void ABtlActor::StartEscape() {
}

void ABtlActor::StandbyAction() {
}

ABtlActor* ABtlActor::SpawnSummonEnemy() {
    return NULL;
}

void ABtlActor::SpawnPersona(bool WithoutEmergeEffect) {
}

ABtlActor* ABtlActor::SpawnFukaForTheurgia() {
    return NULL;
}


TArray<ABtlActor*> ABtlActor::SpawnAllSummonEnemy() {
    return TArray<ABtlActor*>();
}


void ABtlActor::ShowActionName() {
}



void ABtlActor::SetupConditionForAllyEscape() {
}


void ABtlActor::SetPersonaWorldLocation(FTransform WorldTrans, int32 Index) {
}

void ABtlActor::SetPersonaLocation(FTransform RelativeTrans, int32 Index) {
}

void ABtlActor::SetGuard() {
}

void ABtlActor::SetGeneralAttackResult(EBtlAlloutAttackResult Type) {
}

void ABtlActor::SetEventMode(bool Enable) {
}

void ABtlActor::SetDisableUpdateFaceAnimFromBody(bool disable) {
}

void ABtlActor::SetActiveMode(bool Enable) {
}

void ABtlActor::SetActionID(int32 ActionID) {
}

USkeletalMeshComponent* ABtlActor::SearchSkeletalMesh(UObject* InObject) {
    return NULL;
}

void ABtlActor::RumbleEnemyEmerge() {
}

void ABtlActor::RestoreModelsFromEvent() {
}

void ABtlActor::RestoreModelsFromAlloutAttack() {
}









void ABtlActor::RemoveEffectItem(EBtlBadStatusIcon Type) {
}

void ABtlActor::ProcessBeforeCommandSelectStart() {
}

void ABtlActor::ProcBeforeFadeinToAlloutAttackDamage() {
}

void ABtlActor::PreAffectSkillDamagePortion(float portionRatio) {
}


void ABtlActor::PlayVoiceTheurgia(int32 TypeIndex) {
}

void ABtlActor::PlayVoiceTakeoverStart() {
}

void ABtlActor::PlayVoiceTakeoverReceive() {
}

void ABtlActor::PlayVoiceSkillShot() {
}

void ABtlActor::PlayVoiceSkillChant() {
}

void ABtlActor::PlayVoicePersonaSkillCutin(bool isFirstSummon) {
}

void ABtlActor::PlayVoicePersonaSkill() {
}

void ABtlActor::PlayVoiceFirstSummonScene() {
}

void ABtlActor::PlayVoiceDead() {
}

void ABtlActor::PlayVoiceAlloutAttackStart() {
}

void ABtlActor::PlayVoiceAlloutAttacking() {
}

void ABtlActor::PlayVoiceAlloutAttackFinishStart() {
}

void ABtlActor::PlayVoiceAlloutAttackFinishCut() {
}



void ABtlActor::PlayEnemySummonEffect_Implementation() {
}


void ABtlActor::MarkReadyToDestroy() {
}

void ABtlActor::MarkAsPlayedStandbyCamera() {
}

void ABtlActor::MarkAsHidingPersonaForSkillScene() {
}

void ABtlActor::MarkAsCalledFirstSummonScene() {
}

void ABtlActor::MarkAsAvoidRelocationUntilTurnEnd() {
}

void ABtlActor::LoadModelsForEvent() {
}

void ABtlActor::LoadModelsForAlloutAttack() {
}

void ABtlActor::LoadFukaForTheurgia() {
}

bool ABtlActor::IsVelvet() const {
    return false;
}

bool ABtlActor::IsValidUnit() const {
    return false;
}

bool ABtlActor::IsUsingSummonSkill() const {
    return false;
}

bool ABtlActor::IsUsingOffensiveSkill() const {
    return false;
}

bool ABtlActor::IsUsingGroupTargetSkill() const {
    return false;
}

bool ABtlActor::IsUsingDamageSkill() const {
    return false;
}

bool ABtlActor::IsUsingAllTargetSkill() const {
    return false;
}

bool ABtlActor::IsSummonedEnemy() const {
    return false;
}

bool ABtlActor::IsStrega() const {
    return false;
}

bool ABtlActor::IsSkillTrafuliEscape() const {
    return false;
}

bool ABtlActor::IsSkillTheurgia() const {
    return false;
}

bool ABtlActor::IsSkillPhysicalType() const {
    return false;
}

bool ABtlActor::IsSkillOrgia() const {
    return false;
}

bool ABtlActor::IsSkillMixraid() const {
    return false;
}

bool ABtlActor::IsSkillItemDumping() const {
    return false;
}

bool ABtlActor::IsSkillHit() const {
    return false;
}

bool ABtlActor::IsSkillFukaTheurgia() const {
    return false;
}

bool ABtlActor::IsSkillEffective() const {
    return false;
}

bool ABtlActor::IsRushAttack() const {
    return false;
}

bool ABtlActor::IsPossibleTakeoverTarget() const {
    return false;
}

bool ABtlActor::IsPossibleEventTarget() const {
    return false;
}

bool ABtlActor::IsPossibleAlloutMember() const {
    return false;
}

bool ABtlActor::IsPossibleAITarget() const {
    return false;
}

bool ABtlActor::IsPlayableDyingAnim() const {
    return false;
}

bool ABtlActor::IsPersonaEvolved() const {
    return false;
}

bool ABtlActor::IsPersona() const {
    return false;
}

bool ABtlActor::IsOrgia() const {
    return false;
}

bool ABtlActor::IsOccurringSkillReflection() const {
    return false;
}

bool ABtlActor::IsOccurringSkillBlock() const {
    return false;
}

bool ABtlActor::IsOccurringSkillAbsorption() const {
    return false;
}

bool ABtlActor::IsNewBattleOutfitForAlloutFinish() const {
    return false;
}

bool ABtlActor::IsNewBattleOutfit() const {
    return false;
}

bool ABtlActor::IsManualOperation() const {
    return false;
}

bool ABtlActor::IsKoromaru() const {
    return false;
}

bool ABtlActor::IsInTakeOver() const {
    return false;
}

bool ABtlActor::IsInOneMore() const {
    return false;
}

bool ABtlActor::IsInActionTurn() const {
    return false;
}

bool ABtlActor::IsGuard() const {
    return false;
}

bool ABtlActor::IsEnemyInParty() const {
    return false;
}

bool ABtlActor::IsEnemy() const {
    return false;
}

bool ABtlActor::IsDyingBadStatus() const {
    return false;
}

bool ABtlActor::IsDying() const {
    return false;
}

bool ABtlActor::IsDown() const {
    return false;
}

bool ABtlActor::IsDormancy() const {
    return false;
}

bool ABtlActor::IsDead() const {
    return false;
}

bool ABtlActor::IsBoss() const {
    return false;
}

bool ABtlActor::IsAttackMiss() const {
    return false;
}

bool ABtlActor::IsAttackHit() const {
    return false;
}

bool ABtlActor::IsAttackFailed() const {
    return false;
}

bool ABtlActor::IsAttackControlledByAI() const {
    return false;
}

bool ABtlActor::IsAnimationWait() {
    return false;
}

bool ABtlActor::IsAnimationChant() {
    return false;
}

void ABtlActor::InstantKill() {
}


int32 ABtlActor::GetUID() const {
    return 0;
}


int32 ABtlActor::GetSummonEnemyID() const {
    return 0;
}


FBtlBossAnimRequestParam ABtlActor::GetSkillShotAnim() const {
    return FBtlBossAnimRequestParam{};
}

int32 ABtlActor::GetSkillID() const {
    return 0;
}

FBtlBossAnimRequestParam ABtlActor::GetSkillEndAnim() const {
    return FBtlBossAnimRequestParam{};
}

FBtlBossAnimRequestParam ABtlActor::GetSkillChantAnim() const {
    return FBtlBossAnimRequestParam{};
}


float ABtlActor::GetRecoveryWaitTime() const {
    return 0.0f;
}



ABtlActor* ABtlActor::GetPersona(int32 Index) {
    return NULL;
}

int32 ABtlActor::GetOriginalID() const {
    return 0;
}

int32 ABtlActor::GetItemID() const {
    return 0;
}

int32 ABtlActor::GetId() const {
    return 0;
}

FVector ABtlActor::GetHomePosition() const {
    return FVector{};
}

EBtlAlloutAttackResult ABtlActor::GetGeneralAttackResult() const {
    return EBtlAlloutAttackResult::Blank;
}

float ABtlActor::GetExpireSupportWaitTime() const {
    return 0.0f;
}

EBtlBadStatusIcon ABtlActor::GetCurrentStatusEffectType() const {
    return EBtlBadStatusIcon::Knockedout;
}


int32 ABtlActor::GetCharacterID() const {
    return 0;
}


FName ABtlActor::GetBadStatusEffectName(EBtlBadStatusIcon Type) const {
    return NAME_None;
}

float ABtlActor::GetBadStatusActionWaitTime() const {
    return 0.0f;
}

EBtlAttackWeaponAnimType ABtlActor::GetAttackWeaponAnimType() const {
    return EBtlAttackWeaponAnimType::Normal;
}

EBtlAttackType ABtlActor::GetAttackType() const {
    return EBtlAttackType::SLASH;
}

EBtlAttackPerformanceType ABtlActor::GetAttackPerformanceType() const {
    return EBtlAttackPerformanceType::Normal;
}

EBtlDataAttr ABtlActor::GetAttackAttr() const {
    return EBtlDataAttr::BTL_DATA_ATTR_SLASH;
}

float ABtlActor::GetAnimationBaseSpeedRatio() const {
    return 0.0f;
}

EBtlCommandType ABtlActor::GetActionType() const {
    return EBtlCommandType::BTL_ACT_NULL;
}

TArray<ABtlActor*> ABtlActor::GetActionTargets() {
    return TArray<ABtlActor*>();
}


int32 ABtlActor::GetActionID() const {
    return 0;
}



void ABtlActor::DoSpecificActionTurnEnd() {
}

void ABtlActor::DoSpecificActionAIEnd() {
}

void ABtlActor::DoSpecificActionActEnd() {
}

bool ABtlActor::DoSpecificAction() {
    return false;
}

void ABtlActor::DoNothing() {
}

void ABtlActor::DoGeneralAttack() {
}

void ABtlActor::DoClearSupportStatus(UBtlCoreComponent* NewBtlCore) {
}

void ABtlActor::DoBadStatusDamage(bool& IsDamageOccurred) {
}

void ABtlActor::DoBadStatusAction(bool& ActBadStatusSkillAction, bool& NeedToWaitProcess, bool& IsOverheatInterrupt) {
}

void ABtlActor::DoAutoSkillRecovery(bool& RecoveryValid) {
}


void ABtlActor::DestroyPersona() {
}

void ABtlActor::DestroyFukaForTheurgia(ABtlActor* pFuka) {
}


void ABtlActor::CreateSummonEnemy() {
}

void ABtlActor::CreatePersona() {
}

void ABtlActor::CoordinateSkillBPForSpecificSituations(ABtlSkill* Skill) {
}

FName ABtlActor::ConvExAnimSectionName(bool& Found, EBtlAnimationType Type, bool& ForceShowWeapon, FBtlBossAnimRequestParam& Params) const {
    return NAME_None;
}

void ABtlActor::CleanupStatusEffect(bool Status, bool Down, bool keepSwoon) {
}

bool ABtlActor::CheckUsingTakeoverOtherCamera() const {
    return false;
}

bool ABtlActor::CheckUseSkillShotSeqCam() const {
    return false;
}

bool ABtlActor::CheckTurnFromGuardCancel() const {
    return false;
}

bool ABtlActor::CheckSkipTurn() const {
    return false;
}

bool ABtlActor::CheckSkipSkillEndAnim() const {
    return false;
}

bool ABtlActor::CheckSkipSkillChantAnim() const {
    return false;
}

bool ABtlActor::CheckSkipAction() const {
    return false;
}

bool ABtlActor::CheckSkillCameraCharacterHideDisable() const {
    return false;
}


bool ABtlActor::CheckRecoveryFromDown() const {
    return false;
}

bool ABtlActor::CheckRecoveryFromBadStatus(UBtlCoreComponent* NewBtlCore) {
    return false;
}

bool ABtlActor::CheckReadyFukaForTheurgia(ABtlActor* pFuka) {
    return false;
}


bool ABtlActor::CheckReady() {
    return false;
}

bool ABtlActor::CheckProgressToHoldup() const {
    return false;
}

bool ABtlActor::CheckPriorConvExAnimSection() const {
    return false;
}

bool ABtlActor::CheckPlayedStandbyCamera() const {
    return false;
}

bool ABtlActor::CheckPlayableWaitAnimation() const {
    return false;
}

bool ABtlActor::CheckPlayableShortSkillSceneAfterCutin() const {
    return false;
}

bool ABtlActor::CheckPersonaValid() {
    return false;
}

bool ABtlActor::CheckPersonaStartWithoutEmergePerformance() const {
    return false;
}

bool ABtlActor::CheckPersonaAlreadyChanged() const {
    return false;
}

bool ABtlActor::CheckNotSummonPersonaSkill() const {
    return false;
}

bool ABtlActor::CheckNeedToPlayPreSkillPorc() const {
    return false;
}

bool ABtlActor::CheckNeedToCallFirstSummonScene() const {
    return false;
}

bool ABtlActor::CheckNeedOverheatScene() const {
    return false;
}

bool ABtlActor::CheckLookatEnable() const {
    return false;
}

bool ABtlActor::CheckKeepDeadAnimation() const {
    return false;
}

bool ABtlActor::CheckInOverheatProc() const {
    return false;
}

bool ABtlActor::CheckInAlloutSequence() const {
    return false;
}

bool ABtlActor::CheckIdle() const {
    return false;
}

bool ABtlActor::CheckHidingPersonaForSkillScene() const {
    return false;
}

bool ABtlActor::CheckHiddingWeaponMode() const {
    return false;
}

bool ABtlActor::CheckGuest() const {
    return false;
}

bool ABtlActor::CheckGeneralAttackAnnihilation() const {
    return false;
}

bool ABtlActor::CheckExpireSupportStatus(UBtlCoreComponent* NewBtlCore) {
    return false;
}

bool ABtlActor::CheckExistStatusEffectRequestList(EBtlBadStatusIcon RequestType) const {
    return false;
}

bool ABtlActor::CheckExistStatusEffect(EBtlBadStatusIcon Type) const {
    return false;
}

bool ABtlActor::CheckEnableTranslucence() const {
    return false;
}

bool ABtlActor::CheckEnableTheurgiaSkillUse() const {
    return false;
}

bool ABtlActor::CheckEnableTakeover() const {
    return false;
}

bool ABtlActor::CheckEnableRotation() const {
    return false;
}

bool ABtlActor::CheckEnableDeadAnimation() const {
    return false;
}

bool ABtlActor::CheckDownContinuedState() {
    return false;
}

bool ABtlActor::CheckDisableUpdateFaceAnimFromBody() const {
    return false;
}

bool ABtlActor::CheckCutinOccur() const {
    return false;
}

bool ABtlActor::CheckBadStatusEscape() const {
    return false;
}

bool ABtlActor::CheckBadStatusDamage() const {
    return false;
}

bool ABtlActor::CheckBadStatusAction() const {
    return false;
}

bool ABtlActor::CheckBackshotDisable() const {
    return false;
}

bool ABtlActor::CheckAlreadyTakeover() const {
    return false;
}

bool ABtlActor::CheckAlive() const {
    return false;
}

bool ABtlActor::CheckActiveMode() const {
    return false;
}


void ABtlActor::CancelHoldup() {
}

FVector ABtlActor::CalcClosedStandLocation_Implementation(UBtlCoreComponent* pCore, const FVector& Pos, float standRange, bool coordinateFromEnemyCenter) {
    return FVector{};
}

void ABtlActor::AffectSkillDamageRestPortion() {
}

void ABtlActor::AffectRecoveryFromEvent(float RecoveryHpRatio) {
}

void ABtlActor::AffectRecoveryBadStatus(UBtlCoreComponent* NewBtlCore) {
}

void ABtlActor::AffectOverheat() {
}

void ABtlActor::AffectGeneralAttackDamage() {
}

void ABtlActor::AffectGeneralAttackAnnihilation() {
}

void ABtlActor::AffectEscape() {
}

void ABtlActor::AdjustPersonaLocation() {
}

void ABtlActor::AdjustHomePosition() {
}

void ABtlActor::AddTheurgiaGauge(EBtlTheurgiaBoostType Type) {
}

void ABtlActor::AddStatusEffectRequestList(EBtlBadStatusIcon RequestType) {
}

void ABtlActor::AddStatusEffect(UNiagaraComponent* ref, EBtlBadStatusIcon Type, AActor* ParentEmpActor) {
}

void ABtlActor::ActionReady(UBtlCoreComponent* NewBtlCore) {
}

void ABtlActor::ActionPrepareSkill(UBtlCoreComponent* NewBtlCore, const ABtlSkill* Skill) {
}

void ABtlActor::ActionPrepareAct(UBtlCoreComponent* NewBtlCore) {
}

void ABtlActor::ActionPlayTheurgia() {
}

void ABtlActor::ActionPlaySkillTimeline() {
}

ABtlActor::ABtlActor() {
    this->AttackBaseType = EBtlAttackType::SLASH;
    this->HomePositionID = -1;
    this->InitialLocationIndexFromLeft = 0;
    this->EnemyFlag = false;
    this->PersonaFlag = false;
    this->PersonaHideEmergeEffect = false;
    this->AI = NULL;
    this->Voice = NULL;
    this->BtlCore = NULL;
    this->RequestedPersonaNum = 0;
    this->CurrentBadStatusType = EBtlBadStatusIcon::None;
    this->AlloutAttackResult = EBtlAlloutAttackResult::Blank;
    this->AttackPerformanceType = EBtlAttackPerformanceType::Normal;
}

