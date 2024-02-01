#pragma once
#include "CoreMinimal.h"
#include "OnConfirmDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConfirm, bool, bConfirm);

