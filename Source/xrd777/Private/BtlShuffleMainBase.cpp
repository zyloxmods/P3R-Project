#include "BtlShuffleMainBase.h"

void ABtlShuffleMainBase::UpdateCardRotation(float DeltaTime, int32 idx) {
}

void ABtlShuffleMainBase::StartMsg(int32 ID) {
}

void ABtlShuffleMainBase::StartLoadCardResource_Implementation() {
}


void ABtlShuffleMainBase::SetTouchCollision(int32 Index, float X, float Y, float Width, float Height, EUI_DRAW_POINT DrawPoint) {
}

void ABtlShuffleMainBase::SetPosPersonaList(FVector2D InPos) {
}

void ABtlShuffleMainBase::SetPersonaSkillHelp(bool use) {
}

void ABtlShuffleMainBase::SetMsgVariableSelectCard(UBtlGuiDrawObjectMsg* pMsg, int32 idx, int32 PersonaID, bool isBonusCard) {
}

void ABtlShuffleMainBase::SetKeyHelp(EBtlShuffleKeyHelpState State) {
}

void ABtlShuffleMainBase::SetEndPersonaListInFlag(bool Value) {
}

void ABtlShuffleMainBase::SetEndCardInAnime(bool Input) {
}

void ABtlShuffleMainBase::SetEndArcanaBurstInFlag(bool Value) {
}

void ABtlShuffleMainBase::SetBmdValue(UBtlGuiDrawObjectMsg* pMsg, const FString& value1, const FString& value2, const FString& value3, const FString& value4) {
}

void ABtlShuffleMainBase::SetAlphaPersonaList(float Alpha) {
}

void ABtlShuffleMainBase::SecondTextCardInStateEffect_Implementation(int32 idx) {
}

void ABtlShuffleMainBase::RunStateSelectPersona_Implementation(float DeltaTime) {
}

void ABtlShuffleMainBase::RunStateSelectCardAllGetBonus_Implementation(float DeltaTime) {
}

void ABtlShuffleMainBase::RunStateSelectCard_Implementation(float DeltaTime) {
}

void ABtlShuffleMainBase::RunStateExit_Implementation(float DeltaTime) {
}

void ABtlShuffleMainBase::RunStateEnter_Implementation(float DeltaTime) {
}

void ABtlShuffleMainBase::RunStateEffectCard_Implementation(float DeltaTime) {
}

void ABtlShuffleMainBase::RunStateEffectAllGetBonus_Implementation(float DeltaTime) {
}

void ABtlShuffleMainBase::RunStateAllGetBonus_Implementation(float DeltaTime) {
}

void ABtlShuffleMainBase::ReleaseTutorialStopper() {
}

void ABtlShuffleMainBase::ReleaseResource_Implementation() {
}

void ABtlShuffleMainBase::PrepareStateSelectPersona_Implementation() {
}

void ABtlShuffleMainBase::PrepareStateSelectCardAllGetBonus_Implementation() {
}

void ABtlShuffleMainBase::PrepareStateSelectCard_Implementation() {
}

void ABtlShuffleMainBase::PrepareStateExit_Implementation() {
}

void ABtlShuffleMainBase::PrepareStateEnter_Implementation() {
}

void ABtlShuffleMainBase::PrepareStateEffectCard_Implementation() {
}

void ABtlShuffleMainBase::PrepareStateEffectAllGetBonus_Implementation() {
}

void ABtlShuffleMainBase::PrepareStateAllGetBonus_Implementation() {
}

void ABtlShuffleMainBase::PlayOnemore() {
}

void ABtlShuffleMainBase::LoadTimeCardStart() {
}

void ABtlShuffleMainBase::LoadTimeCardEnd() {
}

void ABtlShuffleMainBase::LoadResource_Implementation() {
}

void ABtlShuffleMainBase::InitLayoutDataTable(UDataTable* pLayoutData, UDataTable* pTextLayoutData) {
}

FVector ABtlShuffleMainBase::GetTextCollision(EBtlShuffleTextLayout InLayoutId) {
    return FVector{};
}

USprAsset* ABtlShuffleMainBase::GetSprAsset() {
    return NULL;
}

int32 ABtlShuffleMainBase::GetSelectedCardIndex(int32 selectIdx) {
    return 0;
}

int32 ABtlShuffleMainBase::GetRemainNumMajorArcana() {
    return 0;
}

UPlgAsset* ABtlShuffleMainBase::GetPlgAsset() {
    return NULL;
}

FString ABtlShuffleMainBase::GetNamePersona(int32 ID) {
    return TEXT("");
}

FString ABtlShuffleMainBase::GetNameMajorArcana(int32 ID) {
    return TEXT("");
}

int32 ABtlShuffleMainBase::GetMegNoDetailArcanaSelectCard(int32 idx, int32 minorId, bool isBonusCard) {
    return 0;
}

int32 ABtlShuffleMainBase::GetMaxNumMajorArcana() {
    return 0;
}

int32 ABtlShuffleMainBase::GetItemNumSelectCard(int32 idx, bool isBonusCard) {
    return 0;
}

UAnimSequenceBase* ABtlShuffleMainBase::GetInAnime(int32 idx) {
    return NULL;
}

TArray<int32> ABtlShuffleMainBase::GetHaveMajorArcana() {
    return TArray<int32>();
}

int32 ABtlShuffleMainBase::GetHaveItemNumBySelectCard(int32 idx, bool isBonusCard) {
    return 0;
}

UBmdAsset* ABtlShuffleMainBase::GetBmdAsset() {
    return NULL;
}

void ABtlShuffleMainBase::GetAxisR(float& X, float& Y) {
}

void ABtlShuffleMainBase::GetAppearCardInfoDetail(int32 idx, int32& Type, int32& Rank, int32& Value, int32& value2, bool isBonusCard) {
}

void ABtlShuffleMainBase::GetAppearCard(int32 idx, FAppPropsCardParam& Output, bool isBonusCard) {
}

UTexture* ABtlShuffleMainBase::GetAllGetTexture(int32 idx) {
    return NULL;
}

FVector2D ABtlShuffleMainBase::GetAdjustedPosition(EBtlShuffleLayout InLayoutId) {
    return FVector2D{};
}

void ABtlShuffleMainBase::EndStateSelectPersona_Implementation() {
}

void ABtlShuffleMainBase::EndStateSelectCardAllGetBonus_Implementation() {
}

void ABtlShuffleMainBase::EndStateSelectCard_Implementation() {
}

void ABtlShuffleMainBase::EndStateExit_Implementation() {
}

void ABtlShuffleMainBase::EndStateEnter_Implementation() {
}

void ABtlShuffleMainBase::EndStateEffectCard_Implementation() {
}

void ABtlShuffleMainBase::EndStateEffectAllGetBonus_Implementation() {
}

void ABtlShuffleMainBase::EndStateAllGetBonus_Implementation() {
}

void ABtlShuffleMainBase::CreatePersonaStatus() {
}

void ABtlShuffleMainBase::CreateMsg() {
}

void ABtlShuffleMainBase::ClosePersonaStatus() {
}

void ABtlShuffleMainBase::CloseMsg() {
}

bool ABtlShuffleMainBase::CheckShowPersonaStatus() {
    return false;
}

bool ABtlShuffleMainBase::CheckShowMsg(int32 ID) {
    return false;
}

bool ABtlShuffleMainBase::CheckNewCard(int32 idx) {
    return false;
}

bool ABtlShuffleMainBase::CheckLoadCardResource_Implementation() {
    return false;
}

bool ABtlShuffleMainBase::CheckEnableShuffletime() {
    return false;
}

bool ABtlShuffleMainBase::CheckDoubleDraw() {
    return false;
}

bool ABtlShuffleMainBase::CheckCursorSlectedArcana(int32 idx) {
    return false;
}

bool ABtlShuffleMainBase::CheckCompleteLoadResource_Implementation() {
    return false;
}

bool ABtlShuffleMainBase::CheckChangeCard() {
    return false;
}

bool ABtlShuffleMainBase::CheckAlloutMode() {
    return false;
}

bool ABtlShuffleMainBase::CheckAllGetBonusMode() {
    return false;
}

void ABtlShuffleMainBase::ChangeTextureEffectCard_Implementation() {
}

void ABtlShuffleMainBase::ChangeStateSelectPersona() {
}

void ABtlShuffleMainBase::ChangeStateSelectCardAllGetBonus() {
}

void ABtlShuffleMainBase::ChangeStateSelectCard() {
}

void ABtlShuffleMainBase::ChangeStateExit() {
}

void ABtlShuffleMainBase::ChangeStateEnter() {
}

void ABtlShuffleMainBase::ChangeStateEffectCard() {
}

void ABtlShuffleMainBase::ChangeStateEffectAllGetBonus() {
}

void ABtlShuffleMainBase::ChangeStateAllGetBonus() {
}

void ABtlShuffleMainBase::ChangePersonaStatusRight(int32 Cursor) {
}

void ABtlShuffleMainBase::ChangePersonaStatusLeft(int32 Cursor) {
}

void ABtlShuffleMainBase::ChangeCardRotationSpeed(int32 idx) {
}

void ABtlShuffleMainBase::CardFallUpdate(float DeltaTime) {
}

void ABtlShuffleMainBase::CardFallInit() {
}

void ABtlShuffleMainBase::CardFallDraw() {
}



void ABtlShuffleMainBase::ActionCardInStateEffect_Implementation(int32 idx) {
}


ABtlShuffleMainBase::ABtlShuffleMainBase() {
    this->SelectCoursorIndex = 0;
    this->ShowCardsMax = 0;
    this->EnableSelectNum = 0;
    this->IsFirstSelect = false;
    this->IsStopButton = false;
    this->SelectedCardNum = 0;
    this->ActionCardIndex = 0;
    this->IsStartMajorArcanaEffect = false;
    this->EffectMessagePage = EBtlShuffleCardState::BTL_SHUFFLECARD_WAIT;
    this->PersonaSelectCoursorIndex = 0;
    this->PersonaSelectState = 0;
    this->IsStartCharaAnime = false;
    this->AllGetBonousMessageIndex = 0;
    this->AllGetBonousEffectMessageIndex = EBtlShuffleCardState::BTL_SHUFFLECARD_WAIT;
    this->isEndCardInAnime = false;
    this->isEndPersonaListInFlag = false;
    this->isEndArcanaBurstInFlag = false;
    this->Loader = NULL;
    this->SprShuffle = NULL;
    this->PlgShuffle = NULL;
    this->pTutorialManager = NULL;
    this->MessageBmd = NULL;
    this->AllGetDownTexture[0] = NULL;
    this->AllGetDownTexture[1] = NULL;
    this->AllGetDownTexture[2] = NULL;
    this->AllGetDownTexture[3] = NULL;
    this->MsgShuffle = NULL;
    this->CompensationData = NULL;
    this->ArcanaManager = NULL;
    this->PersonaList = NULL;
    this->AnimCardInSequence[0] = NULL;
    this->AnimCardInSequence[1] = NULL;
    this->AnimCardInSequence[2] = NULL;
    this->AnimCardInSequence[3] = NULL;
    this->AnimCardInSequence[4] = NULL;
    this->AnimCardInSequence[5] = NULL;
    this->AnimCardInSequence[6] = NULL;
    this->AnimCardInSequence[7] = NULL;
    this->AnimCardIn[0] = NULL;
    this->AnimCardIn[1] = NULL;
    this->AnimCardIn[2] = NULL;
    this->AnimCardIn[3] = NULL;
    this->AnimCardIn[4] = NULL;
    this->CardSelectEffect = NULL;
    this->CardBonusEffect = NULL;
    this->CardContainer = NULL;
    this->_PersonaStatusActor = NULL;
    this->ResultResource = NULL;
    this->LayoutDataTable = NULL;
    this->TextLayoutDataTable = NULL;
}

