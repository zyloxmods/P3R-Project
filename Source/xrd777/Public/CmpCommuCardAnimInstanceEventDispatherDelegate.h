#pragma once
#include "CoreMinimal.h"
#include "CmpCommuCardAnimInstanceEventDispatherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCmpCommuCardAnimInstanceEventDispather, float, RootYaw);

