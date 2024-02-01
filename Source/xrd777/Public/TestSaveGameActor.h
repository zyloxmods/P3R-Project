#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestSaveGameActor.generated.h"

class UDebugMenu;

UCLASS(Blueprintable)
class XRD777_API ATestSaveGameActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* mpTestSaveGameDebugMenu;
    
public:
    ATestSaveGameActor();
};

