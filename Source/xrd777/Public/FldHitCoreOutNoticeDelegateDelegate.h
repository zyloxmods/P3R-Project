#pragma once
#include "CoreMinimal.h"
#include "FldHitCoreOutNoticeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFldHitCoreOutNoticeDelegate, AActor*, OtherActor);

