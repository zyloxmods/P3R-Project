#pragma once
#include "CoreMinimal.h"
#include "SelItem.h"
#include "SelAEventTypeB.generated.h"

class UAssetLoader;
class UCineCameraComponent;
class UDataTable;
class USprAsset;
class UTexture;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API USelAEventTypeB : public USelItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* pSprAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* pCineCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pLayoutDataTable;
    
public:
    USelAEventTypeB();
};

