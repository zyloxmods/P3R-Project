#pragma once
#include "CoreMinimal.h"
#include "PlayEvtSeqencerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayEvtSeqencerDelegate, int32, idx);

