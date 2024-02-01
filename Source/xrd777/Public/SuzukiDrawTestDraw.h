#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIDrawBaseActor.h"
#include "SuzukiDrawTestDraw.generated.h"

class APreviewWorldUpdater;
class UFrameBufferCapture;
class UMaterial;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UPlgAsset;
class UTexture;

UCLASS(Blueprintable)
class XRD777_API ASuzukiDrawTestDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pParamMateDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* pPlgAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* pCaptureMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pBackgroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pCaptureTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pModelCaptureTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APreviewWorldUpdater* PWorldUpdater_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 State;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFrameBufferCapture* captureBackGround;
    
public:
    ASuzukiDrawTestDraw();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(const float inDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool SyncModelCapture(const FTransform modelTransform, const FVector NewGazeOffset);
    
    UFUNCTION(BlueprintCallable)
    void FromBPDraw(float X, float Y, float Angle);
    
};

