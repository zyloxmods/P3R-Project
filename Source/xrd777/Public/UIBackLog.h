#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "UIBacklogFinishedDelegateDelegate.h"
#include "UIBackLog.generated.h"

class AUIBackLogDraw;
class UAssetLoader;
class UDataTable;
class UFrameBufferCapture;
class UTexture;
class UUILayoutDataTable;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AUIBackLog : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIBacklogFinishedDelegate OnFinishedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIBackLogDraw> BackLoadDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIBackLogDraw* pBackLoadDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* tex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFrameBufferCapture* captureBackGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pLayoutDataTable;
    
public:
    AUIBackLog();
};

