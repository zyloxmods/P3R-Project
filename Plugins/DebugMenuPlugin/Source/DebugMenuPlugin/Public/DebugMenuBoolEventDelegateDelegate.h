#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuItemEventType.h"
#include "DebugMenuBoolEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDebugMenuBoolEventDelegate, bool, Value, EDebugMenuItemEventType, Type);

