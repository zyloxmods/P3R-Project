#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuBase.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class DEBUGMENUPLUGIN_API UDebugMenuBase : public UObject {
    GENERATED_BODY()
public:
    UDebugMenuBase();
};

