#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIDrawBaseActor.h"
#include "UICmmRankUpDraw.generated.h"

class AUICmmRankUPAnimManager;
class AUIRankUpDraw;
class UFrameBufferCapture;
class UPlgAsset;
class USprAsset;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AUICmmRankUpDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* pSprAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* pPlgAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFrameBufferCapture* CaptureTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmmRankUPAnimManager* AnimManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* pSprKeyHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* pSprKeyHelpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIRankUpDraw* pManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* OkNextLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* OkNextMaskLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* CmmRankUpLayoutDataTable;
    
public:
    AUICmmRankUpDraw();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(const float inDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UICmmReverseBG(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawRankStar(float BasePosX, float BasePosY);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawOkKey(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawLetter(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawGradationBG(FVector2D vLeftPos, FVector2D vRightPos, FVector2D hLeftPos, FVector2D hRightPos);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawEndDraw(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawCard(float X, float Y);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartStarWaitAnime();
    
    UFUNCTION(BlueprintCallable)
    void StartStarMainInAnime();
    
    UFUNCTION(BlueprintCallable)
    void StartStarFrameAnime();
    
    UFUNCTION(BlueprintCallable)
    void StartShowReverseStar();
    
    UFUNCTION(BlueprintCallable)
    bool isEndAnimStart();
    
};

