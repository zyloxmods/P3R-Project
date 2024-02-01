#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "BtlGuiFBufferCapture.generated.h"

class ABtlGuiFBufferCapture;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ABtlGuiFBufferCapture : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlGuiFBufferCapture> LoadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pLoader;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSetupCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is2DCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float animationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float endAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float endGtayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float endWhiteOut;
    
    ABtlGuiFBufferCapture();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWhiteOut(float WhiteOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGrayScale(float GrayScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCapture();
    
    UFUNCTION(BlueprintCallable)
    static void BtlFBufferCaptureStart(bool NewIs2DCapture, bool isGrayScale, float AnimTime);
    
    UFUNCTION(BlueprintCallable)
    static ABtlGuiFBufferCapture* BtlFBufferCaptureGetInstance();
    
    UFUNCTION(BlueprintCallable)
    static void BtlFBufferCaptureDrawEnd();
    
    UFUNCTION(BlueprintCallable)
    static void BtlFBufferCaptureDelete();
    
    UFUNCTION(BlueprintCallable)
    static void BtlFBufferCaptureCreate2D(float GrayScale, float WhiteOut, float AnimTime);
    
    UFUNCTION(BlueprintCallable)
    static void BtlFBufferCaptureCreate(float GrayScale, float WhiteOut, float AnimTime);
    
};

