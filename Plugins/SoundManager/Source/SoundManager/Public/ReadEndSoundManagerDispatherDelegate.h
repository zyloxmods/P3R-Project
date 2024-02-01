#pragma once
#include "CoreMinimal.h"
#include "ReadEndSoundManagerDispatherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReadEndSoundManagerDispather, int32, bankID);

