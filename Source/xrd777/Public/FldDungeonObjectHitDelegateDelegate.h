#pragma once
#include "CoreMinimal.h"
#include "EDungeonObjHitEvent.h"
#include "FldDungeonObjectHitDelegateDelegate.generated.h"

class AFldDungeonObjectActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFldDungeonObjectHitDelegate, EDungeonObjHitEvent, EventType, int32, ID, AFldDungeonObjectActor*, pObject);

