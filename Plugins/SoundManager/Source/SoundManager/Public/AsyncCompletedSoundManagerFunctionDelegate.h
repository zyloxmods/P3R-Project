#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedSoundManagerFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncCompletedSoundManagerFunction, int32, Result);

