#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AppActorComponent.h"
#include "BtlDataTargetRule.h"
#include "BtlItemData.h"
#include "EBtlCommandType.h"
#include "EBtlDataAnalyze.h"
#include "EBtlDataAttr.h"
#include "EBtlDataCostType.h"
#include "EBtlDataEfficacyType.h"
#include "EBtlDataItemUseType.h"
#include "EBtlDataMoveCursorTactics.h"
#include "EBtlDataSupportTable.h"
#include "EBtlDataTargetArea.h"
#include "EBtlDataTargetType.h"
#include "EBtlGuiState.h"
#include "BtlDataBaseComponent.generated.h"

class AActor;
class ABtlActor;
class APlayerCameraManager;
class UBmdAsset;
class UBtlCoreComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlDataBaseComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
    UBtlDataBaseComponent();
    UFUNCTION(BlueprintCallable)
    ABtlActor* SyncTheugiaWindowEnd(UBtlCoreComponent* BtlCore, bool& IsEnd);
    
    UFUNCTION(BlueprintCallable)
    bool SyncRewuestTutorial(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool StartTheugiaWindow(ABtlActor* pAction, TArray<ABtlActor*> targetList);
    
    UFUNCTION(BlueprintCallable)
    void StartNavigation(ABtlActor* Action, EBtlGuiState& State, int32& ID, TArray<ABtlActor*>& Target, int32& PersonaID, bool& physical);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> SortPlayerTacticsList(TArray<ABtlActor*> inList);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlItemData> SortItemBagData(UBtlCoreComponent* BtlCore, TArray<FBtlItemData> In);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> SortEnemyTacticsList(TArray<ABtlActor*> inList);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitTP(ABtlActor* Actor, int32 Hp);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitSP(ABtlActor* Actor, int32 Hp);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitHP(ABtlActor* Actor, int32 Hp);
    
    UFUNCTION(BlueprintCallable)
    void SetSupport(ABtlActor* Actor, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaStockEquip(ABtlActor* Actor, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaEquipID(ABtlActor* Actor, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaDefaultStock(ABtlActor* Actor, int32 PersonaID, int32& Index);
    
    UFUNCTION(BlueprintCallable)
    void SetOperation(ABtlActor* Action, int32 Operation);
    
    UFUNCTION(BlueprintCallable)
    void SetManualOperate(ABtlActor* Action, bool isManual);
    
    UFUNCTION(BlueprintCallable)
    void SetHighStreamingLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetBadStatus(ABtlActor* Actor, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void SaveReceiveSkillAttr(TArray<ABtlActor*> Targets, EBtlDataAttr attr);
    
    UFUNCTION(BlueprintCallable)
    void SavePrevUseSkillID(ABtlActor* Action, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SavePrevUseItemID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void OpenAllAttr(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* MoveCursorTacticsSimple(int32 nowIdx, TArray<ABtlActor*> List, TArray<FVector2D> PosCursor, EBtlDataMoveCursorTactics moveCursor);
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* MoveCursorTactics(int32 nowIdx, TArray<ABtlActor*> List, TArray<FVector2D> PosCursor, EBtlDataMoveCursorTactics moveCursor, bool IsBoss);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetViewTargetActor(APlayerCameraManager* CameraManager);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitTP(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitSP(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    FText GetUnitName(ABtlActor* Actor, bool InsertSpace);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitMaxTP(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitMaxSP(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitMaxHP(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitLevel(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitID(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitHP(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnitArcana(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetUINextAction(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    UBmdAsset* GetTheurgiaFlavorBMD();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTargetEffectiveIndex(TArray<ABtlActor*> Target, EBtlDataCostType Type);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSupportTurn(ABtlActor* Actor, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSupportPoint(ABtlActor* Actor, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatusStrength(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatusSpeed(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatusMagic(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatusLuck(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatusEndurance(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetSpecialSkillList(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialAutoSkill(ABtlActor* Actor, bool& bPowerUp);
    
    UFUNCTION(BlueprintCallable)
    EBtlDataTargetType GetSkillTargetType(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    FBtlDataTargetRule GetSkillTargetRule(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    EBtlDataTargetArea GetSkillTargetArea(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    FText GetSkillParamN(int32 skillId, bool& Sucsess);
    
    UFUNCTION(BlueprintCallable)
    FText GetSkillName(int32 skillId, bool& Sucsess);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillMaxNum();
    
    UFUNCTION(BlueprintCallable)
    void GetSkillList(ABtlActor* Actor, TArray<int32>& Output);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillIsSupport(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillIsRecovery(int32 skillId, EBtlDataCostType Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillIsNoPanel(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillIsHealSupport(int32 skillId, EBtlDataSupportTable& support);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillIsDamageBit(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillIsDamage(int32 skillId, EBtlDataCostType Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillIsCharge(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillIsBadStatus(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillIconSprNoByAttr(EBtlDataAttr attr);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillIconSprNo(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    EBtlDataEfficacyType GetSkillEfficacyType(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillCostCheckOff(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillCost(int32 skillId, ABtlActor* Action, bool& Sucsess, EBtlDataCostType& cost);
    
    UFUNCTION(BlueprintCallable)
    EBtlDataAttr GetSkillAttr(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPrevUseSkillID(ABtlActor* Action);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPrevUseItemID();
    
    UFUNCTION(BlueprintCallable)
    FColor GetPlatFormButtonColor(int32 ButtonType);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPersonaTableSkillList(int32 PersonaID);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPersonaStockIndexList(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPersonaSkillList(ABtlActor* Actor, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void GetPersonaNameList(ABtlActor* Actor, TArray<FText>& NameList, int32& Count, int32& equip);
    
    UFUNCTION(BlueprintCallable)
    FText GetPersonaName(int32 PersonaID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPersonaMaxNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPersonaEquipSkillList(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    FText GetPersonaEquipName(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPersonaEquipIndex(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPersonaEquipID(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void GetPersonaBySpecialSkill(int32 skillId, int32& personaID1, int32& personaID2, bool& twoPersona);
    
    UFUNCTION(BlueprintCallable)
    bool GetOrgiaMode(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOperation(ABtlActor* Action);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNormalSkillMaxNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetManualOperate(ABtlActor* Action);
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetKeyControl(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    EBtlDataItemUseType GetItemUseType(UBtlCoreComponent* BtlCore, EBtlCommandType Type, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemSkillID(int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    FText GetItemName(int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemIconSprNo(int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlItemData> GetItemBagData();
    
    UFUNCTION(BlueprintCallable)
    bool GetInputDecideKeyCross();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFukaTheurgiaSkill();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyDropItem(ABtlActor* Actor, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void GetCorrespondList(TArray<ABtlActor*>& Out, ABtlActor* spEmployment, EBtlCommandType Command, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    FText GetBtlCommonText(int32 Key);
    
    UFUNCTION(BlueprintCallable)
    bool GetBadStatus(ABtlActor* Actor, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    FText GetAttackName(int32 attr);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeAttrMaxNum();
    
    UFUNCTION(BlueprintCallable)
    EBtlDataAnalyze GatAnalizeAttr(ABtlActor* Actor, uint8 attr);
    
    UFUNCTION(BlueprintCallable)
    void CloseAllAttr(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ClearTargetSupport(ABtlActor* Actor, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void ClearSupport(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ClearBadStatus(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool ChkUseAllSkillAgeing(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool ChkTutorialSkillList(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool ChkTurnOff(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool ChkTPValid(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool ChkSpecialSkillID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    bool ChkSkillIgnoreResistances(ABtlActor* Action, int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    bool ChkSelectAllSkill(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool ChkSelectAllPersona(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool ChkPrevUseSkillIDFrag();
    
    UFUNCTION(BlueprintCallable)
    bool ChkPlayerDamageOff(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool ChkLastActionLoop(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    int32 ChkExcessEfficary(ABtlActor* pAction, TArray<ABtlActor*> targetList, int32 skillId, bool isItem);
    
    UFUNCTION(BlueprintCallable)
    bool ChkEnemySideWeakAll(ABtlActor* Action, TArray<ABtlActor*> EnemyList);
    
    UFUNCTION(BlueprintCallable)
    bool ChkEnemySideWeak(ABtlActor* Action, TArray<ABtlActor*> EnemyList, EBtlDataAttr attr);
    
    UFUNCTION(BlueprintCallable)
    bool ChkAutoSkill(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    bool ChkAllCostOff(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool CheckTacticsIconLLSize(ABtlActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSupportDownUp(ABtlActor* Actor, EBtlDataSupportTable support);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSupport(ABtlActor* Actor, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    bool CheckNyxCoreBattle(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool CheckExistTutorial(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool CheckExistTarget(UBtlCoreComponent* BtlCore, int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    void CallSupportInfoDisableShift(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    void CallRequestEscape(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool CallCheckEncountEscape(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool CallCheckAlreadyRequestEscape(UBtlCoreComponent* BtlCore);
    
};

