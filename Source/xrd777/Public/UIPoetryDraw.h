#pragma once
#include "CoreMinimal.h"
#include "CurveFloatAnimation.h"
#include "EUIRippleTimeLayout.h"
#include "UIDrawBaseActor.h"
#include "UIPoetryDraw.generated.h"

class AUICmmRankUPAnimManager;
class UDataTable;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UTexture;
class UUILayoutDataTable;
class UUIPoetryDataAsset;
class UUIPoetryRippleDataAsset;

UCLASS(Blueprintable)
class XRD777_API AUIPoetryDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ArcanaID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ModeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIPoetryDataAsset* Data_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIPoetryRippleDataAsset* RippleData_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_BlurTexPath[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_pEfTexPath[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_pNormalTexPath[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_pBlurTex[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_pEfTex[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_pNormalTex[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_ArcanaTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_ArcanaTexBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_ArcanaTexEf;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pRippleMat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMat_Line1[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMat_Line2[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMat_Line3[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMat_Line4[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMat_Line5[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMat_Ripples[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EfBaseAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineStartTime_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineStartTime_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineStartTime_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineStartTime_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineStartTime_5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OkKeyPushStartTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OkKeyPushEndTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OkKeyFadeOutAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OkKeyFadeOutMovePos;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation CrvFadeWidthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation CrvFadeHeightAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation CrvFadeLineAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation CrvFadeLineEfAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation CrvFadeRippleAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation CrvFadeRippleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmmRankUPAnimManager* AnimManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PoetyLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* PoetyLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RippleLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* RippleLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RippleTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* RippleTimeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OkNextLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* OkNextLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OkNextMaskLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* OkNextMaskLayoutDataTable;
    
public:
    AUIPoetryDraw();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(const float inDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool UIPoetryIsRankMaxPoetry();
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryGetParam(float EfBaseAlpha_);
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawRippleOpen(float DeltaTime, float Ripple1, float Ripple2, float Ripple3, float Ripple4, float Ripple5);
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawRippleMax(float DeltaTime, float Ripple1, float Ripple2, float Ripple3, float Ripple4, float Ripple5, float Ripple6, float Ripple7, float Ripple8);
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawOkKey();
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawMaxLine3();
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawMaxLine2();
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawMaxLine1();
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawLine2();
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawLine1();
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryDrawAllPoetry();
    
    UFUNCTION(BlueprintCallable)
    void UIPoetryCreateMaterial();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustedLayoutRippleTiming(EUIRippleTimeLayout InLayoutId, float InDefaultTiming);
    
};

