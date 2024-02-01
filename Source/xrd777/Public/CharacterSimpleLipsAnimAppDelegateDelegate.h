#pragma once
#include "CoreMinimal.h"
#include "CharacterSimpleLipsAnimAppListener.h"
#include "ECharacterSimpleLipsAnimAppStateType.h"
#include "CharacterSimpleLipsAnimAppDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterSimpleLipsAnimAppDelegate, ECharacterSimpleLipsAnimAppStateType, LipsAppStateType, const FCharacterSimpleLipsAnimAppListener&, LipsyncParam);

