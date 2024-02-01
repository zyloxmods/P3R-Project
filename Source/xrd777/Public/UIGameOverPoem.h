#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameOverPoemContent.h"
#include "UIDrawBaseActor.h"
#include "UIGameOverPoem.generated.h"

class AUICmmRankUPAnimManager;
class UAssetLoader;
class UDataTable;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UUILayoutDataTable;
class UUIPoetryDataAsset;

UCLASS(Blueprintable)
class XRD777_API AUIGameOverPoem : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverPoemContent poem[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ripple[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D openRipplesPos[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float openRipplesSize[3];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIPoetryDataAsset* PoetryData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pRippleMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmmRankUPAnimManager* AnimManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pLayoutDataTable;
    
public:
    AUIGameOverPoem();
    UFUNCTION(BlueprintCallable)
    void StartRipple();
    
};

