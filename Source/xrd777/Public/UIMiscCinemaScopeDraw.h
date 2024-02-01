#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIMiscCinemaScopeDraw.generated.h"

class UAssetLoader;
class UPlgAsset;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIMiscCinemaScopeDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr_Cinema;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* m_pPlg_Cinema;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
public:
    AUIMiscCinemaScopeDraw();
};

