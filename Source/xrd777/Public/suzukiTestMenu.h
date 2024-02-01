#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "suzukiTestMenu.generated.h"

class AActor;
class UDebugMenu;

UCLASS(Blueprintable)
class XRD777_API AsuzukiTestMenu : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* DebugMenu_;
    
public:
    AsuzukiTestMenu();
};

