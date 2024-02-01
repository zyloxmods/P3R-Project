#pragma once
#include "CoreMinimal.h"
#include "AutoPlayTickDelegateDelegate.generated.h"

class UAutoPlayGameInstanceSubsystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAutoPlayTickDelegate, UAutoPlayGameInstanceSubsystem*, Subsystem);

