#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlGuiStateChangeDelegate.h"
#include "BtlGuiStateChangeParamDelegate.h"
#include "EBtlGuiState.h"
#include "BtlGuiStateManager.generated.h"

UCLASS(Blueprintable)
class XRD777_API ABtlGuiStateManager : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiState nowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiState prevState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBtlGuiState> StateList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiStateChange GuiStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiStateChangeParam GuiStateChangeParam;
    
    ABtlGuiStateManager();
    UFUNCTION(BlueprintCallable)
    void UpdateLayoutDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetState(EBtlGuiState State, bool sendFlag, int32 sendNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevState(EBtlGuiState State);
    
    UFUNCTION(BlueprintCallable)
    void ResetPrevState();
    
    UFUNCTION(BlueprintCallable)
    bool OnDebugRushStopMaskVisible();
    
    UFUNCTION(BlueprintCallable)
    bool OnDebugRushStopMaskAnimPause();
    
    UFUNCTION(BlueprintCallable)
    bool OnDebugRushDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLayoutDebugMenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlGuiState GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlGuiState GetPrevState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugSkillNamePanelID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugJyokyoHelpID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugDamageTextIdx();
    
    UFUNCTION(BlueprintCallable)
    void ClearState();
    
    UFUNCTION(BlueprintCallable)
    void ChangePrevState(bool sendFlag, int32 sendNumber);
    
};

