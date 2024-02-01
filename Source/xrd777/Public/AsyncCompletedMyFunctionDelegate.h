#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedMyFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncCompletedMyFunction, int32, Result);

