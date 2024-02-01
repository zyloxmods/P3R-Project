#pragma once
#include "CoreMinimal.h"
#include "PersonaStatusDraw_Param2EventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPersonaStatusDraw_Param2Event, float, Param1, float, Param2);

