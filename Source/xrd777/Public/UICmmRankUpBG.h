#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIBlendFactor.h"
#include "UIDrawBaseActor.h"
#include "UICmmRankUpBG.generated.h"

class AUICmmRankUPAnimManager;
class UMaterialInstance;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class XRD777_API AUICmmRankUpBG : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIBlendFactor SrcColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIBlendFactor DstColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIBlendFactor SrcAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIBlendFactor DstAlpha;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pBGMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAlreadySetBGMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmmRankUPAnimManager* AnimManager;
    
public:
    AUICmmRankUpBG();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(const float inDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawBG_Red();
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawBG_5();
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawBG_4(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawBG_3(FColor Top, FColor Bottom);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawBG_2(FColor Top, FColor Bottom);
    
    UFUNCTION(BlueprintCallable)
    void UICmmDrawBG_1(FColor Top, FColor Bottom);
    
    UFUNCTION(BlueprintCallable)
    bool UICmmBGCapture();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartAnimePoemBG1In();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitSettingMaterialBG(UMaterialInstance* Material);
    
};

