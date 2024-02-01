#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "ImanishiTestMenu.generated.h"

class AActor;
class AAddContentDialog;
class AUICloudCursorDraw;
class UBmdAsset;
class UDebugMenu;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AImanishiTestMenu : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICloudCursorDraw* CloudCursor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAddContentDialog* AdcDialog_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* BmdAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* DebugMenu_;
    
    AImanishiTestMenu();
};

