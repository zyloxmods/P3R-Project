#pragma once
#include "CoreMinimal.h"
#include "AtlEvtLightScenarioDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlEvtLightScenarioDelegate, int32, idx);

