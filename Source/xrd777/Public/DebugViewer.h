#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "DebugViewer.generated.h"

class UDebugMenu;

UCLASS(Blueprintable)
class XRD777_API ADebugViewer : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* pMenu;
    
public:
    ADebugViewer();
};

