#include "BtlDataBaseComponent.h"

ABtlActor* UBtlDataBaseComponent::SyncTheugiaWindowEnd(UBtlCoreComponent* BtlCore, bool& IsEnd) {
    return NULL;
}

bool UBtlDataBaseComponent::SyncRewuestTutorial(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::StartTheugiaWindow(ABtlActor* pAction, TArray<ABtlActor*> targetList) {
    return false;
}

void UBtlDataBaseComponent::StartNavigation(ABtlActor* Action, EBtlGuiState& State, int32& ID, TArray<ABtlActor*>& Target, int32& PersonaID, bool& physical) {
}

TArray<ABtlActor*> UBtlDataBaseComponent::SortPlayerTacticsList(TArray<ABtlActor*> inList) {
    return TArray<ABtlActor*>();
}

TArray<FBtlItemData> UBtlDataBaseComponent::SortItemBagData(UBtlCoreComponent* BtlCore, TArray<FBtlItemData> In) {
    return TArray<FBtlItemData>();
}

TArray<ABtlActor*> UBtlDataBaseComponent::SortEnemyTacticsList(TArray<ABtlActor*> inList) {
    return TArray<ABtlActor*>();
}

void UBtlDataBaseComponent::SetUnitTP(ABtlActor* Actor, int32 Hp) {
}

void UBtlDataBaseComponent::SetUnitSP(ABtlActor* Actor, int32 Hp) {
}

void UBtlDataBaseComponent::SetUnitHP(ABtlActor* Actor, int32 Hp) {
}

void UBtlDataBaseComponent::SetSupport(ABtlActor* Actor, int32 Type) {
}

void UBtlDataBaseComponent::SetPersonaStockEquip(ABtlActor* Actor, int32 Index) {
}

void UBtlDataBaseComponent::SetPersonaEquipID(ABtlActor* Actor, int32 ID) {
}

void UBtlDataBaseComponent::SetPersonaDefaultStock(ABtlActor* Actor, int32 PersonaID, int32& Index) {
}

void UBtlDataBaseComponent::SetOperation(ABtlActor* Action, int32 Operation) {
}

void UBtlDataBaseComponent::SetManualOperate(ABtlActor* Action, bool isManual) {
}

void UBtlDataBaseComponent::SetHighStreamingLocation(FVector Location) {
}

void UBtlDataBaseComponent::SetBadStatus(ABtlActor* Actor, int32 Type) {
}

void UBtlDataBaseComponent::SaveReceiveSkillAttr(TArray<ABtlActor*> Targets, EBtlDataAttr attr) {
}

void UBtlDataBaseComponent::SavePrevUseSkillID(ABtlActor* Action, int32 ID) {
}

void UBtlDataBaseComponent::SavePrevUseItemID(int32 ID) {
}

void UBtlDataBaseComponent::OpenAllAttr(ABtlActor* Actor) {
}

ABtlActor* UBtlDataBaseComponent::MoveCursorTacticsSimple(int32 nowIdx, TArray<ABtlActor*> List, TArray<FVector2D> PosCursor, EBtlDataMoveCursorTactics moveCursor) {
    return NULL;
}

ABtlActor* UBtlDataBaseComponent::MoveCursorTactics(int32 nowIdx, TArray<ABtlActor*> List, TArray<FVector2D> PosCursor, EBtlDataMoveCursorTactics moveCursor, bool IsBoss) {
    return NULL;
}

AActor* UBtlDataBaseComponent::GetViewTargetActor(APlayerCameraManager* CameraManager) {
    return NULL;
}

int32 UBtlDataBaseComponent::GetUnitTP(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetUnitSP(ABtlActor* Actor) {
    return 0;
}

FText UBtlDataBaseComponent::GetUnitName(ABtlActor* Actor, bool InsertSpace) {
    return FText::GetEmpty();
}

int32 UBtlDataBaseComponent::GetUnitMaxTP(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetUnitMaxSP(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetUnitMaxHP(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetUnitLevel(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetUnitID(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetUnitHP(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetUnitArcana(ABtlActor* Actor) {
    return 0;
}

ABtlActor* UBtlDataBaseComponent::GetUINextAction(UBtlCoreComponent* BtlCore) {
    return NULL;
}

UBmdAsset* UBtlDataBaseComponent::GetTheurgiaFlavorBMD() {
    return NULL;
}

int32 UBtlDataBaseComponent::GetTargetEffectiveIndex(TArray<ABtlActor*> Target, EBtlDataCostType Type) {
    return 0;
}

int32 UBtlDataBaseComponent::GetSupportTurn(ABtlActor* Actor, int32 Type) {
    return 0;
}

int32 UBtlDataBaseComponent::GetSupportPoint(ABtlActor* Actor, int32 Type) {
    return 0;
}

int32 UBtlDataBaseComponent::GetStatusStrength(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetStatusSpeed(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetStatusMagic(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetStatusLuck(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetStatusEndurance(ABtlActor* Actor) {
    return 0;
}

TArray<int32> UBtlDataBaseComponent::GetSpecialSkillList(ABtlActor* Actor) {
    return TArray<int32>();
}

int32 UBtlDataBaseComponent::GetSpecialAutoSkill(ABtlActor* Actor, bool& bPowerUp) {
    return 0;
}

EBtlDataTargetType UBtlDataBaseComponent::GetSkillTargetType(int32 skillId) {
    return EBtlDataTargetType::BTL_DATA_TARGET_TYPE_SINGLE;
}

FBtlDataTargetRule UBtlDataBaseComponent::GetSkillTargetRule(int32 skillId) {
    return FBtlDataTargetRule{};
}

EBtlDataTargetArea UBtlDataBaseComponent::GetSkillTargetArea(int32 skillId) {
    return EBtlDataTargetArea::BTL_DATA_TARGET_AREA_NULL;
}

FText UBtlDataBaseComponent::GetSkillParamN(int32 skillId, bool& Sucsess) {
    return FText::GetEmpty();
}

FText UBtlDataBaseComponent::GetSkillName(int32 skillId, bool& Sucsess) {
    return FText::GetEmpty();
}

int32 UBtlDataBaseComponent::GetSkillMaxNum() {
    return 0;
}

void UBtlDataBaseComponent::GetSkillList(ABtlActor* Actor, TArray<int32>& Output) {
}

bool UBtlDataBaseComponent::GetSkillIsSupport(int32 skillId) {
    return false;
}

bool UBtlDataBaseComponent::GetSkillIsRecovery(int32 skillId, EBtlDataCostType Type) {
    return false;
}

bool UBtlDataBaseComponent::GetSkillIsNoPanel(int32 skillId) {
    return false;
}

bool UBtlDataBaseComponent::GetSkillIsHealSupport(int32 skillId, EBtlDataSupportTable& support) {
    return false;
}

bool UBtlDataBaseComponent::GetSkillIsDamageBit(int32 skillId) {
    return false;
}

bool UBtlDataBaseComponent::GetSkillIsDamage(int32 skillId, EBtlDataCostType Type) {
    return false;
}

bool UBtlDataBaseComponent::GetSkillIsCharge(int32 skillId) {
    return false;
}

bool UBtlDataBaseComponent::GetSkillIsBadStatus(int32 skillId) {
    return false;
}

int32 UBtlDataBaseComponent::GetSkillIconSprNoByAttr(EBtlDataAttr attr) {
    return 0;
}

int32 UBtlDataBaseComponent::GetSkillIconSprNo(int32 skillId) {
    return 0;
}

EBtlDataEfficacyType UBtlDataBaseComponent::GetSkillEfficacyType(int32 skillId) {
    return EBtlDataEfficacyType::BTL_DATA_EFFICACY_NON;
}

bool UBtlDataBaseComponent::GetSkillCostCheckOff(int32 skillId) {
    return false;
}

int32 UBtlDataBaseComponent::GetSkillCost(int32 skillId, ABtlActor* Action, bool& Sucsess, EBtlDataCostType& cost) {
    return 0;
}

EBtlDataAttr UBtlDataBaseComponent::GetSkillAttr(int32 skillId) {
    return EBtlDataAttr::BTL_DATA_ATTR_SLASH;
}

int32 UBtlDataBaseComponent::GetPrevUseSkillID(ABtlActor* Action) {
    return 0;
}

int32 UBtlDataBaseComponent::GetPrevUseItemID() {
    return 0;
}

FColor UBtlDataBaseComponent::GetPlatFormButtonColor(int32 ButtonType) {
    return FColor{};
}

TArray<int32> UBtlDataBaseComponent::GetPersonaTableSkillList(int32 PersonaID) {
    return TArray<int32>();
}

TArray<int32> UBtlDataBaseComponent::GetPersonaStockIndexList(ABtlActor* Actor) {
    return TArray<int32>();
}

TArray<int32> UBtlDataBaseComponent::GetPersonaSkillList(ABtlActor* Actor, int32 Index) {
    return TArray<int32>();
}

void UBtlDataBaseComponent::GetPersonaNameList(ABtlActor* Actor, TArray<FText>& NameList, int32& Count, int32& equip) {
}

FText UBtlDataBaseComponent::GetPersonaName(int32 PersonaID) {
    return FText::GetEmpty();
}

int32 UBtlDataBaseComponent::GetPersonaMaxNum() {
    return 0;
}

TArray<int32> UBtlDataBaseComponent::GetPersonaEquipSkillList(ABtlActor* Actor) {
    return TArray<int32>();
}

FText UBtlDataBaseComponent::GetPersonaEquipName(ABtlActor* Actor) {
    return FText::GetEmpty();
}

int32 UBtlDataBaseComponent::GetPersonaEquipIndex(ABtlActor* Actor) {
    return 0;
}

int32 UBtlDataBaseComponent::GetPersonaEquipID(ABtlActor* Actor) {
    return 0;
}

void UBtlDataBaseComponent::GetPersonaBySpecialSkill(int32 skillId, int32& personaID1, int32& personaID2, bool& twoPersona) {
}

bool UBtlDataBaseComponent::GetOrgiaMode(ABtlActor* Actor) {
    return false;
}

int32 UBtlDataBaseComponent::GetOperation(ABtlActor* Action) {
    return 0;
}

int32 UBtlDataBaseComponent::GetNormalSkillMaxNum() {
    return 0;
}

bool UBtlDataBaseComponent::GetManualOperate(ABtlActor* Action) {
    return false;
}

TArray<bool> UBtlDataBaseComponent::GetKeyControl(UBtlCoreComponent* BtlCore) {
    return TArray<bool>();
}

EBtlDataItemUseType UBtlDataBaseComponent::GetItemUseType(UBtlCoreComponent* BtlCore, EBtlCommandType Type, int32 ID) {
    return EBtlDataItemUseType::BTL_DATA_ITEM_USE_SUCCESS;
}

int32 UBtlDataBaseComponent::GetItemSkillID(int32 ItemId) {
    return 0;
}

FText UBtlDataBaseComponent::GetItemName(int32 ItemId) {
    return FText::GetEmpty();
}

int32 UBtlDataBaseComponent::GetItemIconSprNo(int32 ItemId) {
    return 0;
}

TArray<FBtlItemData> UBtlDataBaseComponent::GetItemBagData() {
    return TArray<FBtlItemData>();
}

bool UBtlDataBaseComponent::GetInputDecideKeyCross() {
    return false;
}

int32 UBtlDataBaseComponent::GetFukaTheurgiaSkill() {
    return 0;
}

int32 UBtlDataBaseComponent::GetEnemyDropItem(ABtlActor* Actor, int32 Index) {
    return 0;
}

void UBtlDataBaseComponent::GetCorrespondList(TArray<ABtlActor*>& Out, ABtlActor* spEmployment, EBtlCommandType Command, int32 ID) {
}

FText UBtlDataBaseComponent::GetBtlCommonText(int32 Key) {
    return FText::GetEmpty();
}

bool UBtlDataBaseComponent::GetBadStatus(ABtlActor* Actor, int32 Type) {
    return false;
}

FText UBtlDataBaseComponent::GetAttackName(int32 attr) {
    return FText::GetEmpty();
}

int32 UBtlDataBaseComponent::GetAnalyzeAttrMaxNum() {
    return 0;
}

EBtlDataAnalyze UBtlDataBaseComponent::GatAnalizeAttr(ABtlActor* Actor, uint8 attr) {
    return EBtlDataAnalyze::BTL_DATA_ANA_NORMAL;
}

void UBtlDataBaseComponent::CloseAllAttr(ABtlActor* Actor) {
}

void UBtlDataBaseComponent::ClearTargetSupport(ABtlActor* Actor, int32 Type) {
}

void UBtlDataBaseComponent::ClearSupport(ABtlActor* Actor) {
}

void UBtlDataBaseComponent::ClearBadStatus(ABtlActor* Actor) {
}

bool UBtlDataBaseComponent::ChkUseAllSkillAgeing(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::ChkTutorialSkillList(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::ChkTurnOff(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::ChkTPValid(ABtlActor* Actor) {
    return false;
}

bool UBtlDataBaseComponent::ChkSpecialSkillID(int32 ID) {
    return false;
}

bool UBtlDataBaseComponent::ChkSkillIgnoreResistances(ABtlActor* Action, int32 skillId) {
    return false;
}

bool UBtlDataBaseComponent::ChkSelectAllSkill(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::ChkSelectAllPersona(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::ChkPrevUseSkillIDFrag() {
    return false;
}

bool UBtlDataBaseComponent::ChkPlayerDamageOff(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::ChkLastActionLoop(UBtlCoreComponent* BtlCore) {
    return false;
}

int32 UBtlDataBaseComponent::ChkExcessEfficary(ABtlActor* pAction, TArray<ABtlActor*> targetList, int32 skillId, bool isItem) {
    return 0;
}

bool UBtlDataBaseComponent::ChkEnemySideWeakAll(ABtlActor* Action, TArray<ABtlActor*> EnemyList) {
    return false;
}

bool UBtlDataBaseComponent::ChkEnemySideWeak(ABtlActor* Action, TArray<ABtlActor*> EnemyList, EBtlDataAttr attr) {
    return false;
}

bool UBtlDataBaseComponent::ChkAutoSkill(int32 skillId) {
    return false;
}

bool UBtlDataBaseComponent::ChkAllCostOff(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::CheckTacticsIconLLSize(ABtlActor* Target) {
    return false;
}

bool UBtlDataBaseComponent::CheckSupportDownUp(ABtlActor* Actor, EBtlDataSupportTable support) {
    return false;
}

bool UBtlDataBaseComponent::CheckSupport(ABtlActor* Actor, int32 Type) {
    return false;
}

bool UBtlDataBaseComponent::CheckNyxCoreBattle(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::CheckExistTutorial(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::CheckExistTarget(UBtlCoreComponent* BtlCore, int32 skillId) {
    return false;
}

void UBtlDataBaseComponent::CallSupportInfoDisableShift(UBtlCoreComponent* BtlCore) {
}

void UBtlDataBaseComponent::CallRequestEscape(UBtlCoreComponent* BtlCore) {
}

bool UBtlDataBaseComponent::CallCheckEncountEscape(UBtlCoreComponent* BtlCore) {
    return false;
}

bool UBtlDataBaseComponent::CallCheckAlreadyRequestEscape(UBtlCoreComponent* BtlCore) {
    return false;
}

UBtlDataBaseComponent::UBtlDataBaseComponent() {
}

