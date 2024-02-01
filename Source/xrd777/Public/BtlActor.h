#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "BattleOnActCommandDelegate.h"
#include "BattleOnSyncDelegateDelegate.h"
#include "BtlBossAnimRequestParam.h"
#include "BtlEffectItem.h"
#include "BtlEventCustomEquipment.h"
#include "EAppCharFaceAnimID.h"
#include "EBtlAlloutAttackResult.h"
#include "EBtlAnimationType.h"
#include "EBtlAttackPerformanceType.h"
#include "EBtlAttackType.h"
#include "EBtlAttackWeaponAnimType.h"
#include "EBtlBadStatusIcon.h"
#include "EBtlCommandType.h"
#include "EBtlDataAttr.h"
#include "EBtlSizeCategoryType.h"
#include "EBtlTheurgiaBoostType.h"
#include "BtlActor.generated.h"

class AActor;
class ABtlAI;
class ABtlActor;
class ABtlSkill;
class UAppCharBaseComp;
class UBtlActionManagerComponent;
class UBtlCoreComponent;
class UBtlTargetsManagerComponent;
class UBtlVoice;
class UNiagaraComponent;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API ABtlActor : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnActCommand OnActCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnActCommand OnActionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnActCommand OnShowActionName;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnSyncDelegate OnFinishedExpireSupport;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnSyncDelegate OnFinishedRecoveryFromBadStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnSyncDelegate OnFinishedActBadStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnSyncDelegate OnSyncPersonaLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlEventCustomEquipment CustomEquipments;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnSyncDelegate OnSyncSummonEnemyLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnSyncDelegate OnSyncFukaLoad;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlAttackType AttackBaseType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HomePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HomeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HomePositionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialLocationIndexFromLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnemyFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PersonaFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PersonaHideEmergeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlAI* AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlVoice* Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlCoreComponent* BtlCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> PersonaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestedPersonaNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlEffectItem> EffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBtlBadStatusIcon> EffectRequestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlBadStatusIcon CurrentBadStatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlAlloutAttackResult AlloutAttackResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlAttackPerformanceType AttackPerformanceType;
    
public:
    ABtlActor();
    UFUNCTION(BlueprintCallable)
    void UpdatePersonalAnimation();
    
    UFUNCTION(BlueprintCallable)
    void TurnOffOrgia(bool Dead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToEndTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SyncSkillTimeline() const;
    
    UFUNCTION(BlueprintCallable)
    bool SyncModelsForEvent();
    
    UFUNCTION(BlueprintCallable)
    bool SyncModelsForAlloutAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SummonGunTurnToTheurgiaMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopShakeAnim();
    
    UFUNCTION(BlueprintCallable)
    void StartHoldup();
    
    UFUNCTION(BlueprintCallable)
    void StartEscape();
    
    UFUNCTION(BlueprintCallable)
    void StandbyAction();
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* SpawnSummonEnemy();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPersona(bool WithoutEmergeEffect);
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* SpawnFukaForTheurgia();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnCharacterBP(bool initialHiding);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> SpawnAllSummonEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFromHiding();
    
    UFUNCTION(BlueprintCallable)
    void ShowActionName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleFromCode(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupForEventMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetupConditionForAllyEscape();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStatusColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaWorldLocation(FTransform WorldTrans, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaLocation(FTransform RelativeTrans, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetGuard();
    
    UFUNCTION(BlueprintCallable)
    void SetGeneralAttackResult(EBtlAlloutAttackResult Type);
    
    UFUNCTION(BlueprintCallable)
    void SetEventMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableUpdateFaceAnimFromBody(bool disable);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetActionID(int32 ActionID);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* SearchSkeletalMesh(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void RumbleEnemyEmerge();
    
    UFUNCTION(BlueprintCallable)
    void RestoreModelsFromEvent();
    
    UFUNCTION(BlueprintCallable)
    void RestoreModelsFromAlloutAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAlongWithRelocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPersonalAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestHidePlayersForEspaceSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestFaceAnimation(EAppCharFaceAnimID AnimType, bool UseBlendSetting, float Blend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestDamageAndDeadPerformance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimationWithNext(EBtlAnimationType AnimType, EBtlAnimationType animNextType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimation(EBtlAnimationType AnimType, float startingPosition, bool UseBlendSetting, float Blend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAddStatusEffect(EBtlBadStatusIcon Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEffectItem(EBtlBadStatusIcon Type);
    
    UFUNCTION(BlueprintCallable)
    void ProcessBeforeCommandSelectStart();
    
    UFUNCTION(BlueprintCallable)
    void ProcBeforeFadeinToAlloutAttackDamage();
    
    UFUNCTION(BlueprintCallable)
    void PreAffectSkillDamagePortion(float portionRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayWaitAnimation(float startingPosition, bool UseBlendSetting, float Blend, bool IgnoreWhenSamePose);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceTheurgia(int32 TypeIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceTakeoverStart();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceTakeoverReceive();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceSkillShot();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceSkillChant();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoicePersonaSkillCutin(bool isFirstSummon);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoicePersonaSkill();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceFirstSummonScene();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceDead();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceAlloutAttackStart();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceAlloutAttacking();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceAlloutAttackFinishStart();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceAlloutAttackFinishCut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShakeAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReflectionEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEnemySummonEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAbsorptionEffect();
    
    UFUNCTION(BlueprintCallable)
    void MarkReadyToDestroy();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsPlayedStandbyCamera();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsHidingPersonaForSkillScene();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsCalledFirstSummonScene();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsAvoidRelocationUntilTurnEnd();
    
    UFUNCTION(BlueprintCallable)
    void LoadModelsForEvent();
    
    UFUNCTION(BlueprintCallable)
    void LoadModelsForAlloutAttack();
    
    UFUNCTION(BlueprintCallable)
    void LoadFukaForTheurgia();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVelvet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidUnit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSummonSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingOffensiveSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGroupTargetSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingDamageSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAllTargetSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSummonedEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrega() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillTrafuliEscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillTheurgia() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillPhysicalType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillOrgia() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillMixraid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillItemDumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillFukaTheurgia() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillEffective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRushAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleTakeoverTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleEventTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleAlloutMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleAITarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayableDyingAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersonaEvolved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersona() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOrgia() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccurringSkillReflection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccurringSkillBlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccurringSkillAbsorption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewBattleOutfitForAlloutFinish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewBattleOutfit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManualOperation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKoromaru() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTakeOver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInOneMore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInActionTurn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyInParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDyingBadStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDormancy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackMiss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackControlledByAI() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimationWait();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimationChant();
    
    UFUNCTION(BlueprintCallable)
    void InstantKill();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideForOtherAction(bool CriticalHindrance, bool Rapid, bool HalfMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBtlTargetsManagerComponent* GetTargetsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSummonEnemyID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetSocketTransformFromCpp(FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlBossAnimRequestParam GetSkillShotAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlBossAnimRequestParam GetSkillEndAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlBossAnimRequestParam GetSkillChantAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EBtlSizeCategoryType GetSizeCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecoveryWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPersonaTransformFromSkillCondition(const ABtlActor* PersonaOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPersonaTransform(bool ForCutin) const;
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetPersona(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOriginalID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlAlloutAttackResult GetGeneralAttackResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpireSupportWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlBadStatusIcon GetCurrentStatusEffectType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EBtlAnimationType GetCurrentAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAppCharBaseComp* GetCharaBPFromCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBadStatusEffectName(EBtlBadStatusIcon Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBadStatusActionWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlAttackWeaponAnimType GetAttackWeaponAnimType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlAttackType GetAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlAttackPerformanceType GetAttackPerformanceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlDataAttr GetAttackAttr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimationBaseSpeedRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlCommandType GetActionType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> GetActionTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBtlActionManagerComponent* GetActionManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnemiesLookatThisCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndWaitTurn();
    
    UFUNCTION(BlueprintCallable)
    void DoSpecificActionTurnEnd();
    
    UFUNCTION(BlueprintCallable)
    void DoSpecificActionAIEnd();
    
    UFUNCTION(BlueprintCallable)
    void DoSpecificActionActEnd();
    
    UFUNCTION(BlueprintCallable)
    bool DoSpecificAction();
    
    UFUNCTION(BlueprintCallable)
    void DoNothing();
    
    UFUNCTION(BlueprintCallable)
    void DoGeneralAttack();
    
    UFUNCTION(BlueprintCallable)
    void DoClearSupportStatus(UBtlCoreComponent* NewBtlCore);
    
    UFUNCTION(BlueprintCallable)
    void DoBadStatusDamage(bool& IsDamageOccurred);
    
    UFUNCTION(BlueprintCallable)
    void DoBadStatusAction(bool& ActBadStatusSkillAction, bool& NeedToWaitProcess, bool& IsOverheatInterrupt);
    
    UFUNCTION(BlueprintCallable)
    void DoAutoSkillRecovery(bool& RecoveryValid);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyPersonaBeforeCreatePersona();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPersona();
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyFukaForTheurgia(ABtlActor* pFuka);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyEffect(UNiagaraComponent* pNiagara);
    
    UFUNCTION(BlueprintCallable)
    void CreateSummonEnemy();
    
    UFUNCTION(BlueprintCallable)
    void CreatePersona();
    
    UFUNCTION(BlueprintCallable)
    void CoordinateSkillBPForSpecificSituations(ABtlSkill* Skill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName ConvExAnimSectionName(bool& Found, EBtlAnimationType Type, bool& ForceShowWeapon, FBtlBossAnimRequestParam& Params) const;
    
    UFUNCTION(BlueprintCallable)
    void CleanupStatusEffect(bool Status, bool Down, bool keepSwoon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUsingTakeoverOtherCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUseSkillShotSeqCam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTurnFromGuardCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkipTurn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkipSkillEndAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkipSkillChantAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkipAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillCameraCharacterHideDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckShakingWhenDownDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRecoveryFromDown() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckRecoveryFromBadStatus(UBtlCoreComponent* NewBtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool CheckReadyFukaForTheurgia(ABtlActor* pFuka);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckReadyCharacterBP();
    
    UFUNCTION(BlueprintCallable)
    bool CheckReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckProgressToHoldup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPriorConvExAnimSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPlayedStandbyCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPlayableWaitAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPlayableShortSkillSceneAfterCutin() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckPersonaValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPersonaStartWithoutEmergePerformance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPersonaAlreadyChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNotSummonPersonaSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNeedToPlayPreSkillPorc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNeedToCallFirstSummonScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNeedOverheatScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLookatEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckKeepDeadAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInOverheatProc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInAlloutSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHidingPersonaForSkillScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHiddingWeaponMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGeneralAttackAnnihilation() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckExpireSupportStatus(UBtlCoreComponent* NewBtlCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckExistStatusEffectRequestList(EBtlBadStatusIcon RequestType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckExistStatusEffect(EBtlBadStatusIcon Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableTranslucence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableTheurgiaSkillUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableTakeover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableDeadAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckDownContinuedState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDisableUpdateFaceAnimFromBody() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutinOccur() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBadStatusEscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBadStatusDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBadStatusAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBackshotDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAlreadyTakeover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckActiveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterDestroy();
    
    UFUNCTION(BlueprintCallable)
    void CancelHoldup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector CalcClosedStandLocation(UBtlCoreComponent* pCore, const FVector& Pos, float standRange, bool coordinateFromEnemyCenter);
    
    UFUNCTION(BlueprintCallable)
    void AffectSkillDamageRestPortion();
    
    UFUNCTION(BlueprintCallable)
    void AffectRecoveryFromEvent(float RecoveryHpRatio);
    
    UFUNCTION(BlueprintCallable)
    void AffectRecoveryBadStatus(UBtlCoreComponent* NewBtlCore);
    
    UFUNCTION(BlueprintCallable)
    void AffectOverheat();
    
    UFUNCTION(BlueprintCallable)
    void AffectGeneralAttackDamage();
    
    UFUNCTION(BlueprintCallable)
    void AffectGeneralAttackAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    void AffectEscape();
    
    UFUNCTION(BlueprintCallable)
    void AdjustPersonaLocation();
    
    UFUNCTION(BlueprintCallable)
    void AdjustHomePosition();
    
    UFUNCTION(BlueprintCallable)
    void AddTheurgiaGauge(EBtlTheurgiaBoostType Type);
    
    UFUNCTION(BlueprintCallable)
    void AddStatusEffectRequestList(EBtlBadStatusIcon RequestType);
    
    UFUNCTION(BlueprintCallable)
    void AddStatusEffect(UNiagaraComponent* ref, EBtlBadStatusIcon Type, AActor* ParentEmpActor);
    
    UFUNCTION(BlueprintCallable)
    void ActionReady(UBtlCoreComponent* NewBtlCore);
    
    UFUNCTION(BlueprintCallable)
    void ActionPrepareSkill(UBtlCoreComponent* NewBtlCore, const ABtlSkill* Skill);
    
    UFUNCTION(BlueprintCallable)
    void ActionPrepareAct(UBtlCoreComponent* NewBtlCore);
    
    UFUNCTION(BlueprintCallable)
    void ActionPlayTheurgia();
    
    UFUNCTION(BlueprintCallable)
    void ActionPlaySkillTimeline();
    
};

