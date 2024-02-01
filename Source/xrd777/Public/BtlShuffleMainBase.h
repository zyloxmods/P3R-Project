#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AppActor.h"
#include "AppPropsCardParam.h"
#include "EBtlShuffleCardState.h"
#include "EBtlShuffleKeyHelpState.h"
#include "EBtlShuffleLayout.h"
#include "EBtlShuffleTextLayout.h"
#include "EUI_DRAW_POINT.h"
#include "ShuffleCardInfo.h"
#include "BtlShuffleMainBase.generated.h"

class AAppPropsCardContainer;
class ABtlResultResourceManager;
class ABtlShuffleArcanaManager;
class APersonaStatus;
class UAnimSequenceBase;
class UAssetLoader;
class UBmdAsset;
class UBtlCompensation;
class UBtlGuiDrawObjectMsg;
class UBtlShufflePersonaList;
class UDataTable;
class UNiagaraSystem;
class UPlgAsset;
class USprAsset;
class UTexture;
class UTutorialManager;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API ABtlShuffleMainBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectCoursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowCardsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableSelectNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStopButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedCardNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionCardIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartMajorArcanaEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlShuffleCardState EffectMessagePage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersonaSelectCoursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersonaSelectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartCharaAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllGetBonousMessageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlShuffleCardState AllGetBonousEffectMessageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEndCardInAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEndPersonaListInFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEndArcanaBurstInFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> AppearMajors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* SprShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* PlgShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialManager* pTutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* MessageBmd;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* AllGetDownTexture[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectMsg* MsgShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlCompensation* CompensationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlShuffleArcanaManager* ArcanaManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlShufflePersonaList* PersonaList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimCardInSequence[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimCardIn[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CardSelectEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CardBonusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppPropsCardContainer* CardContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShuffleCardInfo> CardInfos;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* _PersonaStatusActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlResultResourceManager* ResultResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* TextLayoutDataTable;
    
public:
    ABtlShuffleMainBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCardRotation(float DeltaTime, int32 idx);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartMsg(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartLoadCardResource();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartingCardSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetTouchCollision(int32 Index, float X, float Y, float Width, float Height, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetPosPersonaList(FVector2D InPos);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaSkillHelp(bool use);
    
    UFUNCTION(BlueprintCallable)
    void SetMsgVariableSelectCard(UBtlGuiDrawObjectMsg* pMsg, int32 idx, int32 PersonaID, bool isBonusCard);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyHelp(EBtlShuffleKeyHelpState State);
    
    UFUNCTION(BlueprintCallable)
    void SetEndPersonaListInFlag(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEndCardInAnime(bool Input);
    
    UFUNCTION(BlueprintCallable)
    void SetEndArcanaBurstInFlag(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBmdValue(UBtlGuiDrawObjectMsg* pMsg, const FString& value1, const FString& value2, const FString& value3, const FString& value4);
    
    UFUNCTION(BlueprintCallable)
    void SetAlphaPersonaList(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SecondTextCardInStateEffect(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunStateSelectPersona(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunStateSelectCardAllGetBonus(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunStateSelectCard(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunStateExit(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunStateEnter(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunStateEffectCard(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunStateEffectAllGetBonus(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunStateAllGetBonus(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTutorialStopper();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseResource();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareStateSelectPersona();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareStateSelectCardAllGetBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareStateSelectCard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareStateEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareStateEffectCard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareStateEffectAllGetBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareStateAllGetBonus();
    
    UFUNCTION(BlueprintCallable)
    void PlayOnemore();
    
    UFUNCTION(BlueprintCallable)
    void LoadTimeCardStart();
    
    UFUNCTION(BlueprintCallable)
    void LoadTimeCardEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadResource();
    
    UFUNCTION(BlueprintCallable)
    void InitLayoutDataTable(UDataTable* pLayoutData, UDataTable* pTextLayoutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTextCollision(EBtlShuffleTextLayout InLayoutId);
    
    UFUNCTION(BlueprintCallable)
    USprAsset* GetSprAsset();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedCardIndex(int32 selectIdx);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemainNumMajorArcana();
    
    UFUNCTION(BlueprintCallable)
    UPlgAsset* GetPlgAsset();
    
    UFUNCTION(BlueprintCallable)
    FString GetNamePersona(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    FString GetNameMajorArcana(int32 ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetMegNoDetailArcanaSelectCard(int32 idx, int32 minorId, bool isBonusCard);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetMaxNumMajorArcana();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemNumSelectCard(int32 idx, bool isBonusCard);
    
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* GetInAnime(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetHaveMajorArcana();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHaveItemNumBySelectCard(int32 idx, bool isBonusCard);
    
    UFUNCTION(BlueprintCallable)
    UBmdAsset* GetBmdAsset();
    
    UFUNCTION(BlueprintCallable)
    void GetAxisR(float& X, float& Y);
    
    UFUNCTION(BlueprintCallable)
    void GetAppearCardInfoDetail(int32 idx, int32& Type, int32& Rank, int32& Value, int32& value2, bool isBonusCard);
    
    UFUNCTION(BlueprintCallable)
    void GetAppearCard(int32 idx, FAppPropsCardParam& Output, bool isBonusCard);
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetAllGetTexture(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAdjustedPosition(EBtlShuffleLayout InLayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStateSelectPersona();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStateSelectCardAllGetBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStateSelectCard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStateEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStateEffectCard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStateEffectAllGetBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStateAllGetBonus();
    
    UFUNCTION(BlueprintCallable)
    void CreatePersonaStatus();
    
    UFUNCTION(BlueprintCallable)
    void CreateMsg();
    
    UFUNCTION(BlueprintCallable)
    void ClosePersonaStatus();
    
    UFUNCTION(BlueprintCallable)
    void CloseMsg();
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowPersonaStatus();
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowMsg(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    bool CheckNewCard(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckLoadCardResource();
    
    UFUNCTION(BlueprintCallable)
    bool CheckEnableShuffletime();
    
    UFUNCTION(BlueprintCallable)
    bool CheckDoubleDraw();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckCursorSlectedArcana(int32 idx);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCompleteLoadResource();
    
    UFUNCTION(BlueprintCallable)
    bool CheckChangeCard();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAlloutMode();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAllGetBonusMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeTextureEffectCard();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateSelectPersona();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateSelectCardAllGetBonus();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateSelectCard();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateExit();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateEnter();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateEffectCard();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateEffectAllGetBonus();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateAllGetBonus();
    
    UFUNCTION(BlueprintCallable)
    void ChangePersonaStatusRight(int32 Cursor);
    
    UFUNCTION(BlueprintCallable)
    void ChangePersonaStatusLeft(int32 Cursor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeCardRotationSpeed(int32 idx);
    
public:
    UFUNCTION(BlueprintCallable)
    void CardFallUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void CardFallInit();
    
    UFUNCTION(BlueprintCallable)
    void CardFallDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionSelectCard(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionOnemore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionCardInStateEffect(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionCancel(int32 idx);
    
};

