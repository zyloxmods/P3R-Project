#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LipsyncAppObserverSpeakWatcher.generated.h"

class ULipsyncAppObserverSubsystem;

UCLASS(Blueprintable)
class ULipsyncAppObserverSpeakWatcher : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULipsyncAppObserverSubsystem> LipsyncAppObserverSubsystem;
    
    ULipsyncAppObserverSpeakWatcher();
};

