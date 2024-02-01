#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "DbgCmpStatusTest.generated.h"

class UDebugMenu;
class UUICmpStatus;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API ADbgCmpStatusTest : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpStatus* Actor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* DebugMenu_;
    
    ADbgCmpStatusTest();
};

