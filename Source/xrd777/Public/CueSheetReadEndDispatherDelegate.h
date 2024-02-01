#pragma once
#include "CoreMinimal.h"
#include "CueSheetReadEndDispatherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCueSheetReadEndDispather, int32, bankID);

