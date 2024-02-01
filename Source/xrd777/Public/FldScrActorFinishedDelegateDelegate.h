#pragma once
#include "CoreMinimal.h"
#include "FldScrActorFinishedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFldScrActorFinishedDelegate, int32, ExitType);

