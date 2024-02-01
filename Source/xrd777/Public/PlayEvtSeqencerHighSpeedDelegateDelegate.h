#pragma once
#include "CoreMinimal.h"
#include "PlayEvtSeqencerHighSpeedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayEvtSeqencerHighSpeedDelegate, bool, bEnableHighSpeed);

