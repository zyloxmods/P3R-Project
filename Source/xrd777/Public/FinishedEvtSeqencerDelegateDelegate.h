#pragma once
#include "CoreMinimal.h"
#include "FinishedEvtSeqencerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishedEvtSeqencerDelegate, int32, idx);

