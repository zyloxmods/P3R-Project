#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIMiscPictureDraw.generated.h"

class UAssetLoader;
class USprAsset;
class UTexture;

UCLASS(Blueprintable)
class XRD777_API AUIMiscPictureDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_pPicture;
    
    AUIMiscPictureDraw();
};

