#pragma once
#include "CoreMinimal.h"
#include "DebugMenuItem.h"
#include "EDebugMenuItemEventType.h"
#include "DebugMenuEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDebugMenuEventDelegate, FDebugMenuItem, MenuItem, EDebugMenuItemEventType, Type);

