#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BattleDebugCommandDelegate.h"
#include "BattleHasFinishedDelegate.h"
#include "BattleHasFinishedInitialLoadDelegate.h"
#include "BattleRelocationDelegate.h"
#include "BtlEncountParam.h"
#include "EBtlBGMType.h"
#include "EBtlFinishResult.h"
#include "EBtlJyokyohelpType.h"
#include "EBtlLoadingTimeCategory.h"
#include "EBtlPhaseType.h"
#include "EBtlRelocationType.h"
#include "Templates/SubclassOf.h"
#include "BtlCoreComponent.generated.h"

class AActor;
class AAppActor;
class ABtlActor;
class ABtlCountdown;
class ABtlFadeManager;
class ABtlPhase;
class ABtlResultResourceManager;
class ABtlShakeManager;
class AInitReadActor;
class UAssetLoader;
class UBtlBoss;
class UBtlCompensation;
class UBtlEnvironmentBase;
class UBtlEventController;
class UBtlEventCutsceneController;
class UBtlOrder;
class UBtlResidentDataBase;
class UBtlSupportInfoBase;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlCoreComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleHasFinished OnBattleHasFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleRelocation OnRelocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnUIVisibleON;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnUIVisibleOFF;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnUICaptureON;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnUICaptureOFF;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnBGVisibleON;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnBGVisibleOFF;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnPlayerVisibleON;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnPlayerVisibleOFF;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnEnemyVisibleON;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnEnemyVisibleOFF;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnLogTurnStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleDebugCommand OnLogActStart;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AInitReadActor> InitReadActor;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FormationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FormationTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlEventCutsceneController* BtlCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlBoss* Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlCountdown* Countdown;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlEventController* BtlEventController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlResidentDataBase* ResidentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerLocationRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EnemyLocationRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EnemyAttachRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* EnemyTurnTableRotationTargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlEnvironmentBase* BtlEnvironmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlFadeManager* FadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlShakeManager* ShakeManager;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleHasFinishedInitialLoad HasFinishedResidentLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleHasFinishedInitialLoad HasFinishedPerformerLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleHasFinishedInitialLoad HasFinishedSerialEncountLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleHasFinishedInitialLoad HasFinishedEnemyLoad;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SummonEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlEncountParam EncountParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EncountIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlFinishResult BattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* EventMainAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* LatestAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* ActionRequestedEscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> ActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> PlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> EnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABtlActor>> PlayerDataStockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABtlActor>> PlayerDataAddedStockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAppActor> DebugMonitorData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> PlayerDataAddedIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABtlActor>> EnemyDataStockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABtlActor>> EnemyDataSummonStockList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> EnemyDataSummonIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABtlActor>> PersonaDataStockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlCompensation* Compensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlOrder* Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlPhase* CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestChangePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlPhase* RequestedNextPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAppActor*> UtensilEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HomeFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlResultResourceManager* ResultResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedResidentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedBattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedAllyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedEnemyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedPersonaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedSummonEnemyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedAddedPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedEncSerial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedDebugMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* LoaderEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* LoaderPersona;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* LoaderSummonEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* LoaderAddedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* LoaderSerialEncount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* LoaderDebugMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlSupportInfoBase* SupportInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 InitialEquipedPersonaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TutorialRequestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* DebugWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* DebugMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* DebugSkillSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugStateString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugLatestCamera;
    
public:
    UBtlCoreComponent();
    UFUNCTION(BlueprintCallable)
    void ToggleSkillEditMode();
    
    UFUNCTION(BlueprintCallable)
    void TheurgiaDebugSetup();
    
    UFUNCTION(BlueprintCallable)
    bool SyncReadyIndependentBattle();
    
    UFUNCTION(BlueprintCallable)
    bool SyncInfoGameover();
    
private:
    UFUNCTION(BlueprintCallable)
    void SpawnCharacters(bool initialHiding);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowDebugData();
    
    UFUNCTION(BlueprintCallable)
    FBtlEncountParam SetupIndependentBattle(const FBtlEncountParam& EncountParam);
    
    UFUNCTION(BlueprintCallable)
    void SetupDebugKill(bool& RejectDebugKillRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetRushMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetRushDisable(bool disable);
    
    UFUNCTION(BlueprintCallable)
    void SetPhase(ABtlPhase* NextPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaStatusMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEncountParam(FBtlEncountParam Encount);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugStateString(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugLatestCamera(const FString& str);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetBGMTheurgiaMode(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBattleTimeDilation(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetAnalyzeMode(bool Enable);
    
private:
    UFUNCTION(BlueprintCallable)
    void RestoreGameCondition();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestSummonEnemies();
    
    UFUNCTION(BlueprintCallable)
    void RequestSituationHelp(ABtlActor* pEmploy, EBtlJyokyohelpType Type);
    
    UFUNCTION(BlueprintCallable)
    void RequestRushMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RequestPartyPanelVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    bool RequestEncountProcess();
    
    UFUNCTION(BlueprintCallable)
    void RequestCutinAging(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RequestClearUtensilEffectWithRelocation();
    
    UFUNCTION(BlueprintCallable)
    void RequestBGM(EBtlBGMType Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveUtensilEffect(AAppActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void RelocationRequestOnBCDPlay(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RelocationCustom(EBtlRelocationType Type);
    
    UFUNCTION(BlueprintCallable)
    void Relocation(bool PlayerOnly);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTakeoverCharacter(ABtlActor* Target, ABtlActor* takeoverFrom);
    
    UFUNCTION(BlueprintCallable)
    void ProgressOrder();
    
    UFUNCTION(BlueprintCallable)
    void ProcessBeforeStartNextTurn();
    
    UFUNCTION(BlueprintCallable)
    void ProcBeforeLoad();
    
    UFUNCTION(BlueprintCallable)
    void ProcAheadOfRetrySequence();
    
    UFUNCTION(BlueprintCallable)
    void ProcAfterLoad();
    
private:
    UFUNCTION(BlueprintCallable)
    void ProcAfterAllCharacterSpawned();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayInfoGameover();
    
    UFUNCTION(BlueprintCallable)
    void PlayInfoFukaCutin();
    
    UFUNCTION(BlueprintCallable)
    void PlayInfoAlloutAttackSuggestion();
    
    UFUNCTION(BlueprintCallable)
    void PlayHighAnalyzeEvent();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsUICommand();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsPlayedShadowExChantCam();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsPlayedFukaCutin();
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadResidentData(const FBtlEncountParam& EncountParam);
    
    UFUNCTION(BlueprintCallable)
    void LoadEnemyData(const FBtlEncountParam& EncountParam);
    
    UFUNCTION(BlueprintCallable)
    void LoadDataForSerialEncount();
    
    UFUNCTION(BlueprintCallable)
    void LoadData(const FBtlEncountParam& EncountParam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedToFinale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventResult(bool& IsCaptureResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableSequenceCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void InitProcessBeforeFirstTurn();
    
    UFUNCTION(BlueprintCallable)
    void InitializeOrder();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleForNextBattle();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattle();
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetResultMainPlayer();
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> GetPlayerList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlPhaseType GetPhaseType() const;
    
    UFUNCTION(BlueprintCallable)
    ABtlPhase* GetPhase();
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetNextAction(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetHero();
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetEventMainAction();
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> GetEnemyList();
    
    UFUNCTION(BlueprintCallable)
    FString GetEnemyFormationName();
    
    UFUNCTION(BlueprintCallable)
    FBtlEncountParam GetEncountParamForBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugStateString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugModeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugLatestCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugCalcFlag() const;
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetBossCameraTable();
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> GetAllCharacterList();
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetAction();
    
    UFUNCTION(BlueprintCallable)
    void FinishLoadingRecord(EBtlLoadingTimeCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void FinalProcessAfterGameover();
    
    UFUNCTION(BlueprintCallable)
    void FinalizeActionTurn();
    
private:
    UFUNCTION(BlueprintCallable)
    void FadeoutBGM(int32 FadeFrame);
    
public:
    UFUNCTION(BlueprintCallable)
    void DoInterruptProcessEscape();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllBattleActor();
    
    UFUNCTION(BlueprintCallable)
    void DeleteCapture();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetCustomDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 DebugGetCustomDamage() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugAllCharacterToDying();
    
    UFUNCTION(BlueprintCallable)
    void DebugAllCharacterToDown();
    
    UFUNCTION(BlueprintCallable)
    FBtlEncountParam CoordinateEncountParam(FBtlEncountParam Encount);
    
private:
    UFUNCTION(BlueprintCallable)
    void CoordinateBattleCondition(const FBtlEncountParam& EncountParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearUtensilEffect();
    
    UFUNCTION(BlueprintCallable)
    void ClearUIForSerialEncount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckValidFukaTheurgia() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUseQuickEncount() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUsableRetry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUsableFukaTheurgia() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSuspendTurnProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckShuffleTimeOccurrence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckShaffleTimeAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckShadowExChantCamMustPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRushSwitchable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRushDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRequestRushMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPlayingEventScript() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPlayableDesignedCommonAttackCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNeedTurningTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNeedResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLineFormation() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckKnockedoutHero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsSerialEncountBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInterruptProcessEscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInRush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInAllout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIgnoreShowingCharacterAtPreAct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHighAnalyzeUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHighAnalyzeEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHasHighAnalyzeEvent() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckEventBattleFinish();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnemyLoadFinished() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableRelocationClosedFormation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableFukaCutin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableActEndProc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableActEndEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDecideRetry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutinAging() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckBattleProgressToNextBattle();
    
    UFUNCTION(BlueprintCallable)
    bool CheckBattleInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAnyInterruptProcessBetweenTurn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllowEnemyAttackBackshotCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAlloutResult() const;
    
    UFUNCTION(BlueprintCallable)
    void CallResultCapture();
    
private:
    UFUNCTION(BlueprintCallable)
    void CallInfoForSerialEncount();
    
public:
    UFUNCTION(BlueprintCallable)
    void CallDebugWindow();
    
    UFUNCTION(BlueprintCallable)
    void CallDebugSkillSelect();
    
    UFUNCTION(BlueprintCallable)
    void CallDebugMonitor();
    
    UFUNCTION(BlueprintCallable)
    void CallCapture();
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingRecord(EBtlLoadingTimeCategory Category);
    
    UFUNCTION(BlueprintCallable)
    bool BattleFadeOutSync();
    
    UFUNCTION(BlueprintCallable)
    void BattleFadeOut(bool ForceRapid, bool White);
    
    UFUNCTION(BlueprintCallable)
    void BattleFadeIn(bool ForceRapid);
    
    UFUNCTION(BlueprintCallable)
    void AffectRetry();
    
    UFUNCTION(BlueprintCallable)
    void AffectHighAnalyze(ABtlActor* pTarget);
    
    UFUNCTION(BlueprintCallable)
    void AddUtensilEffect(AAppActor* Target);
    
};

