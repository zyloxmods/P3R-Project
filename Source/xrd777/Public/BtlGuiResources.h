#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AppActorComponent.h"
#include "BtlGuiResourceAddDelegateDelegate.h"
#include "EBtlAnalyzeLayout.h"
#include "EBtlAnalyzeTextLayout.h"
#include "EBtlDamageIconLayout.h"
#include "EBtlGuardLayout.h"
#include "EBtlItemSkillListTextLayout.h"
#include "EBtlOthersLayout.h"
#include "EBtlPromiseLayout.h"
#include "EBtlRushLayout.h"
#include "EBtlTacticsCheckLayout.h"
#include "EBtlTacticsLayout.h"
#include "EBtlTacticsListTextLayout.h"
#include "EBtlTargetInfoTextLayout.h"
#include "EBtlTheurgiaLayout.h"
#include "EBtlTopLayout.h"
#include "EBtlTouchCollisionLayout.h"
#include "EUITheurgiaTextLayout.h"
#include "EUITheurgiaTextPosLayout.h"
#include "EUITheurgiaTextRowLayout.h"
#include "BtlGuiResources.generated.h"

class ABtlGuiResourcesActor;
class ABtlGuiResourcesBase;
class ABtlGuiStateManager;
class UObject;
class USprAsset;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlGuiResources : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiResourceAddDelegate AddResourcesDelegate;
    
    UBtlGuiResources();
    UFUNCTION(BlueprintCallable)
    static void SetResourcesActor(ABtlGuiResourcesActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetAsyncLoadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void RequestAddResources(const FString& ResourcesPath);
    
    UFUNCTION(BlueprintCallable)
    void LoadEndAction();
    
    UFUNCTION(BlueprintCallable)
    void InitializeLayoutDebugMenu(ABtlGuiStateManager* StateManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTouchCollData(EBtlTouchCollisionLayout LayoutId, float& PosX, float& PosY, float& Angle, float& Width, float& Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTopAdjustedPosition(EBtlTopLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTheurgiaTextTextCollition(EUITheurgiaTextLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTheurgiaTextRow(EUITheurgiaTextRowLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTheurgiaTextPos(EUITheurgiaTextPosLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTheurgiaAdjustedPosition(EBtlTheurgiaLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTargetInfoTextCollision(EBtlTargetInfoTextLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTacticsTextCollision(EBtlTacticsListTextLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTacticsCheckAdjustedPosition(EBtlTacticsCheckLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTacticsAdjustedPosition(EBtlTacticsLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRushAdjustedPosition(EBtlRushLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResourcesPure(FName ResourcesName, UClass* ResourcesClass, UObject*& OutResources);
    
    UFUNCTION(BlueprintCallable)
    void GetResources(FName ResourcesName, UClass* ResourcesClass, UObject*& OutResources);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPromiseAdjustedPosition(EBtlPromiseLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetOthersAdjustedPosition(EBtlOthersLayout LayoutId);
    
    UFUNCTION(BlueprintCallable)
    USprAsset* GetKeyHelpSpr();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetItemSkillListTextCollision(EBtlItemSkillListTextLayout LayoutId);
    
    UFUNCTION(BlueprintCallable)
    USprAsset* GetItemIconSpr();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetGuardAdjustedPosition(EBtlGuardLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDamageIconAdjustedPosition(EBtlDamageIconLayout LayoutId);
    
    UFUNCTION(BlueprintCallable)
    USprAsset* GetCampSpr();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetAppRenderTarget(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAnalyzeTextTextCollition(EBtlAnalyzeTextLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAnalyzeAdjustedPosition(EBtlAnalyzeLayout LayoutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAddResourcesPure(UClass* ResourcesClass, UObject*& OutResources);
    
    UFUNCTION(BlueprintCallable)
    void GetAddResources(UClass* ResourcesClass, UObject*& OutResources);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBtlResourcesCompleted();
    
    UFUNCTION(BlueprintCallable)
    static void BtlGuiResourcesDestroy();
    
    UFUNCTION(BlueprintCallable)
    static ABtlGuiResourcesBase* BtlGuiResourcesCreate();
    
};

