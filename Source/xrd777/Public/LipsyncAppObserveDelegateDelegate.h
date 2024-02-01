#pragma once
#include "CoreMinimal.h"
#include "ELipSyncAppStateType.h"
#include "LipsyncAppListener.h"
#include "LipsyncAppObserveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLipsyncAppObserveDelegate, ELipSyncAppStateType, LipSyncAppStateType, const FLipsyncAppListener&, LipsyncParam);

