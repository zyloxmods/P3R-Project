#pragma once
#include "CoreMinimal.h"
#include "BtlGuiResourcesBase.h"
#include "BtlGuiResourcesActor.generated.h"

class UAssetLoader;
class UDataTable;
class UObject;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API ABtlGuiResourcesActor : public ABtlGuiResourcesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* pLoadAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StackLoadPath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pItemSkillListTextDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTargetInfoTextDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTacticsListTextDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTheurgiaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTacticsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTopDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pGuardDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTheurgiaTextDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTheurgiaTextRowDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTheurgiaTextPosDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTacticsCheckDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pPromiseDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pAnalyzeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pAnalyzeTextDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pDamageIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pRushDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pOthersDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pTouchCollDataTable;
    
public:
    ABtlGuiResourcesActor();
    UFUNCTION(BlueprintCallable)
    void RequestAddResources(const FString& ResourcesPath);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTopLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTheurgiaTextLayoutData(UDataTable* textData, UDataTable* textRowData, UDataTable* textPosData);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTheurgiaLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTargetInfoTextLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTargetInfoLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTacticsListTextLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTacticsLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeRushLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializePromiseLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeOthersLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeItemSkillListTextLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeGuardLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeDamageIconLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleTouchCollLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnalyzeTextLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnalyzeLayoutData(UDataTable* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UObject* GetResources(FName Name);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetAddResources();
    
    UFUNCTION(BlueprintCallable)
    void CallDelegate();
    
};

