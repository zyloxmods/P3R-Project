#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "OkadaTestMenu.generated.h"

class AActor;
class UDebugMenu;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AOkadaTestMenu : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* DebugMenu_;
    
public:
    AOkadaTestMenu();
};

