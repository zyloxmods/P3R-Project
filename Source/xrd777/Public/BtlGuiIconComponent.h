#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "BtlGuiIconDamage.h"
#include "BtlIconDelegateDelegate.h"
#include "EBtlCommandType.h"
#include "EBtlGuiIconKeyHelp.h"
#include "BtlGuiIconComponent.generated.h"

class ABtlActor;
class UBtlCoreComponent;
class UBtlGuiDrawObjectMsg;
class UTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlGuiIconComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlIconDelegate OnVisibleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlIconDelegate OnHiddenEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlIconDelegate OnJyokyoHelpEndEvent;
    
    UBtlGuiIconComponent();
    UFUNCTION(BlueprintCallable)
    void VisibleActionSuggestion(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void UpdateParamPartyPanel_SP(int32 PlayerId, int32 Sp);
    
    UFUNCTION(BlueprintCallable)
    void UpdateParamPartyPanel_HP(int32 PlayerId, int32 Hp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEncountEffectForBP(bool IsPlayerAdvantage, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start1MoreEffectForBP(bool IsEnemy, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ShowFukaPartyPanel();
    
    UFUNCTION(BlueprintCallable)
    void SetVariableJyokyoHelp(UBtlGuiDrawObjectMsg* pMsg, int32 genus, int32 ID, int32 var1, int32 var2, int32 flags);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyPanelVisible(bool vidible, bool ResetAnimFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyHelpVisible(bool Visible, UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyHelpOffset(EBtlGuiIconKeyHelp help, UBtlCoreComponent* BtlCore, bool noChange, bool disableParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterPartyPanel(ABtlActor* ActiveActor, bool IsSkipAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestJyokyoHelpForBP(int32 genus, int32 ID, int32 msgNo, int32 var1, int32 var2, float renderTime, float DelayTime, bool forceOverride, int32 flags);
    
    UFUNCTION(BlueprintCallable)
    void RecoverPartyPanel_SP(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RecoverPartyPanel_HP(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RecoverPartyPanel_BadStatus(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    bool LoadSyncPartyPanel();
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetRenderTargets(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DisableCharacterPartyPanel();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPartyPanel();
    
    UFUNCTION(BlueprintCallable)
    void DestroyActionSuggestion();
    
    UFUNCTION(BlueprintCallable)
    void DamagePartyPanel(int32 PlayerId, bool isWeak);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateTotalDamagePanelForBP(int32 Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSkillNamePanelForBP(EBtlCommandType Cmd, int32 ID, bool IsEnemy, float Time);
    
    UFUNCTION(BlueprintCallable)
    void CreatePartyPanel(float Scale, float X, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDamagePanelForBP(const FBtlGuiIconDamage& Data);
    
    UFUNCTION(BlueprintCallable)
    void CreateActionSuggestion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSkillNamePanelForBP();
    
    UFUNCTION(BlueprintCallable)
    void ClearKeyHelpOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearDamagePanelForBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPartyPanelVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelJyokyoHelpForBP();
    
    UFUNCTION(BlueprintCallable)
    void CallJyokyoHelpBroadcast();
    
};

