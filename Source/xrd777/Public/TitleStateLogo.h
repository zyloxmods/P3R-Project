#pragma once
#include "CoreMinimal.h"
#include "CurveLinearColorAnimation.h"
#include "CurveVectorAnimation.h"
#include "TitleStateBase.h"
#include "TitleStateLogo.generated.h"

class UAssetLoader;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class XRD777_API UTitleStateLogo : public UTitleStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* AtlusLogoMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AtlusLogoMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* P_StudioLogoMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* P_StudioLogoMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* UE4AndCRILogoMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* UE4AndCRILogoMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation CurveAtlusLogoAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveLinearColorAnimation CurveAtlusLogoColorAnimation;
    
public:
    UTitleStateLogo();
    UFUNCTION(BlueprintCallable)
    void OnLoadedHolder();
    
};

