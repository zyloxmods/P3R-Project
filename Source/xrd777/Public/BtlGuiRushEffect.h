#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlGuiRushEffectParam.h"
#include "BtlGuiRushEffect.generated.h"

class UAssetLoader;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class XRD777_API ABtlGuiRushEffect : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 switchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 materialOt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 renderOt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEffectEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimationPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadComlpeted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBtlFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiRushEffectParam defaultEffectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maskWidth;
    
public:
    ABtlGuiRushEffect();
    UFUNCTION(BlueprintCallable)
    void SetOT(int32 OT);
    
    UFUNCTION(BlueprintCallable)
    void SetEffect(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBtlFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetAppCanvas(int32 appCanvas);
    
    UFUNCTION(BlueprintCallable)
    void AnimationPause(bool Pause);
    
};

