#pragma once
#include "CoreMinimal.h"
#include "ScrActorFinishedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScrActorFinishedDelegate, int32, ExitType);

