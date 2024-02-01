#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CurveVectorAnimation.h"
#include "AgePanel.generated.h"

class UAssetLoader;
class UMaterial;
class UMaterialInstanceDynamic;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API UAgePanel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* _readSpr;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* _readMat[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* _readMatInst[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation _fadeCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
public:
    UAgePanel();
};

