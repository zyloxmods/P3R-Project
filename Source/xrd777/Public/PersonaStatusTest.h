#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "PersonaStatusTest.generated.h"

class APersonaStatus;
class UDebugMenu;
class UUICombineCalc;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API APersonaStatusTest : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* Actor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICombineCalc* CombineCalc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* DebugMenu_;
    
    APersonaStatusTest();
};

