#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIDrawBaseActor.h"
#include "DifficultySelectionActor.generated.h"

class UAssetLoader;
class UDataTable;
class UPlgAsset;
class USprAsset;
class UTexture;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API ADifficultySelectionActor : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FProcessCompleted);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* TitleSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* TitlePlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* InheritanceTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TitleSelectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* UILayoutLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DiffBGScaleAnimFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DiffBGAlphaAnimFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DiffBGGradAlphaAnimFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListWaitFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoInAnimRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoInAnimFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoInWaitFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoChangeAnimRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoChangeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoChangeAnimWaitFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloseListAndHelpFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloseListY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloseBGFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InheritanceBGFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InheritanceFadeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CloseBGNotScaleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeAnimDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiffBGX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiffBGY;
    
public:
    ADifficultySelectionActor();
    UFUNCTION(BlueprintCallable)
    bool LoadCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMsgInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetScreenSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCursorIndex();
    
    UFUNCTION(BlueprintCallable)
    void DrawInfoText(FVector2D InPos, FColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawHelp(float AddX, float AddY);
    
    UFUNCTION(BlueprintCallable)
    void DrawDiffList();
    
    UFUNCTION(BlueprintCallable)
    void DrawDescriptionText(FVector2D InPos, FColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawBlackFade();
    
    UFUNCTION(BlueprintCallable)
    void DrawBG();
    
    UFUNCTION(BlueprintCallable)
    void ChangeInfoR();
    
    UFUNCTION(BlueprintCallable)
    void ChangeInfoL();
    
};

