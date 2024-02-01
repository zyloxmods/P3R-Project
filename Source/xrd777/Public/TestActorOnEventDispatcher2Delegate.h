#pragma once
#include "CoreMinimal.h"
#include "TestActorOnEventDispatcher2Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTestActorOnEventDispatcher2, int32, Type);

