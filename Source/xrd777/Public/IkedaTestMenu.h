#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "IkedaTestMenu.generated.h"

class AActor;
class UDebugMenu;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AIkedaTestMenu : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* _Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* _DebugMenu;
    
    AIkedaTestMenu();
};

