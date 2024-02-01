#pragma once
#include "CoreMinimal.h"
#include "PersonaStatusDraw_Param1EventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPersonaStatusDraw_Param1Event, float, Param1);

