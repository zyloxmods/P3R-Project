#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "ActivityTest.generated.h"

class UDebugMenu;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AActivityTest : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* DebugMenu_;
    
public:
    AActivityTest();
};

