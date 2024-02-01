#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppActor.h"
#include "BtlResultAllyLvupParam.h"
#include "BtlResultHeroInfo.h"
#include "BtlResultItemParam.h"
#include "BtlResultPersonaParam.h"
#include "EBtlResultHeroPersonaUpEvent.h"
#include "EBtlResultLayout.h"
#include "EBtlResultTextLayout.h"
#include "EOkNextLayout.h"
#include "BtlResultUIBase.generated.h"

class AActor;
class ABtlResultResourceManager;
class APersonaStatus;
class UAssetLoader;
class UBmdAsset;
class UBtlResultViewData;
class UDataTable;
class USprAsset;
class UTexture;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API ABtlResultUIBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlResultViewData* _ViewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isShowPlusWindos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCreateMsgWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FoundActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ShowingPersonaNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ShowingPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndPersonaStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEndHeroPersona;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEndAllyPersona;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* _PersonaStatusActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* SprResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* BmdResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* EquipPersonaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlResultResourceManager* ResultResource;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEndPrepare;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TextLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* TextLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OkNextLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* OkNextLayoutDataTable;
    
public:
    ABtlResultUIBase();
    UFUNCTION(BlueprintCallable)
    void UpdatePersonaStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartResultUI(UBtlResultViewData* InViewData);
    
    UFUNCTION(BlueprintCallable)
    void StartPersona();
    
    UFUNCTION(BlueprintCallable)
    void StartHeroStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseResource();
    
    UFUNCTION(BlueprintCallable)
    void PrevDebugPersonaTexutreID();
    
    UFUNCTION(BlueprintCallable)
    void ObtainItems();
    
    UFUNCTION(BlueprintCallable)
    void NextDebugPersonaTexutreID();
    
    UFUNCTION(BlueprintCallable)
    void LoadResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLayoutDebugMenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawComma(int32 digCount);
    
    UFUNCTION(BlueprintCallable)
    bool InputTrigDecideButton();
    
    UFUNCTION(BlueprintCallable)
    bool InputRepRUButton();
    
    UFUNCTION(BlueprintCallable)
    bool InputDebugButtonR();
    
    UFUNCTION(BlueprintCallable)
    bool InputDebugButtonL();
    
    UFUNCTION(BlueprintCallable)
    bool InputDebugButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTextCollision(EBtlResultTextLayout InLayoutId);
    
    UFUNCTION(BlueprintCallable)
    USprAsset* GetSprAsset();
    
    UFUNCTION(BlueprintCallable)
    UBmdAsset* GetResultBmd();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlResultPersonaParam> GetPersonaLevelupParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetOkNextLayoutPosition(EOkNextLayout InLayoutId, FVector2D InDefaultPos);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlResultItemParam> GetItemParams();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemMsgID();
    
    UFUNCTION(BlueprintCallable)
    FBtlResultHeroInfo GetHeroInfo();
    
    UFUNCTION(BlueprintCallable)
    void GetHeroHumanLvupParam(bool& isLvup, int32& Level);
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetEquipPersonaTexture();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugPersonaTexutreID();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlResultAllyLvupParam> GetAllyLevelupParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAdjustedLayoutPosition(EBtlResultLayout InLayoutId, FVector2D InDefaultPos);
    
    UFUNCTION(BlueprintCallable)
    void DrawMsg(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void CreateMsg();
    
    UFUNCTION(BlueprintCallable)
    int32 ConvertItemSprID(int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    void CloseMsg();
    
    UFUNCTION(BlueprintCallable)
    void CloseHeroStatus();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSKillGetPersona();
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowMsg(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPersonaStatus();
    
    UFUNCTION(BlueprintCallable)
    bool CheckHeroStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckEndResultUI();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCompleteLoadResource();
    
    UFUNCTION(BlueprintCallable)
    EBtlResultHeroPersonaUpEvent CalcStockUp();
    
};

