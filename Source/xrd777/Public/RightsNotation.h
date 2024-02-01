#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "RightsNotation.generated.h"

class ARightsNotationDraw;
class UAssetLoader;
class UFrameBufferCapture;
class UTexture;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API ARightsNotation : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARightsNotationDraw> pLoadDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARightsNotationDraw* pDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pCaptureTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFrameBufferCapture* pCaptureBackGround;
    
public:
    ARightsNotation();
};

