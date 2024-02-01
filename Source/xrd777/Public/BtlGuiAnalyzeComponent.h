#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "EBtlAnalyzeSupportType.h"
#include "BtlGuiAnalyzeComponent.generated.h"

class ABtlActor;
class UAssetLoader;
class UBmdAsset;
class UBtlCoreComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlGuiAnalyzeComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* BmdAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
public:
    UBtlGuiAnalyzeComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateAnalyze(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadResource();
    
    UFUNCTION(BlueprintCallable)
    void ShowMessage(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ShowFukaPartyPanel();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectIndex(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> RemoveSameEnemyID(TArray<ABtlActor*> inList, ABtlActor* PriorityActor);
    
    UFUNCTION(BlueprintCallable)
    void PlaySupportInfo(UBtlCoreComponent* BtlCore, ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnalyzeSupportInfo(UBtlCoreComponent* BtlCore, int32 PlayID);
    
    UFUNCTION(BlueprintCallable)
    void OpenSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void HiddenFukaPartyPanel();
    
    UFUNCTION(BlueprintCallable)
    EBtlAnalyzeSupportType GetSupportTypeTargetEnemy(UBtlCoreComponent* BtlCore, ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    UBmdAsset* GetHighAnalyzeBMD(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugEnableFlag(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCostHighAnalyze();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeSupportInfo(UBtlCoreComponent* BtlCore, EBtlAnalyzeSupportType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseAnalyze();
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowStatus(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowSkill(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowItem(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowFukaFukidashi(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowAttackAttr(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool CheckShowArcana(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPlayHighAnalzeSupport(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHighAnalyzeEnableSP();
    
    UFUNCTION(BlueprintCallable)
    bool CheckEndLoader();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAttrFullOpen(ABtlActor* Actor);
    
};

