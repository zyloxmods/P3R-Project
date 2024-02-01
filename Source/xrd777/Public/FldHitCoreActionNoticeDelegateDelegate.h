#pragma once
#include "CoreMinimal.h"
#include "FldHitCoreActionNoticeDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFldHitCoreActionNoticeDelegate, APawn*, Player);

