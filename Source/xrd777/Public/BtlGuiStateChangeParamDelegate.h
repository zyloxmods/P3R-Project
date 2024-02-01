#pragma once
#include "CoreMinimal.h"
#include "BtlGuiStateChangeParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBtlGuiStateChangeParam, bool, flag, int32, Number);

