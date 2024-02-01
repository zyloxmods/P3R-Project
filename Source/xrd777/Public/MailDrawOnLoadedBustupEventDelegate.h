#pragma once
#include "CoreMinimal.h"
#include "MailDrawOnLoadedBustupEventDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMailDrawOnLoadedBustupEvent, UTexture2D*, TextureObject);

