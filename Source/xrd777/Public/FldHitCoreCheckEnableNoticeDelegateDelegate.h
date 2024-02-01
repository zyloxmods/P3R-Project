#pragma once
#include "CoreMinimal.h"
#include "FldHitCoreCheckEnableNoticeDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFldHitCoreCheckEnableNoticeDelegate, APawn*, Player, bool&, Check);

