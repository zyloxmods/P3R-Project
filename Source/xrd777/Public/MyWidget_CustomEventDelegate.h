#pragma once
#include "CoreMinimal.h"
#include "MyWidget_CustomEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMyWidget_CustomEvent, bool, bSetEffect);

