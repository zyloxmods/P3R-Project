#pragma once
#include "CoreMinimal.h"
#include "ForceFinishedEvtSeqencerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FForceFinishedEvtSeqencerDelegate, int32, idx);

